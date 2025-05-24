#include <iostream>
#include <string>
using namespace std;
main ()
{
	int zero, nota, num_pessoas;
	string nome;
	float media, soma_notas;
	
	
	
	for (int i=0; i < 20; i++)
	{
	//	cout << "Digite o nome do aluno " << i + 1 << ": ";
       // cin >> nome;
		cout << "\nQual foi sua nota?";
		cin >> nota;
		
		soma_notas += nota;
		
		if (nota == 0) {
			zero = true;
		}
	
	}
	
	media = soma_notas / 20;
	
	cout << "\n--= Resultado da turma =--" << endl;
	cout << "Media da turma> " << media << endl;
	
	if (zero) {
		cout << "Sim, Existe pelo menos um aluno com nota igual a 0." << endl;
	} else {
		cout << "Nao, existe nenhum aluno com nota igual a 0." << endl;
	}
	return 0;
}
