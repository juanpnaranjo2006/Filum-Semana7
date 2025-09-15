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