#pragma once
#include <iostream>
#include <string>
using namespace std;

class ReinoAnimal
{
protected:
	string clasificacion; //Vertebrados o Invertebrados
	string nombreAnimal;
public:
	ReinoAnimal();
	ReinoAnimal(string clase, string nombre);
	~ReinoAnimal();

	virtual void cadenaAlimenticia() = 0;
	virtual void mostrarInformacion() = 0;



};


