#pragma once
#include "ReinoAnimal.h"

class Vertebrados : public ReinoAnimal
{

protected:
	string TipoCuerpo;		  // escamas - pelos
	string TipoRespiracion;	  // braquial - pulmonar
	int CantExtremidades;	  // 1 aleta - 4 patas	  (generalmente)
	string TipoDesplazam;	  // nadan - caminan
	string TipoReproducción;  // oviparos - viviparos 
	string Habitat;           // Agua - Tierra
public:
	Vertebrados();
	//constructor heredado:
	Vertebrados(string clase, string nombre, string cuerpo, string resp, int extrem, string desplaz, string reprod, string habit);
	~Vertebrados();

	virtual void Alimentarse() = 0;
	virtual void Desplazarse() = 0;
	void Dormir();
	

};


