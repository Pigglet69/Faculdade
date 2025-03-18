#include <iostream>
using namespace std;
main ()
{
	setlocale (LC_ALL, "portuguese");
	
// variaveis
	int nota;
	string conceito;
	
// entrada
	cout << "Informe a sua nota: ";
	cin >> nota;
	
// processo
	if (nota <= 39)
	{
		conceito = "E";
	}
	else if (nota <= 59)
	{
		conceito = "D";
	}
	else if (nota <= 75)
	{
		conceito = "C";
	}
	else if (nota <= 89)
	{
		conceito = "B";
	}
	else 
	{
		conceito = "A";
	}
	
// saida
	cout << "\n===================\n";
	cout << "Nota: " << nota << endl;
	cout << "Conceito: " << conceito << endl;
	cout << "========================\n\n";
}
