#pragma once
#include "Vertebrados.h"

class Mamiferos : public Vertebrados
{
protected:
	string TipoAimentaci�n;
public:
	Mamiferos();
	Mamiferos(string clase, string nombre, string cuerpo, string resp, int extrem, string desplaz,
		string reprod, string habit, string tAlimentacion);
	~Mamiferos();
};

