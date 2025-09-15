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