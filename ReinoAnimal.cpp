#include "ReinoAnimal.h"

ReinoAnimal::ReinoAnimal()
{
	clasificacion = " ";
	nombreAnimal = " ";
}

ReinoAnimal::ReinoAnimal(string clase, string nombre)
{
	this->clasificacion = clase;
	this->nombreAnimal = nombre;
}

ReinoAnimal::~ReinoAnimal()
{
	//cout << "delete animal" << endl;
}
