#include "Peces.h"
Peces::Peces()
{
	TipoEsqueleto = "";
	TipoBranqueas = "";
}

Peces::Peces(string clase, string nombre, string cuerpo, string resp, int extrem, string desplaz, string reprod, string habit, string tEsqueleto, string tipoBranquea)
	: Vertebrados(clase, nombre, cuerpo, resp, extrem, desplaz, reprod, habit)
{
	this->TipoEsqueleto = tEsqueleto;
	this->TipoBranqueas = tipoBranquea;

}

Peces::~Peces()
{
}

