#include <iostream>
#include <string>
using namespace std;

int main()
{
	char numerodestudiante;
	bool bandera;
	do
	{
		cout >> "-----------------------------------------------------------------------------------------------------------\n";
		cout >> "-----------------------------------------------------------------------------------------------------------\n";
		switch (numerodestudiante)
		{
		case '1':
			cout << "Has elgido al estudiante: Pedro Estrada. \n\n ";
			cout << "Grupo:  3°A \n\n";
			cout << "correo electronico univercitario: pedroe@ucol.mx ";
			break;
		case '2':
			cout << "Has elgido al estudiante: Karla Garcia";
			cout << "Grupo:  3°C \n\n";
			cout << "correo electronico univercitario: garciaKarla@ucol.mx ";
			break;
		case '3':cout << "Has elgido al estudiante: Perla Sanches";
			cout << "Grupo:  3°D \n\n";
			cout << "correo electronico univercitario: sanchezp@ucol.mx ";
			break;
		case '4':
			cout << "Has elgido al estudiante: Antonio Perez";
			cout << "Grupo:  3°B \n\n";
			cout << "correo electronico univercitario: perezantonio@ucol.mx";
			break;
		case '5':
			cout << "Has elgido al estudiante: Ana valdez ";
			cout << "Grupo:  3°A \n\n";
			cout << "correo electronico univercitario: valdezaa@ucol.mx ";
			break;
		default:

		}
	} while (bandera = true);
	

}

