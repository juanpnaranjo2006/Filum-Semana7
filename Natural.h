#pragma once
#include "Objeto.h"
class Natural : public Objeto
{
public:
	Natural(std::string& modelFileName, std::string& textureFileName) : Objeto(modelFileName, textureFileName) {}
	Natural(std::string& modelFileName) : Objeto(modelFileName) {} //usa el mismo constructor de Objeto para ambos
	void use();
};

