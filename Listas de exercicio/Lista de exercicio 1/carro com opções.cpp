#include <iostream>
using namespace std;
main ()
{
	setlocale (LC_ALL, "portuguese");

// variaveis
	float valor_carro,valor_total;
	string resposta;
	
// Entrada
	cout << "Qual � o valor inicial do carro";
	cin >> valor_carro;
	cout << "O carro possui algun desses opcionais?\n";
	cin >> resposta;

// Processo
	if (resposta == "sim")
	{
		cout << "Informe qual desses itens tem em seu carro.";
		cout << "\n=================================\n";
		cout << "Vidro el�trico" << endl;
		cout << "Ar condicionado" << endl;
		cout << "Trava central e Alarme" << endl;
		cout << "Pintura Metalica" << endl;
		cout << "Dire��o Hidraulica" << endl;
		cout << "\n=================================\n";
	}
	else if (resposta == "n�o" or "nao")
	{
		valor_total = valor_carro * 0.05;
		cout << valor_total;
	}
	else 
	{
		cout << "Erro, tente novamente digitando sim ou n�o.";
	}
}
