#include <iostream>
using namespace std;
main ()
{
	setlocale (LC_ALL, "portuguese");

	// variaveis	
	string nome;
	int qtdcar;
	float vendas, salariototal, valorcar, comissao, salarioT;
	
	// entrada
	
	cout << "Qual é seu nome? \n";
	cin >> nome;
	cout << "Quantos carros o Senhor(a) vendeu? \n";
	cin >> qtdcar;
	cout << "Qual foi o valor do carro que o Senhor(a) vendeu? \n";
	cin >> valorcar;
	
	// processo
	
	vendas = valorcar * qtdcar;
	comissao = 50 * qtdcar;
	salarioT = 350 + comissao + (valorcar*0.05);
	
	// saida
	
	cout << "\n==================================================\n";
	cout << "O Senhor(a) " << nome << " que ganha um salário de " << salarioT << endl;
	cout << "Vendeu " << qtdcar << " carros por " << valorcar << endl;
	cout << "Com uma comissão de " << comissao << endl;
	cout << "O total de vendas foi: R$ " << vendas << endl;
	cout << "\n==================================================\n";
	
	
}
