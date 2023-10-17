#include "Ardilla.h"
Ardilla::Ardilla()
{
	tamanioArdilla = " ";
	Color = " ";
}

Ardilla::Ardilla(string clase, string nombre, string cuerpo, string resp, int extrem, string desplaz, string reprod, string habit, string tAlimentacion, string tamanio, string color)
	:Mamiferos(clase, nombre, cuerpo, resp, extrem, desplaz, reprod, habit, tAlimentacion)
{
	this->tamanioArdilla = tamanio;
	this->Color = color;
}

Ardilla::~Ardilla()
{
}

void Ardilla::hibernar()
{
	cout << "\tHIBERNACI�N" << endl;
	cout << "\t Entran en un estado de letargo e inactividad duranate unos meses, en invierno\n" << endl;



}

void Ardilla::Alimentarse()
{
	cout << "\tALIMENTACI�N " << endl;
	cout << "\t Las ardilla es herb�vora y se alimentan  de semillas, frutas, nueces,hojas, ra�ces, \n\tcorteza de �rboles y algunos insectos peque�os. \n" << endl;

}

void Ardilla::Desplazarse()
{
	cout << "\tDEZPLAZAMIENTO " << endl;
	cout << "\tLa ardilla camina \n" << endl;

}

void Ardilla::cadenaAlimenticia()
{
	cout << "\tCADENA ALIMENTICIA " << endl;
	cout << "\t En la cadena alimenticia son presa de depredadores como aves, serpientes \n\ty mam�feros carn�voros como zorros y coyotes. \n" << endl;

}

void Ardilla::mostrarInformacion()
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
		<< "\tTipo de Alimentaci�n: " << TipoAimentaci�n << " \n"
		<< "\tTama�o: " << tamanioArdilla << " \n"
		<< "\tColor: " << Color << " \n\n";


}
