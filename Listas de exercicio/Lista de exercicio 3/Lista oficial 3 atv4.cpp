#include <iostream>
using namespace std;
main ()
{
	int numero1=1, numero2=1, resposta; // Variaveis
	
	// Entrada e o Processo e Saida
	
	for (int i=0; i < 100; i++) {
		resposta = numero1 * numero2;
		cout << numero1 << " x " << numero2 << " = " << resposta << endl;
		numero2++;
		
		if (numero2 == 11) {
			numero2 = 1;
			numero1++;
			cout << "===============" << endl;
		}
	}
} // se ta dando certo a gente nao mexe

