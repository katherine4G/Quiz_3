#include "Tiburon.h"
Tiburon::Tiburon()
{
	tamanioBallena = "";
	cantidadDientes = 0;

}

Tiburon::Tiburon(string clase, string nombre, string cuerpo, string resp, int extrem, string desplaz, string reprod, string habit, string tEsqueleto, string tipoBranquea, string tamanioTib, int cDientes)
	:Peces(clase, nombre, cuerpo, resp, extrem, desplaz, reprod, habit, tEsqueleto, tipoBranquea)
{
	this->tamanioBallena = tamanioTib;
	this->cantidadDientes = cDientes;
}

Tiburon::~Tiburon()
{
}

void Tiburon::comunicacion()
{
	cout << "\tCOMUNICACÓN " << endl;
	cout << "\tLos tiburones tienen un órgano especial llamado órgano de Lorenzini,localizado en su cabeza \n\t y les permite comunicarse  a través de señales químicas y señales eléctricas. \n" << endl;
}

void Tiburon::Alimentarse()
{
	cout << "\tALIMENTACIÓN " << endl;
	cout << "\t El tiburón es carnívoro y su gran olfato les permite cazar fácilmete a sus presas \n" << endl;
}

void Tiburon::Desplazarse()
{
	cout << "\tDEZPLAZAMIENTO " << endl;

	cout << "\tLos tiburones se desplazan nadando con ayuda de sus aletas que les sirven para guiarse\n\t y cambiar su dirección de desplazamiento \n" << endl;

}

void Tiburon::cadenaAlimenticia()
{
	cout << "\tCADENA ALIMENTICIA " << endl;

	cout << "\tEl tiburón está en el tope de esta, se alimenta de peces, moluscos, crustáceos,\n\t tortugas, focas, delfines, ballenas, aves y otros tiburones. \n" << endl;

}

void Tiburon::mostrarInformacion()
{
	cout << "\t\t-DATOS-" << endl;
	cout << "\tClasificaión: " << clasificacion << "\n"
		<< "\tNombre: " << nombreAnimal << " \n"
		<< "\tTipo de cuerpo: " << TipoCuerpo << " \n"
		<< "\tTipo de respiración: " << TipoRespiracion << " \n"
		<< "\tNo. extremidades: " << CantExtremidades << " \n"
		<< "\tTipo de desplazamiento: " << TipoDesplazam << " \n"
		<< "\tReproducción: " << TipoReproducción << " \n"
		<< "\tHabitat: " << Habitat << " \n"
		<< "\tTamaño: " << tamanioBallena << " \n"
		<< "\tCantidad de dientes: " << cantidadDientes << "\n\n";

}

