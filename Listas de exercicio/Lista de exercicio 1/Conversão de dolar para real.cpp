#include <iostream>
using namespace std;
main ()
{
	setlocale (LC_ALL, "Portuguese");
	
	// Variaveis
	
	float valor_dolar, valor_em_real;
	
	// Entrada
	
	cout << "Escreva o dolar que ser� convertido: ";
	cin >> valor_dolar;
	
	// Processo
	
	valor_em_real = valor_dolar*5.766;
	
    // Saida
	
	cout << "=========================" << endl;
	cout << "O valor em dolar �..: " << valor_dolar << endl;
	cout << "O valor convertido �: " << valor_em_real << endl;
	cout << "=========================" << endl;

}
