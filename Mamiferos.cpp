#include "Mamiferos.h"
Mamiferos::Mamiferos()
{
	TipoAimentación = "";
}

Mamiferos::Mamiferos(string clase, string nombre, string cuerpo, string resp, int extrem, string desplaz, string reprod, string habit, string tAlimentacion)
	: Vertebrados(clase, nombre, cuerpo, resp, extrem, desplaz, reprod, habit)
{
	this->TipoAimentación = tAlimentacion;
}

Mamiferos::~Mamiferos()
{

}

