#include "Vertebrados.h"
Vertebrados::Vertebrados()
{
	TipoCuerpo = " ";
	TipoRespiracion = " ";
	CantExtremidades = 0;
	TipoDesplazam = " ";
	TipoReproducción = " ";
	Habitat = " ";

}
Vertebrados::Vertebrados(string clase, string nombre, string cuerpo, string resp, int extrem, string desplaz, string reprod, string habit) : ReinoAnimal(clase, nombre)
{
	this->TipoCuerpo = cuerpo;
	this->TipoRespiracion = resp;
	this->CantExtremidades = extrem;
	this->TipoDesplazam = desplaz;
	this->TipoReproducción = reprod;
	this->Habitat = habit;
	//cout << "se crea el animal \n";

}

Vertebrados::~Vertebrados()
{
	//cout << "borrar vertebrado" << endl;
}

void Vertebrados::Dormir()
{
	cout << "El animal duerme \n";
}