#include <iostream>
using namespace std;
main ()
{
	setlocale (LC_ALL, "Portuguese");

	// variaveis
	string nome;
	float salario_bruto1, salario_descontado1, salario_descontado2, salario_liquido, desconto, salario_com_desconto;
	
	// entrada
	
	cout << "Escreva seu nome: ";
	cin >> nome;
	cout << "Escreva seu sálario bruto: ";
	cin >> salario_bruto1;
		
	// processo
	
	
	salario_descontado1 = (salario_bruto1 * 0.1);
	salario_com_desconto = salario_bruto1 - salario_descontado1;
	salario_descontado2 = (salario_com_desconto * 0.25);
	salario_liquido = salario_bruto1 - (salario_descontado1 + salario_descontado2);
	desconto = (salario_bruto1 - salario_descontado1) * 0.25;
	
	
	// saida

	cout << "==================== \n \n";
	cout << "Nome do funcionario: " << nome << endl;
	cout << "Salário bruto do funcionario: " << salario_bruto1 << endl;
	cout << "Salário liquido do funcionario: " << salario_liquido << endl;
	cout << "Desconto de 10%: " << salario_descontado1 << endl;
	cout << "Desconto de 25%: " << desconto << endl;
 	cout << "=========================";
	













}
