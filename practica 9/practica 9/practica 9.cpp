#include <iostream>
#include <string>
using namespace std;

int main()
{
	char tecla;
	cout << "tecle una tecla: \n";
	cin >> tecla;
	switch (tecla)
	{
	case 'a':
		cout << " Es una vocal";
		break;
	case 'e':
		cout << " Es una vocal";
		break;
	case 'i':
		cout << " Es una vocal";
		break;
	case 'o':
		cout << " Es una vocal";
		break;
	case 'u':
		cout << " Es una vocal";
		break;
	default:
			cout << "Es una consonante ";
	}
}

