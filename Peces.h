#pragma once

#include "Vertebrados.h"
class Peces : public Vertebrados
{

protected:
	string TipoEsqueleto;
	string TipoBranqueas;
public:
	Peces();
	Peces(string clase, string nombre, string cuerpo, string resp, int extrem, string desplaz, string reprod, string habit
		, string tEsqueleto, string tipoBranquea);
	~Peces();



};

