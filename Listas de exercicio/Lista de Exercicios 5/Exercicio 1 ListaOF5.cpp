#include <iostream>
using namespace std;
main ()
{
	string nomes[13];
	int resposta;
	
	nomes[1] = "janeiro";
	nomes[2] = "fevereiro";
	nomes[3] = "marco";
	nomes[4] = "abril";
	nomes[5] = "maio";
	nomes[6] = "junho";
	nomes[7] = "julho";
	nomes[8] = "agosto";
	nomes[9] = "setembro";
	nomes[10] = "outubro";
	nomes[11] = "novembro";
	nomes[12] = "dezembro";
	
	cout << "Qual mes do ano voce quer saber? (1-12) ";
	cin >> resposta;
	
	for (int i=0; i<13; i++)
	{
		if (resposta == i) {
			cout << nomes[i];
		}
	}
	
}
