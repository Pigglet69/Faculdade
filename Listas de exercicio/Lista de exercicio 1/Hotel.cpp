#include <iostream>
using namespace std;
main ()
{
	setlocale (LC_ALL, "portuguese");
	// variaveis
	string nome;
	float numero_dias, taxa_extra, conta;
	// entrada
	cout << "Qual é o nome do cliente: ";
	cin >> nome;
	cout << "Informe o número de dias que o cliente ficou: ";
	cin >> numero_dias;
	// processo
	if (numero_dias > 5)
	{
		taxa_extra = 5.50;
	}
	else if (numero_dias == 5)
	{
		taxa_extra = 7;
	}
	else
	{
		taxa_extra = 9;
	}
	
	conta = (60 * numero_dias) + (numero_dias * taxa_extra);
	
	// saida
	cout << "\n\n====================\n";
	cout << "Nome: " << nome << endl;
	cout << "Conta: " << conta << endl;
	cout << "========================";
}
