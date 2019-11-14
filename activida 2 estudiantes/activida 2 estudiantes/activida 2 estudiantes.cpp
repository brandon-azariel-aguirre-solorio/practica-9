#include <iostream>
#include <string>
using namespace std;

int main()
{
	char numerodestudiante;
	bool bandera;
	do
	{
		system("cls");
		cout << "------------------------------------------------------------------------------------------------------------------------\n";
		cout << "                                  Bienbenido al sistema de control univercitario                           \n";
		cout << "------------------------------------------------------------------------------------------------------------------------\n\n";
		cout << "\t1 . - Pedro Estrada \n";
		cout << "\t2 . - Karla Garcia  \n";
		cout << "\t3 . - Perla Sanchez \n";
		cout << "\t4 . - Antonio Perez \n";
		cout << "\t5 . - Ana valdez \n";
		cout << "\t6 . - salir del programa \n \n";
		cout << " Ingresa el numero del estudiante que quieres conocer sus datos : \n\n";
		cin >> numerodestudiante;
		switch (numerodestudiante)
		{
		case '1':
			system("cls");
			cout << "Has elgido al estudiante: Pedro Estrada. \n\n ";
			cout << "Grupo:  3 A \n\n";
			cout << "correo electronico univercitario: pedroe@ucol.mx \n\n ";
			system("pause");
			break;
		case '2':
			system("cls");
			cout << "Has elgido al estudiante: Karla Garcia \n\n";
			cout << "Grupo:  3 C \n\n";
			cout << "correo electronico univercitario: garciaKarla@ucol.mx \n\n ";
			system("pause");
			break;
		case '3':
			system("cls");
			cout << "Has elgido al estudiante: Perla Sanches \n\n";
			cout << "Grupo:  3 D \n\n";
			cout << "correo electronico univercitario: sanchezp@ucol.mx \n\n";
			system("pause");
			break;
		case '4':
			system("cls");
			cout << "Has elgido al estudiante: Antonio Perez \n\n";
			cout << "Grupo:  3 B \n\n";
			cout << "correo electronico univercitario: perezantonio@ucol.mx \n\n";
			system("pause");
			break;
		case '5':
			system("cls");
			cout << "Has elgido al estudiante: Ana valdez \n\n";
			cout << "Grupo:  3 A \n\n";
			cout << "correo electronico univercitario: valdezaa@ucol.mx \n\n";
			system("pause");
			break;
		case '6':
			bandera = true;
		    break;
		default:
			system("cls");
			cout << "numero de estudiante no valido ingresa otro \n";
			system("pause");
		}

	} while (bandera != true);
	
	return 0;
}

