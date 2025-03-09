#include <iostream>
using namespace std;
main ()
{
	setlocale (LC_ALL, "portuguese");

// variaveis

int dia,mes,ano,dias_vivos, mes_dias, ano_dias, dia_de_hj, nascimento_em_dias, total;

// entrada

cout << "Escreva o dia que vc nasceu: ";
cin >> dia;
cout << "Escreva seu o mês que vc nasceu:  ";
cin >> mes;
cout << "Escreva o ano que vc nasceu:  ";
cin >> ano;

// processo

dia_de_hj = 2*30 + 2025*360 + 28; // data atual
nascimento_em_dias = mes*30 + ano*360 + dia;
total = dia_de_hj - nascimento_em_dias;

// saida
cout << "================================= \n \n";
cout << "Você viveu " << total << " dias." << endl;
cout << "================================= \n \n";
}
