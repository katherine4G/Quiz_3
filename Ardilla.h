#pragma once
#include "Mamiferos.h"
class Ardilla :public Mamiferos
{
protected:
	string tamanioArdilla;
	string Color;

public:

	Ardilla();
	Ardilla(string clase, string nombre, string cuerpo, string resp, int extrem, string desplaz, string reprod, string habit, string tAlimentacion,
		string tamanio, string color);
	~Ardilla();

	//método propio
	void hibernar();

	//metodos virtuales	heredados
	void Alimentarse();
	void Desplazarse();
	void cadenaAlimenticia();
	void mostrarInformacion();

};