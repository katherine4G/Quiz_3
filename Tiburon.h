#pragma once
#include "Peces.h"
class Tiburon : public Peces
{
private:
	string tamanioBallena;
	int cantidadDientes;

public:
	Tiburon();
	Tiburon(string clase, string nombre, string cuerpo, string resp, int extrem, string desplaz, string reprod, string habit, string tEsqueleto, string tipoBranquea
		, string tamanioTib, int cDientes);
	~Tiburon();

	//método propio
	void comunicacion();

	//metodos virtuales	heredados
	void Alimentarse();
	void Desplazarse();
	void cadenaAlimenticia();
	void mostrarInformacion();
};

