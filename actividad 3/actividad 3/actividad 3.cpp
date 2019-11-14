#include <iostream>
#include <string>
using namespace std;
int main()
{
	bool bandera=false;
	char tecla;
    float suma, resta, multiplicacion , divicion, numero1, numero2;
	do
	{
		system("cls");
		cout << "-----------------------------------------------------------------------------------------------------------------------\n";
		cout << "                                                   Calculadora sensilla                      \n";
		cout << "-----------------------------------------------------------------------------------------------------------------------\n";
		cout << "Opciones \n\n";
		cout << "\t1.- Sumar. \n";
		cout << "\t2.- Restar. \n";
		cout << "\t3.- Multiplicar. \n";
		cout << "\t4.- Dividir. \n";
		cout << "\t5.- Salir del programa. \n\n";
		cout << "Elige una opcion a ejecutar \n";
		cin >> tecla;
		switch (tecla)
		{
		case '1':
			system("cls");
			cout << "-----------------------------------------------------------------------------------------------------------------------\n";
			cout << "                                  Has elegido la opcion sumar                       \n";
			cout << "-----------------------------------------------------------------------------------------------------------------------\n";
			cout << "Ingresa un numero: \n";
			cin >> numero1;
			cout << "Ingresa un numero: \n";
			cin >> numero2;
			suma = numero1 + numero2;
			cout << "la suma de los dos numeros es: " << suma << endl <<endl;
			system("pause");
			break;
		case'2':
			system("cls");
			cout << "-----------------------------------------------------------------------------------------------------------------------\n";
			cout << "                               Has elegido la opcion restar                       \n";
			cout << "-----------------------------------------------------------------------------------------------------------------------\n";
			cout << "Ingresa un numero: \n";
			cin >> numero1;
			cout << "Ingresa un numero: \n";
			cin >> numero2;
			resta = numero1 - numero2;
			cout << "la resta de los dos numeros es: " << resta << endl << endl;
			system("pause");
			break;
		case'3':
			system("cls");
			cout << "-----------------------------------------------------------------------------------------------------------------------\n";
			cout << "                               Has elegido la opcion multiplicacion                       \n";
			cout << "-----------------------------------------------------------------------------------------------------------------------\n";
			cout << "Ingresa un numero: \n";
			cin >> numero1;
			cout << "Ingresa un numero: \n";
			cin >> numero2;
			multiplicacion = numero1 * numero2;
			cout << "la multiplicacion de los dos numeros es: " << multiplicacion << endl << endl;
			system("pause");
			break;
		case'4':
			system("cls");
			cout << "-----------------------------------------------------------------------------------------------------------------------\n";
			cout << "                               Has elegido la opcion dividir                        \n";
			cout << "-----------------------------------------------------------------------------------------------------------------------\n";
			cout << "Ingresa un numero: \n";
			cin >> numero1;
			cout << "Ingresa un numero: \n";
			cin >> numero2;
			divicion = numero1 / numero2;
			cout << "la divicion de " << numero1 << " entre el numero " << numero2 << " es: " << divicion <<endl << endl;
			system("pause");
			break;
		case '5':
	
			bandera = true;
	
			break;
		default:
			cout << "Ingrese una opcion valida......... \n";
			system("pause");

		}

	} while (bandera != true);

	return 0;
}

