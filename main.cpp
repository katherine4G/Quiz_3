#include "Tiburon.h"
#include "Ardilla.h"

void menu();
void tiburon();
void ardilla();
int main()
{
	setlocale(LC_ALL, "spanish");

	menu();

	return 0;

}


void menu()
{
	int opcion;
	do
	{
		cout << "\n\t-MEN� ANIMALES VERTEBRADOS-\n" << endl;
		cout << "Seleccione el reino al que pertenece el animal que desea a�adir:\n" << endl;
		cout << "\t 1- PECES" << endl;
		cout << "\t 2- ANFIBIOS" << endl;
		cout << "\t 3- REPTILES" << endl;
		cout << "\t 4- AVES" << endl;
		cout << "\t 5- MAM�FEROS" << endl;
		cout << "\t 6- Salir \n" << endl;
		cout << "\tOpci�n --> "; cin >> opcion;
		system("cls");
		switch (opcion)
		{
		case 1:
			cout << "\n\t\t\TIBUR�N" << endl;
			tiburon();

			break;
		case 5:
			cout << "\n\t\t\tARDILLA" << endl;
			ardilla();
			break;
		case 6:
			exit(-1); break;
		default:
			cout << "\n\tDisculpa, no est� definido.\n" << endl;
			break;
		}
		system("\tpause");
		system("cls");
	} while (opcion != 6);


}
void tiburon
() {
	string clase, nombre, cuerpo, resp, desplaz, reprod, habit, tEsqueleto, tipoBranquea, tamanioTib;
	int extrem, cDientes;

	Tiburon* ballena;

	cout << "\n\tintroduce el tipo de cuerpo que tiene el tibur�n: "; cin >> cuerpo;
	cout << "\tintroduce el tipo de respiraci�n del tibur�n: "; cin >> resp;
	cout << "\tintroduce la cantidad de extremidades que posee: "; cin >> extrem;
	cout << "\tintroduce su tipo de desplazamiento: ";  cin >> desplaz;
	cout << "\tintroduce el tipo de reproducci�n del animal: "; cin >> reprod;
	cout << "\tintroduce el habitat donde se encuentra: "; cin >> habit;
	cout << "\tintroduce el tipo de esqueleto: ";	cin >> tEsqueleto;
	cout << "\tintroduce el tipo de sus Branquias: "; cin >> tipoBranquea;
	cout << "\tintroduce el tama�o de animal: "; cin >> tamanioTib;
	cout << "\tintroduce la cantidad de dientes que posee eltibur�n: "; cin >> cDientes;
	cout << endl;

	ballena = new Tiburon("Vertebrados", "Tibur�n", cuerpo, resp, extrem, desplaz, reprod, habit, tEsqueleto, tipoBranquea, tamanioTib, cDientes);

	system("pause"); system("cls");

	ballena->mostrarInformacion();
	ballena->Alimentarse();
	ballena->Desplazarse();
	ballena->comunicacion();
	ballena->cadenaAlimenticia();

	delete ballena;
}

void ardilla() {
	string clase, nombre, cuerpo, resp, desplaz, reprod, habit, tAlimentacion, tamanio, color;
	int extrem;
	Ardilla* ardilla;

	cout << "\n\tintroduce el tipo de cuerpo que tiene la ardilla: "; cin >> cuerpo;
	cout << "\tintroduce el tipo de respiraci�n de la ardilla: "; cin >> resp;
	cout << "\tintroduce la cantidad de extremidades que posee: "; cin >> extrem;
	cout << "\tintroduce su tipo de desplazamiento: ";  cin >> desplaz;
	cout << "\tintroduce el tipo de reproducci�n del animal: "; cin >> reprod;
	cout << "\tintroduce el habitat donde se encuentra: "; cin >> habit;
	cout << "\tintroduce el tipo de Alimentaci�n: ";	cin >> tAlimentacion;
	cout << "\tintroduce el tama�o de animal: "; cin >> tamanio;
	cout << "\tintroduce el color de la ardilla: "; cin >> color;
	cout << endl;

	ardilla = new  Ardilla("Vertebrados", "Ardilla", cuerpo, resp, extrem, desplaz, reprod, habit, tAlimentacion, tamanio, color);

	system("pause"); system("cls");

	ardilla->mostrarInformacion();
	ardilla->hibernar();
	ardilla->Alimentarse();
	ardilla->Desplazarse();
	ardilla->cadenaAlimenticia();

	delete ardilla;
}