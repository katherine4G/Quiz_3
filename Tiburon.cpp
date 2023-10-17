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
	cout << "\tCOMUNICAC�N " << endl;
	cout << "\tLos tiburones tienen un �rgano especial llamado �rgano de Lorenzini,localizado en su cabeza \n\t y les permite comunicarse  a trav�s de se�ales qu�micas y se�ales el�ctricas. \n" << endl;
}

void Tiburon::Alimentarse()
{
	cout << "\tALIMENTACI�N " << endl;
	cout << "\t El tibur�n es carn�voro y su gran olfato les permite cazar f�cilmete a sus presas \n" << endl;
}

void Tiburon::Desplazarse()
{
	cout << "\tDEZPLAZAMIENTO " << endl;

	cout << "\tLos tiburones se desplazan nadando con ayuda de sus aletas que les sirven para guiarse\n\t y cambiar su direcci�n de desplazamiento \n" << endl;

}

void Tiburon::cadenaAlimenticia()
{
	cout << "\tCADENA ALIMENTICIA " << endl;

	cout << "\tEl tibur�n est� en el tope de esta, se alimenta de peces, moluscos, crust�ceos,\n\t tortugas, focas, delfines, ballenas, aves y otros tiburones. \n" << endl;

}

void Tiburon::mostrarInformacion()
{
	cout << "\t\t-DATOS-" << endl;
	cout << "\tClasificai�n: " << clasificacion << "\n"
		<< "\tNombre: " << nombreAnimal << " \n"
		<< "\tTipo de cuerpo: " << TipoCuerpo << " \n"
		<< "\tTipo de respiraci�n: " << TipoRespiracion << " \n"
		<< "\tNo. extremidades: " << CantExtremidades << " \n"
		<< "\tTipo de desplazamiento: " << TipoDesplazam << " \n"
		<< "\tReproducci�n: " << TipoReproducci�n << " \n"
		<< "\tHabitat: " << Habitat << " \n"
		<< "\tTama�o: " << tamanioBallena << " \n"
		<< "\tCantidad de dientes: " << cantidadDientes << "\n\n";

}

