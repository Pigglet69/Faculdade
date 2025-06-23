#include <iostream>
using namespace std;
int main ()
{
	// Variaveis
	string nomes[100], resposta, nomeFoda, nomeVelho, tipoCaro, tipoBarato, tipoRecente;
	int anos[100], valores[100], tipos[100];
	int i=0, l=0, r=0;
	int somaPreco=0, somaIdadesLivros=0, somaIdadesRevistas=0;
	int mediaPreco, mediaIdadesLivros, mediaIdadesRevistas;
	int maisVelho;
	int maisCaro=0, maisBarato=9999;
	int aux=0, aux2=0;
	
	// entrada
	cout << "Deseja iniciar?" << endl;
	cin >> resposta;
	
	// Processo
	
	while (resposta == "sim") 
	{
		cout << "Qual eh o nome do item? " << endl;
		cin >> nomes[i];
		cout << "Qual eh o ano que o item foi publicado? " << endl;
		cin >> anos[i];
		cout << "Qual eh o valor do item? " << endl;
		cin >> valores[i];
		cout << "Qual eh o tipo do item? (1 - Livro || 2 - Revista)" << endl;
		cin >> tipos[i];
		
		cout << "Deseja continuar?";
		cin >> resposta;
		
		// Letra A
		somaPreco += valores[i];
		
		// Letra B
		if (nomes[i] == "AlgoritmosParaExperts") {
			nomeFoda += "AlgoritmosParaExperts";
		}
		
		// Letra C
		if (tipos[i] == 1)
		{
			somaIdadesLivros += anos[i];
			l++;
		}
		if (tipos[i] == 2)
		{
			somaIdadesRevistas += anos[i];
			r++;
			
		}
		// Letra D
		if (valores[i] > maisCaro){
			maisCaro = valores[i];
			aux = i;
		}
		if (valores[i] < maisBarato){
			maisBarato = valores[i];
			aux2 = i;
		}
		
		
		i++;
	}
	
	// Letra A
	mediaPreco = somaPreco / i;
	
	// Letra C
	mediaIdadesLivros = somaIdadesLivros / l;
	mediaIdadesRevistas = somaIdadesRevistas / r;
	
	if (mediaIdadesLivros > mediaIdadesRevistas)
	{
		maisVelho = mediaIdadesLivros;
		nomeVelho = "livros";
	}
	if (mediaIdadesLivros < mediaIdadesRevistas){
		maisVelho = mediaIdadesRevistas;
		nomeVelho = "revistas";
	}
	// Letra D
	if (tipos[aux] == 1){
		tipoCaro = "livro";
	}
	if (tipos[aux] == 2){
		tipoCaro = "revista";
	}
	
	if (tipos[aux2] == 1){
		tipoBarato = "livro";
	}
	if (tipos[aux2] == 2){
		tipoBarato = "revista";
	}
	
	// Letra E
	if (tipos[i-1] == 1){
		tipoRecente = "livro";
	}
	if (tipos[i-1] == 2){
		tipoRecente = "revista";
	}
	
	// Saida
	
	// Letra A
	cout << "A media do precos dos itens sao: " << mediaPreco << endl;
	// Letra B
	if (nomeFoda == "AlgoritmosParaExperts")
	{
		cout << "O item " << nomeFoda << " esta no estoque." << endl;
	}
	// Letra C
	cout << "O tipo de item mais velho sao os(as) " << nomeVelho << " com uma media de " << maisVelho << endl;
	
	// Letra D
	cout << "O item mais caro eh um(a) " << tipoCaro << " O nome dele(da) eh " << nomes[aux] << " tendo um valor de R$" << valores[aux] << " sendo lanssado no ano de " << anos[aux] << endl;
	cout << "O item mais barato eh um(a) " << tipoBarato << " O nome dele(da) eh " << nomes[aux2] << " tendo um valor de R$" << valores[aux2] << " sendo lanssado no ano de " << anos[aux2] << endl;
	
	// Letra E
	cout << "O item mais recente eh um(a) " << tipoRecente << " O nome dele(da) eh " << nomes[i-1] << " tendo um valor de R$" << valores[i-1] << " sendo lanssado no ano de " << anos[i-1] << endl;
}
