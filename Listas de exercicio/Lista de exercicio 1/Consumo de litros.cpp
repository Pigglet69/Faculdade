#include <iostream>
using namespace std;
main ()
{
	setlocale (LC_ALL, "portuguese");
	// variaveis
	string marca;
	float km_inicial, km_final, litros;
	float intervalo_T, distancia, consumo;
	
	// entrada
	
	cout << "Escreva a marca do carro: ";
	cin >> marca;
	cout << "Escreva o quilometro inicial: ";
	cin >> km_inicial;
	cout << "Escreva o quilometro final: ";
	cin >> km_final;
	cout << "Escreva os litros: ";
	cin >> litros;
	
	// processo
	
	intervalo_T = km_final - km_inicial;
	consumo = intervalo_T / litros;
	
	// saida
	
	cout << "================================ \n \n";
	cout << "Marca do carro: " << marca << endl;
	cout << "Consumo de Litros: " << litros << endl;
	cout << "Quilometragem inicial: " << km_inicial << endl;
	cout << "Quilometragem final: " << km_final << endl;
	cout << "Velocidade média: " << intervalo_T << endl;
	cout << "Consumo de litros por quilometro: " << consumo << endl;
	cout << "================================ \n";
	
 	
	
}
