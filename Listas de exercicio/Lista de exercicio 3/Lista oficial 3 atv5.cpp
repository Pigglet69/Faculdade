#include <iostream>
using namespace std;
int main ()
{
	string vencedor;
	float voto1=0,voto2=0,voto3=0, resposta, null=0, branco=0, votos_totais;
	float Pvoto1, Pvoto2, Pvoto3, Pnull, Pbranco; // variaveis das porcentagens
	
	for (int i=0; i < 20; i++) {
		cout << "Qual candidato vc deseja votar? " << endl;
		cout << "1 = Candidato 1" << endl;
		cout << "2 = Candidato 2" << endl;
		cout << "3 = Candidato 3" << endl;
		cout << "5 = Voto nulo" << endl;
		cout << "6 = Voto em branco" << endl;	
		cin >> resposta;
		
		if (resposta == 1) { // contagem de votos
			voto1++;
		}
		if (resposta == 2) {
			voto2++;
		}
		if (resposta == 3) {
			voto3++;
		}
		if (resposta == 5) {
			null++;
		}
		if (resposta == 6) {
			branco++;
		}
	}
	
	// Vencedor da eleicao
	if (voto1 > voto2 and voto1 > voto3) {
		vencedor = "Candidato 1";
	} else if (voto2 > voto1 and voto2 > voto3) {
		vencedor = "Candidato 2";
	} else if (voto3 > voto1 and voto3 > voto2) {
		vencedor = "Candidato 3";
	}
	
	votos_totais = voto1 + voto2 + voto3 + null + branco;
	Pvoto1 = (voto1 / votos_totais) * 100; // processo das porcentagens
	Pvoto2 = (voto2 / votos_totais) * 100;
	Pvoto3 = (voto3 / votos_totais) * 100;
	Pnull = (null / votos_totais) * 100;
	Pbranco = (branco / votos_totais) * 100;
	
	// saida
	
	cout << "===========================================================" << endl;
	cout << "O total de votos do primeiro Candidato eh: " << voto1 << endl;
	cout << "O total de votos do segundo Candidato eh: " << voto2 << endl;
	cout << "O total de votos do terceiro Candidato eh: " << voto3 << endl;
	cout << "A porcentagem de votos do primeiro Candidato eh: " << Pvoto1 << "%" << endl;
	cout << "A porcentagem de votos do segundo Candidato eh: " << Pvoto2 << "%" << endl;
	cout << "A porcentagem de votos do terceiro Candidato eh: " << Pvoto3 << "%" << endl;
	cout << "A porcentagem de votos nulos eh: " << Pnull << "%" << endl;
	cout << "A porcentagem de votos brancos eh: " << Pbranco << "%" << endl;
	cout << "\nO vencedor da eleicao eh: " << vencedor << endl;
	cout << "===========================================================";
	
	return 0;
}
