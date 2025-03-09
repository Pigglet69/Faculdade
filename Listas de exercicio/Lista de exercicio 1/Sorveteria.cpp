#include <iostream>
using namespace std;
main ()
{
    setlocale(LC_ALL,"portuguese");
    
	//variaveis
	float p1,p2,p3;
	int qtd1, qtd2,qtd3;
	float qtd_vendida;
	
	//entrada
	cout << "Escreva a quantidade vendida do primeio produto: ";
	cin >> qtd1;
	cout << "Escreva a quantidade vendida do segundo produto: ";
	cin >> qtd2;
	cout << "Escreva a quantidade vendida do terceiro produto: ";
	cin >> qtd3;
	
	//processo
	p1=0.5;
	p2=0.6;
	p3=0.75;
	
	p1=p1*qtd1;
	p2=p2*qtd2;
	p3=p3*qtd3;
	
	// saida
	cout << "\n\n============================================";
	cout << "\nVocê vendeu R$ " << p1 << " do primeiro produto.";
	cout << "\nAs unidades vendidas foram: " << qtd1 << endl;
	cout << "\nVocê vendeu R$ " << p2 << " do segundo produto.";
	cout << "\nAs unidades vendidas foram: " << qtd2 << endl;
	cout << "\nVocê vendeu R$ " << p3 << " do terceiro produto.";
	cout << "\nAs unidades vendidas foram: " << qtd3 << endl;
	cout << "\n============================================";
}
