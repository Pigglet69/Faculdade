#include <iostream>
#include <string>
using namespace std;
main ()
{
	// vairaveis
	
	string nome;
	int x, cont_h=0, cont_m=0, num_pessoas;
	
	// entrada
	
	cout << "\nQuantas pessoas voce quer registar? ";
	cin >> num_pessoas;
	
	for (int i=0; i < num_pessoas; i++)
		{
			cout << "\n--- Pessoa " <<  i + 1 << "---" << endl;
			cout << "Qual e seu nome: ";
			cin >> nome;
			cout << "Qual e o sexo? (1 - Homem || 2 - Mulher): ";
			cin >> x;
			
			// processo
		if (x == 1) {
			cont_h++;
		} else if (x == 2) {
			cont_m++;
			} else {
				cout << "Opcao de sexo invalida!" << endl;
				}
		}	
	
	
	
	
	// saida
	
	cout << "\n--- Resultado Final ---" << endl;
	cout << "Total de homens: " << cont_h << endl;
	cout << "Total de mulheres: " << cont_m << endl;
	
	return 0;
}
