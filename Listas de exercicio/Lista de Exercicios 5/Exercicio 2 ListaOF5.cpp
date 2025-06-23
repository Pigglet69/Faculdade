#include <iostream>
#include <string>
#include <limits>
using namespace std;
int main ()
{
	string nomes[100], resposta, continuar, Zeh, Ganhador, Ma, mulherOuHomem;
	int	idades[100], notas[100],sexos[100], menorIdade=999, maiorIdade=0;
	int j=2, i=1, y=0, somaIdades=0, mediaIdades=0, Mn, Mv, mediaHomens, mediaMulheres, somaH=0, somaM=0, h=0, m=0, melhorNota=-1, b=0, melhorSexo;
	
	cout << "Qual eh o nome do aluno N1? " << endl;
	cin >> nomes[0];
	cout << "Qual eh a idade do aluno N1? " << endl;
	cin >> idades[0];
	cout << "Qual eh o sexo do aluno N1? " << endl;
	cin >> sexos[0];
	cout << "Qual eh a nota do aluno N1? " << endl;
	cin >> notas[0];
		
	while (resposta != "nao")
	{
		cout << "Qual eh o nome do aluno N" << j << "? " << endl;
		cin >> nomes[i];
		cout << "Qual eh a idade do aluno N" << j << "? " << endl;
		cin >> idades[i];
		cout << "Qual eh o sexo do aluno N" << j << "? (1 - Homem || 2 - Mulher)" << endl;
		cin >> sexos[i];
		cout << "Qual eh a nota do aluno N" << j << "? " << endl;
		cin >> notas[i];
		
		cout << "Deseja continuar? " << endl;
		cin >> resposta;
		
		// Letra D
		
		if (idades[i] < menorIdade)
		{
			idades[i] = menorIdade;
			Mn = i;
		}
		if (idades[i] > maiorIdade)
		{
			idades[i] = maiorIdade;
			Mv = i;
		}
		
		// Letra A
		somaIdades += idades[i];
		
		// Letra C
		if (sexos[i] == 1)
		{
			somaH += notas[i];
			h++;
		}
		if (sexos[i] == 2)
		{
			somaM += notas[i];
			m++;
		}
	
		
		i++;
		j++;
	}
	
	// Letra B
	
	for (int z=0; z<j; z++)
	{
		if (nomes[y] == "Zeh")
		{
			Zeh = y;
		} else {
			Zeh = " [nao tem Zeh :(]";
		}
		y++;
	}
		
	// Letra A
	
	mediaIdades = somaIdades / j; 
	
	// Letra C
	
	mediaHomens = somaH / h;
	mediaMulheres = somaM / m;
	
	if (mediaHomens > mediaMulheres)
	{
		Ganhador = "Homens tem a media mais alta!!!";
	} else if (mediaMulheres > mediaHomens) {
		Ganhador = "Mulheres tem a media mais alta!!!";
	}
	
	// Letra E
	
	for (int a=0; a<j; a++)
	{
		if (notas[b] < melhorNota) {
		melhorNota = notas[b];
		Ma = nomes[b];
		melhorSexo = sexos[b];
		}
		if (melhorSexo = 1) {
			mulherOuHomem = "Homem";
		} else {
			mulherOuHomem = "Mulher";
		}
		b++;
	}
	
	// saida
		// Letra A
	cout << "A Faixa etaria da turma eh: " << mediaIdades << endl;
		// Letra B
	cout << "Alunos com nome de Zeh: Aluno N" << Zeh << " um abraco Zeh :D" << endl;
		// Letra C
	cout << "Media entre os homens e mulheres: " << Ganhador << endl;
		// Letra D 
	cout << "O(a) aluno(a) mais novo(a) eh: " << nomes[Mn] << " e ele(a) tem " << idades[Mn] << " anos, o genero dele(a) eh " << sexos[Mn] << " e tirou a nota " << notas[Mn] << endl;
	cout << "O(a) aluno(a) mais velho(a) eh: " << nomes[Mv] << " e ele(a) tem " << idades[Mv] << " anos, o genero dele(a) eh " << sexos[Mv] << " e tirou a nota " << notas[Mv] << endl;
		// Letra E
	cout << "O melhor aluno eh " << Ma << " com uma nota de " << melhorNota << " sendo um(uma) " << mulherOuHomem << endl;
	
}
