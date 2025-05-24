#include <iostream>
using namespace std;
main ()
{
	int idade;
	float altura, media_idade=0, soma_idade=0, cont_pessoas=0, alturaAlta=0,  idademenor=999, cont_idade=0;
	string nome, nomealto, nomemenor;
	
	for (int i=0; i < 3; i++) {
		cout << "Qual e o seu nome: " << endl;
		cin >> nome;
		cout << "Qual e a sua idade: " << endl;
		cin >> idade;
		cout << "Qual e a sua altura: (Exemplo: 1.80)" << endl;
		cin >> altura;
		
		 if (altura > 1.80) {
		 	soma_idade += idade;
		 	cont_idade++;
		 }
		 if (idade > 35) {
		 	cont_pessoas++;
		 }
		 if (altura > alturaAlta) {
		 	alturaAlta = altura;
		 	nomealto = nome;
		 }
		 if (idade < idademenor) {
		 	idademenor = idade;
		 	nomemenor = nome;
		 }
	}
	
	media_idade = soma_idade / cont_idade;
	
	cout << "\n--=====================--" << endl;
	cout << "Media das pessoas maiores que 1.80 de altura: " << media_idade << endl;
	cout << "Total de pessoas com mais de 35 anos: " << cont_pessoas << endl;
	cout << "Pessoa mais alta: " << nomealto << " com " << alturaAlta << "m" << endl;
	cout << "Pessoa mais nova: " << nomemenor << endl;
	cout << "\n--=====================--" << endl;
}
