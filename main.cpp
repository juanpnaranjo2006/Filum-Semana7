Zulu
zulu_27
Sharing their screen

Zulu — 8/7/2025 3:12 PM
https://makerworld.com/es
MakerWorld: Download Free 3D Models
Leading 3D printing model community for designers and makers. Download thousands of 3D models and stl models for free, and your No.1 option for multicolor 3D models
Image
https://www.turbosquid.com/es/3d-models/3d-weeds-real-time-1403173
Profesor Zoom
 started a call that lasted an hour. — 8/11/2025 7:06 PM
Profesor Zoom — 8/11/2025 7:08 PM
https://docs.google.com/document/d/1E4uEcWllkwkbHnCR7NBpNYIW31yE6g2o78vowQ_bHFk/edit?usp=sharing
Google Docs
Primera_Aproximacion
Profesor Zoom
 started a call that lasted an hour. — 8/17/2025 4:12 PM
Profesor Zoom — 8/17/2025 4:30 PM
Attachment file type: acrobat
CasosSugeridos (1).pdf
182.43 KB
Zulu — 8/17/2025 4:34 PM
https://www.banrepcultural.org/vertices-la-voragine/pdf/La_Voragine.pdf
Mateo1099 — 8/17/2025 4:34 PM
"Aquella noche, la primera de Casanare, tuve por confidente al insomnio.

Al través de la gasa del mosquitero, en los cielos ilímites, veía parpadear las estrellas. Los follajes de las palmeras que nos daban abrigo enmudecían sobre nosotros. Un silencio infinito flotaba en el ámbito, azulando la transparencia del aire. Al lado de mi chinchorro, en su angosto catrecillo de viaje, Alicia dormía con agitada respiración.

Mi ánima atribulada tuvo entonces reflexiones agobiadoras: ¿Qué has hecho de tu propio destino? ¿Qué de esta jovencita que inmolas a tus pasiones? ¿Y tus sueños de gloria, y tus ansias de triunfo y tus primicias de celebridad? ¡Insensato! El lazo que a las mujeres te une lo anuda el hastío. "

La Vorágine, José Eustacio Rivera, Banco e la República, Edición 22, 2024, p. 8.
Image
Image
Mateo1099 — 8/17/2025 4:43 PM
Image
Image
Image
Mateo1099 — 8/17/2025 4:54 PM
Image
Image
Zulu — 8/17/2025 4:57 PM
Image
Image
Mateo1099 — 8/17/2025 5:04 PM
Image
Image
Mateo1099 — 8/17/2025 5:11 PM
Image
Profesor Zoom
 started a call that lasted 2 hours. — 8/20/2025 8:07 PM
Profesor Zoom — 8/20/2025 8:08 PM
https://docs.google.com/document/d/1E4uEcWllkwkbHnCR7NBpNYIW31yE6g2o78vowQ_bHFk/edit?usp=sharing
Google Docs
Primera_Aproximacion
Primera Aproximación - Requisitos del Proyecto Mateo Monroy, Juan Pablo Naranjo y César Zuluaga Descripción general del proyecto El proyecto que desarrollaremos este semestre, el Sistema de Gestión de Experiencias Educativas con Juegos de Mesa, va a ser una base de datos que va a permitir almace...
Image
Zulu — 8/20/2025 9:50 PM
Image
Zulu
 started a call that lasted 4 hours. — 8/24/2025 4:03 PM
Zulu — 8/24/2025 4:15 PM
nombre protagonista voragine: 

Arturo Cova
Profesor Zoom — 8/24/2025 4:16 PM
Image
Zulu — 8/24/2025 5:12 PM
Image
Profesor Zoom — 8/24/2025 6:58 PM
context estaciones2_ctx

sets BUSES
     RUTAS // las rutas del universo
     ESTACIONES

constants dobles // los buses dobles
          estdob // las estaciones dobles
          mb // maximo numero de buses en una ruta


axioms
  @ax1 dobles ⊆ BUSES
  @ax2 dobles ≠ ∅
  @ax3 estdob ⊆ ESTACIONES
  @ax4 estdob ≠  ∅
  @ax5 mb ∈ ℕ1 // el maximo es al menos 1
  @ax6 finite(BUSES)
  @ax7 finite(RUTAS)
  @ax8 finite(ESTACIONES)
end
Mateo1099 — 8/24/2025 7:42 PM
event arrancar_bus
  any b V
  where
    @gr1 b ∈ dom(busEst)
    @gr2 V ⊆ estru[{rusys(b)}]
    /* Caso 1: si completó la vuelta, reinicia => V = ∅ /
    @gr3 (visited[{b}] = estru[{rusys(b)}]) ⇒ (V = ∅)
    / Caso 2: si no la completó, continúa => V = visited[{b}] */
    @gr4 (visited[{b}] ⊂ estru[{rusys(b)}]) ⇒ (V = visited[{b}])
  then
    @ac1 busEst  ≔ {b} ⩤ busEst
    @ac2 visited ≔ ({b} ⩤ visited) ∪ ({b} × V)
end
Zulu
 started a call that lasted a few seconds. — 8/26/2025 9:01 PM
Profesor Zoom
 started a call that lasted an hour. — 8/26/2025 9:03 PM
Profesor Zoom — 8/26/2025 10:10 PM
context estaciones2_ctx

sets BUSES
     RUTAS // las rutas del universo
     ESTACIONES

constants dobles // los buses dobles
          estdob // las estaciones dobles
          mb // maximo numero de buses en una ruta
          estNum // numero asociado a cada estacion


axioms
  @ax1 dobles ⊆ BUSES
  @ax2 dobles ≠ ∅
  @ax3 estdob ⊆ ESTACIONES
  @ax4 estdob ≠  ∅
  @ax5 mb ∈ ℕ1 // el maximo es al menos 1
  @ax6 estNum ∈ ESTACIONES ↣ ℕ
end
machine modelo3_estac sees estaciones2_ctx

variables rusys // las rutas ya definidas en el sistema
          estru // las estaciones de una ruta
          busEst // estacion en la que esta parqueado un bus
          visited // estaciones visitadas por un bus
Expand
message.txt
7 KB
Mateo1099
 started a call that lasted 4 hours. — 8/31/2025 3:59 PM
Profesor Zoom — 8/31/2025 4:58 PM
Image
Image
Image
Profesor Zoom — 8/31/2025 6:26 PM
Image
Zulu — 8/31/2025 6:44 PM
https://mermaid.live/edit#pako:eNptkGFrgzAQhv9Kuc8iajTafMtsNhxdLUbLGEIJNWvLZlIyhXXF_z6rXcfo8uHy3j3vcZecYKMrCQSkme3F1oi6VJP-jPGxYA8pXz8xTiensfQLu1KNImOcZavBcSXniz0vWZawRZzQNZsVMc2Tf1zLLL1nPM3-gFFQnvCcLXK2ntO7W8xWdF7QOEkXtwwsqKWpxb7q3zasXkKzk7UsgfSyEuathFJ1vU-0jeZHtQHSmFZaYHS73QF5Fe8ffdYeKtHIy99cqwehXrSuf1q25jzn0i5VJU2sW9UA8RGOBjeQE3wC8UIb-S5ysId8jH3XwRYcgbhBZE-D0HNd7OFw6oZeZ8HXMMCxI-wF0zDEKEARwk7QfQOwz33P
Online FlowChart & Diagrams Editor - Mermaid Live Editor
Simplify documentation and avoid heavy tools. Open source Visio Alternative. Commonly used for explaining your code! Mermaid is a simple markdown-like script language for generating charts from text via javascript.
Profesor Zoom — 8/31/2025 7:01 PM
https://co.linkedin.com/in/andrés-adolfo-navarro-newball-a8a797137
https://co.linkedin.com/in/andrés-adolfo-navarro-newball-a8a797137
Mateo1099
 started a call that lasted 2 hours. — 9/1/2025 7:09 PM
Mateo1099
 started a call that lasted 6 hours. — 9/7/2025 4:06 PM
Zulu — 9/7/2025 4:13 PM
Image
Zulu — 9/7/2025 4:43 PM
Image
Profesor Zoom — 9/7/2025 5:22 PM
Image
Image
Profesor Zoom — 9/7/2025 8:03 PM
Representaciones Virtuales: El mundo de La Vorágine
Mateo Monroy, Juan Pablo Naranjo y César Zuluaga
Pontificia Universidad Javeriana

Resumen
En este proyecto se emplearon herramientas de computación gráfica contemporáneas para la recreación visual de un pasaje de La Vorágine, obra fundamental de la literatura colombiana escrita por José Eustasio Rivera. Con el software Blender, se diseñaron y modelaron los elementos tridimensionales que representan la atmósfera selvática y los personajes descritos en el texto. Posteriormente, mediante OpenGL, se implementaron técnicas de renderizado en tiempo real que permitieron dar vida a la escena en un mundo 3D virtual. El objetivo principal fue explorar y aprender acerca de las herramientas que se utilizan hoy en día en los contextos de computación gráfica y cómo se pueden utilizar estas herramientas para darle vida a distintos escenarios que mezclan la ficción y la realidad.
Zulu — 9/7/2025 8:04 PM
https://docs.google.com/document/d/1apXP8Ux5mrNvZ3Qf7_-FyFTdnbe27lc90k0X9KEqw3k/edit?usp=sharing
Google Docs
Representaciones Virtuales: El mundo de La Vorágine
Representaciones Virtuales: El mundo de La Vorágine Mateo Monroy, Juan Pablo Naranjo y César Zuluaga Pontificia Universidad Javeriana Resumen En este proyecto se emplearon herramientas de computación gráfica contemporáneas para la recreación visual de un pasaje de La Vorágine, obra fundamental d...
Image
Profesor Zoom — 9/7/2025 8:29 PM
Image
Mateo1099
 started a call that lasted 2 hours. — 9/10/2025 6:38 PM
Profesor Zoom
 started a call that lasted 2 hours. — Yesterday at 8:26 PM
Mateo1099
 started a call. — 4:01 PM
Profesor Zoom — 4:22 PM
https://game8-co.translate.goog/games/Pokemon-Scarlet-Violet/archives/401017?_x_tr_sl=en&_x_tr_tl=es&_x_tr_hl=es&_x_tr_pto=tc#hl_2
Game8｜The Top Gaming and App Walkthroughs Straight from Japan!
Normal Sandwich Recipes | Pokemon Scarlet and Violet (SV)｜Game8
A list of all Normal Sandwich recipes in Pokemon Scarlet and Violet (SV). Read on to see a list of recipes that increases the odds of finding Normal-type Pokemon, how to make a Normal Shiny Sandwich and Normal Encounter Sandwich, as well as what ingredients you need to make each sandwich recipe.
Normal Sandwich Recipes | Pokemon Scarlet and Violet (SV)｜Game8
Mateo1099 — 4:41 PM
Attachment file type: unknown
estrella.obj
14.58 KB
Mateo1099 — 4:49 PM
Attachment file type: unknown
piso.obj
318 bytes
Profesor Zoom — 7:39 PM
https://github.com/juanpnaranjo2006/Filum-Semana7.git
GitHub
GitHub - juanpnaranjo2006/Filum-Semana7
Contribute to juanpnaranjo2006/Filum-Semana7 development by creating an account on GitHub.
GitHub - juanpnaranjo2006/Filum-Semana7
Objeto.h
#pragma once
#include <GL/glew.h>
#include <GL/freeglut.h>
#include "glApplication.h"
#include "glutWindow.h"
#include <iostream>
#include "glsl.h"
#include "glm.h"
#include <FreeImage.h> // Para Textura: Incluir librería
#include <string>

class Objeto
{
private:
    std::string textureFileName;
    std::string modelFileName;
    bool isTexturized;
public:
    Objeto(std::string& modelFileName, std::string& textureFileName);
    Objeto(std::string& modelFileName);
    void draw(GLMmodel modelos, int modelosPos, GLuint texid, int texidPos, GLfloat x, GLfloat y, GLfloat z, GLfloat scaleFactor);

    std::string getModelFileName();
    std::string getTextureFileName();
    bool itIsTexturized();

    void setModelFileName(std::string& newFileName);
    void setTextureFileName(std::string& newFileName);
};
Objeto.cpp
#include "Objeto.h"

Objeto::Objeto(std::string& modelFileName, std::string& textureFileName)
{
    this->modelFileName = modelFileName;
    this->textureFileName = textureFileName;
    if (this->textureFileName == "")
    {
        isTexturized = false;
    }
    else 
    {
        isTexturized = true;
    }
}

Objeto::Objeto(std::string& modelFileName)
{
    this->modelFileName = modelFileName;
    this->textureFileName = "";
    isTexturized = false;
}

void Objeto::draw(GLMmodel** modelos, int modelosPos, GLuint* texid, int texidPos, GLfloat x, GLfloat y, GLfloat z, GLfloat scaleFactor)
{
    glPushMatrix();
        glTranslatef(x, y, z);
        glScalef(scaleFactor, scaleFactor, scaleFactor);
        if (texid != NULL && texid[texidPos] != NULL)
        {
            glBindTexture(GL_TEXTURE_2D, texid[texidPos]);
            glmDraw(modelos[modelosPos], GLM_SMOOTH | GLM_MATERIAL | GLM_TEXTURE);
        }
        else 
        {
            glmDraw(modelos[modelosPos], GLM_SMOOTH | GLM_MATERIAL);
        }
        //std::cout << "texidPos = " << texidPos << "\n modelosPos = " << modelosPos << std::endl;
    glPopMatrix();
}

std::string Objeto::getModelFileName()
{
    return modelFileName;
}

std::string Objeto::getTextureFileName()
{
    return textureFileName;
}

bool Objeto::itIsTexturized()
{
    return isTexturized;
}

void Objeto::setModelFileName(std::string& newFileName)
{
    modelFileName = newFileName;
}

void Objeto::setTextureFileName(std::string& newFileName)
{
    textureFileName = newFileName;
}
Profesor Zoom — 8:01 PM
Attachment file type: archive
Mallas.zip
6.87 MB
Profesor Zoom — 8:09 PM
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
... (269 lines left)
Collapse
main.cpp
11 KB
﻿
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