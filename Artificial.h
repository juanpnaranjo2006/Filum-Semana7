#pragma once

#include "Objeto.h"

class Artificial : public Objeto
{
public:
	Artificial(std::string& modelFileName, std::string& textureFileName) : Objeto(modelFileName, textureFileName){} 
	Artificial(std::string& modelFileName) : Objeto(modelFileName){} //usa el mismo constructor de Objeto para ambos
	void use();
};

