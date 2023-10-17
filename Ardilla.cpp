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
	cout << "\tHIBERNACIÓN" << endl;
	cout << "\t Entran en un estado de letargo e inactividad duranate unos meses, en invierno\n" << endl;



}

void Ardilla::Alimentarse()
{
	cout << "\tALIMENTACIÓN " << endl;
	cout << "\t Las ardilla es herbívora y se alimentan  de semillas, frutas, nueces,hojas, raíces, \n\tcorteza de árboles y algunos insectos pequeños. \n" << endl;

}

void Ardilla::Desplazarse()
{
	cout << "\tDEZPLAZAMIENTO " << endl;
	cout << "\tLa ardilla camina \n" << endl;

}

void Ardilla::cadenaAlimenticia()
{
	cout << "\tCADENA ALIMENTICIA " << endl;
	cout << "\t En la cadena alimenticia son presa de depredadores como aves, serpientes \n\ty mamíferos carnívoros como zorros y coyotes. \n" << endl;

}

void Ardilla::mostrarInformacion()
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
		<< "\tTipo de Alimentación: " << TipoAimentación << " \n"
		<< "\tTamaño: " << tamanioArdilla << " \n"
		<< "\tColor: " << Color << " \n\n";


}
