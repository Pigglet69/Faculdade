#include <iostream>
using namespace std;
main ()
{
	setlocale (LC_ALL, "portuguese");

// variaveis

float raio, volume;

// entrada
cout << "Escreva o raio da esfera: ";
cin >> raio;

// processo

volume = (4 * 3.14 * (raio*raio*raio))/ 3;

// saida

cout << "O volume da esfera é: " << volume;

}
