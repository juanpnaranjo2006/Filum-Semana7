//=============================================================================
// Sample Application: Lighting (Per Fragment Phong)
//=============================================================================

#include <GL/glew.h>
#include <GL/freeglut.h>
#include "glApplication.h"
#include "glutWindow.h"
#include <iostream>
#include "glsl.h"
#include <time.h>
#include "glm.h"
#include <FreeImage.h> //*** Para Textura: Incluir librería
#include <string>
#include <vector>
#include <map>
#include "Artificial.h"
#include "Natural.h"
#define NT 20
#define NO 20

//-----------------------------------------------------------------------------


class myWindow : public cwc::glutWindow
{
protected:
	cwc::glShaderManager SM;
	cwc::glShader* shaderNoTexture; //Shader normalito que no tendra texturas
	cwc::glShader* shaderTexture; //Para Textura: variable para abrir los shader de textura
	GLuint ProgramObject;
	clock_t time0, time1;
	float timer010;  // timer counting 0->1->0
	bool bUp;        // flag if counting up or down.
	GLuint texid[NT]; //*** Para Textura: variable que almacena el identificador de textura
	GLMmodel* modelos[NO]; //Arreglo de modelos que almacena los modelos de la escena
	std::vector<Objeto*> objetos;
	std::map<int, int> modelosIdToTextureId;
	std::string RUTA_MALLAS;


public:
	myWindow() {}

	void abrirMalla(int i, std::string& nombreMalla)
	{
		char* ptr;
		ptr = new char[nombreMalla.length() + 1];  // +1 para el '\0'
		strcpy(ptr, nombreMalla.c_str());

		modelos[i] = NULL;
		if (!modelos[i])
		{
			modelos[i] = glmReadOBJ(ptr);
			if (!modelos[i])
				exit(0);

			glmUnitize(modelos[i]);
			glmFacetNormals(modelos[i]);
			glmVertexNormals(modelos[i], 90.0);
		}

		delete[] ptr;
	}

	//*** Para Textura: aqui adiciono un método que abre la textura en JPG
	void initialize_texture(int nt, std::string& nombre)
	{
		char* ptr;
		ptr = new char[nombre.length() + 1];  // +1 para el '\0'
		strcpy(ptr, nombre.c_str());


		int w, h;
		GLubyte* data = 0;
		//data = glmReadPPM("soccer_ball_diffuse.ppm", &w, &h);
		//std::cout << "Read soccer_ball_diffuse.ppm, width = " << w << ", height = " << h << std::endl;

		//dib1 = loadImage("soccer_ball_diffuse.jpg"); //FreeImage

		glGenTextures(1, &texid[nt]);
		glBindTexture(GL_TEXTURE_2D, texid[nt]);
		glTexEnvi(GL_TEXTURE_2D, GL_TEXTURE_ENV_MODE, GL_MODULATE);
		glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
		glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);

		// Loading JPG file
		FIBITMAP* bitmap = FreeImage_Load(
			FreeImage_GetFileType(ptr, 0),
			ptr);  //*** Para Textura: esta es la ruta en donde se encuentra la textura

		FIBITMAP* pImage = FreeImage_ConvertTo32Bits(bitmap);
		int nWidth = FreeImage_GetWidth(pImage);
		int nHeight = FreeImage_GetHeight(pImage);

		glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA8, nWidth, nHeight,
			0, GL_BGRA, GL_UNSIGNED_BYTE, (void*)FreeImage_GetBits(pImage));

		FreeImage_Unload(pImage);
		//
		glEnable(GL_TEXTURE_2D);

		std::cout << "Texture initialized successfully!" << std::endl;

		delete[] ptr;
	}


	virtual void OnRender(void)
	{
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

		//timer010 = 0.09; //for screenshot!

		glPushMatrix();
		glTranslatef(0, 0, -10);
		glRotatef(timer010 * 360, 0.5, 1.0f, 0.1f);


		//Para objetos sin texturas
		if (shaderNoTexture) shaderNoTexture->begin();

		//Estrella --> Objeto Hecho por la tribu en Blender
		objetos[1]->draw(modelos, 1, NULL, NULL, 0.0f, 6.0f, 0.0f, 10.0f);

		//Piso --> Objeto Artificial
		objetos[2]->draw(modelos, 2, NULL, NULL, 0.0f, 0.0f, 0.0f, 10.0f);

		//Palma --> Objeto Natural
		objetos[3]->draw(modelos, 3, NULL, NULL, 3.0f, 3.0f, 0.0f, 3.0f);

		//Caballo --> Objeto Natural
		objetos[4]->draw(modelos, 4, NULL, NULL, -3.0f, 2.0f, 0.0f, 3.0f);

		//Silla --> Objeto Artificial
		objetos[5]->draw(modelos, 5, NULL, NULL, 0.0f, 1.0f, 3.0f, 1.0f);

		if (shaderNoTexture) shaderNoTexture->end();

		//*** Para Textura: llamado al shader para objetos texturizados
		if (shaderTexture) shaderTexture->begin();

		//Fogata --> Objeto Texturizado
		objetos[0]->draw(modelos, 0, texid, modelosIdToTextureId[0], 0.0f, 0.5f, 0.0f, 1.0f);

		if (shaderTexture) shaderTexture->end();


		glutSwapBuffers();
		glPopMatrix();

		UpdateTimer();

		Repaint();
	}

	virtual void OnIdle() {}

	// When OnInit is called, a render context (in this case GLUT-Window) 
	// is already available!
	virtual void OnInit()
	{
		glClearColor(0.5f, 0.5f, 1.0f, 0.0f);
		glShadeModel(GL_SMOOTH);
		glEnable(GL_DEPTH_TEST);

		shaderNoTexture = SM.loadfromFile("vertexshader.txt", "fragmentshader.txt"); // load (and compile, link) from file
		if (shaderNoTexture == 0)
			std::cout << "Error Loading, compiling or linking shader\n";
		else
		{
			ProgramObject = shaderNoTexture->GetProgramObject();
		}

		//*** Para Textura: abre los shaders para texturas
		shaderTexture = SM.loadfromFile("vertexshaderT.txt", "fragmentshaderT.txt"); // load (and compile, link) from file
		if (shaderTexture == 0)
			std::cout << "Error Loading, compiling or linking shader\n";
		else
		{
			ProgramObject = shaderTexture->GetProgramObject();
		}

		time0 = clock();
		timer010 = 0.0f;
		bUp = true;

		//asignación de nombres de mallas y nombres de texturas asociadas
		RUTA_MALLAS = "./Mallas/";
		Artificial* objetoArt = new Artificial(RUTA_MALLAS + "Campfire.obj", RUTA_MALLAS + "Campfire.jpg");
		objetos.push_back(objetoArt);
		Natural* objetoNat = new Natural(RUTA_MALLAS + "Estrella.obj");
		objetos.push_back(objetoNat);
		objetoArt = new Artificial(RUTA_MALLAS + "Piso.obj");
		objetos.push_back(objetoArt);
		objetoNat = new Natural(RUTA_MALLAS + "Palma.obj");
		objetos.push_back(objetoNat);
		objetoNat = new Natural(RUTA_MALLAS + "Horse.obj");
		objetos.push_back(objetoNat);
		objetoArt = new Artificial(RUTA_MALLAS + "Silla.obj");
		objetos.push_back(objetoArt);

		//Abrir Mallas y respectivas texturas
		modelosIdToTextureId.clear();
		int j = 0;
		for (int i = 0; i < objetos.size(); i++)
		{
			abrirMalla(i, objetos[i]->getModelFileName());

			if (objetos[i]->itIsTexturized())
			{
				initialize_texture(j, objetos[i]->getTextureFileName());
				modelosIdToTextureId[i] = j;
				j++;
			}
		}

		DemoLight();

	}

	virtual void OnResize(int w, int h)
	{
		if (h == 0) h = 1;
		float ratio = 1.0f * (float)w / (float)h;

		glMatrixMode(GL_PROJECTION);
		glLoadIdentity();

		glViewport(0, 0, w, h);

		gluPerspective(45, ratio, 1, 100);
		glMatrixMode(GL_MODELVIEW);
		glLoadIdentity();
		gluLookAt(0.0f, 0.0f, 4.0f,
			0.0, 0.0, -1.0,
			0.0f, 1.0f, 0.0f);
	}
	virtual void OnClose(void) {}
	virtual void OnMouseDown(int button, int x, int y) {}
	virtual void OnMouseUp(int button, int x, int y) {}
	virtual void OnMouseWheel(int nWheelNumber, int nDirection, int x, int y) {}

	virtual void OnKeyDown(int nKey, char cAscii)
	{
		if (cAscii == 27) // 0x1b = ESC
		{
			this->Close(); // Close Window!
		}
	};

	virtual void OnKeyUp(int nKey, char cAscii)
	{
		if (cAscii == 's')      // s: Shader
			shaderNoTexture->enable();
		else if (cAscii == 'f') // f: Fixed Function
			shaderNoTexture->disable();
	}

	void UpdateTimer()
	{
		time1 = clock();
		float delta = static_cast<float>(static_cast<double>(time1 - time0) / static_cast<double>(CLOCKS_PER_SEC));
		delta = delta / 4;
		if (delta > 0.00005f)
		{
			time0 = clock();
			if (bUp)
			{
				timer010 += delta;
				if (timer010 >= 1.0f) { timer010 = 1.0f; bUp = false; }
			}
			else
			{
				timer010 -= delta;
				if (timer010 <= 0.0f) { timer010 = 0.0f; bUp = true; }
			}
		}
	}

	void DemoLight(void)
	{
		glEnable(GL_LIGHTING);
		glEnable(GL_LIGHT0);
		glEnable(GL_NORMALIZE);
		/*
		// Light model parameters:
		// -------------------------------------------

		GLfloat lmKa[] = {0.0, 0.0, 0.0, 0.0 };
		glLightModelfv(GL_LIGHT_MODEL_AMBIENT, lmKa);

		glLightModelf(GL_LIGHT_MODEL_LOCAL_VIEWER, 1.0);
		glLightModelf(GL_LIGHT_MODEL_TWO_SIDE, 0.0);

		// -------------------------------------------
		// Spotlight Attenuation

		GLfloat spot_direction[] = {1.0, -1.0, -1.0 };
		GLint spot_exponent = 30;
		GLint spot_cutoff = 180;

		glLightfv(GL_LIGHT0, GL_SPOT_DIRECTION, spot_direction);
		glLighti(GL_LIGHT0, GL_SPOT_EXPONENT, spot_exponent);
		glLighti(GL_LIGHT0, GL_SPOT_CUTOFF, spot_cutoff);

		GLfloat Kc = 1.0;
		GLfloat Kl = 0.0;
		GLfloat Kq = 0.0;

		glLightf(GL_LIGHT0, GL_CONSTANT_ATTENUATION,Kc);
		glLightf(GL_LIGHT0, GL_LINEAR_ATTENUATION, Kl);
		glLightf(GL_LIGHT0, GL_QUADRATIC_ATTENUATION, Kq);


		// -------------------------------------------
		// Lighting parameters:

		GLfloat light_pos[] = {0.0f, 5.0f, 5.0f, 1.0f};
		GLfloat light_Ka[]  = {1.0f, 0.5f, 0.5f, 1.0f};
		GLfloat light_Kd[]  = {1.0f, 0.1f, 0.1f, 1.0f};
		GLfloat light_Ks[]  = {1.0f, 1.0f, 1.0f, 1.0f};

		glLightfv(GL_LIGHT0, GL_POSITION, light_pos);
		glLightfv(GL_LIGHT0, GL_AMBIENT, light_Ka);
		glLightfv(GL_LIGHT0, GL_DIFFUSE, light_Kd);
		glLightfv(GL_LIGHT0, GL_SPECULAR, light_Ks);

		// -------------------------------------------
		// Material parameters:

		GLfloat material_Ka[] = {0.5f, 0.0f, 0.0f, 1.0f};
		GLfloat material_Kd[] = {0.4f, 0.4f, 0.5f, 1.0f};
		GLfloat material_Ks[] = {0.8f, 0.8f, 0.0f, 1.0f};
		GLfloat material_Ke[] = {0.1f, 0.0f, 0.0f, 0.0f};
		GLfloat material_Se = 20.0f;

		glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT, material_Ka);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, material_Kd);
		glMaterialfv(GL_FRONT_AND_BACK, GL_SPECULAR, material_Ks);
		glMaterialfv(GL_FRONT_AND_BACK, GL_EMISSION, material_Ke);
		glMaterialf(GL_FRONT_AND_BACK, GL_SHININESS, material_Se);
		*/
	}
};

//-----------------------------------------------------------------------------

class myApplication : public cwc::glApplication
{
public:
	virtual void OnInit() { std::cout << "Hello World!\n"; }
};

//-----------------------------------------------------------------------------

int main(void)
{
	myApplication* pApp = new myApplication;
	myWindow* myWin = new myWindow();

	pApp->run();
	delete pApp;
	return 0;
}

//-----------------------------------------------------------------------------