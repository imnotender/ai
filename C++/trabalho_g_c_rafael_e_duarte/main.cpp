#include <iostream>
#include <locale.h>
using namespace std;

//Booleana bad para repetir o pedido do valor no subprograma getnr
bool bad = false;
/*
 Declarar vari�veis:
  Vari�vel v p/ guardar o n� de carros em cada um dos 12 meses
  Vari�vel rodrigo p/ guardar o n� de meses com mais de 1000 carros
  Vari�vel matias p/ guardar o n� de meses com menos de 800 carros
  Vari�vel marcos p/ guardar o n� de meses com um n� de carros superior � media
*/
int v[12];

int rodrigo = 0, matias = 0, marcos = 0;
float media, soma = 0;
//Suprograma getnr para validar o n�mero de carros de cada m�s
double getnr(string askmsg, string errormsg, int mes) {
  float nr;
  do {
    bad = false;
    cout << "Insira o numero dos carros estacionados no mes " << mes << " : ";
    cin >> nr;
    //Se o valor n�o for inteiro ou for uma string ou n�o estiver no intervalo, pedir novamente o valor
    if (!cin.good() || nr < 0 || nr != int(nr) || nr > 1500) {
      bad = true;
      cin.clear();
      cin.ignore(99999, '\n');
      cout << errormsg;

    }
  }
  while (bad);
  return nr;
}
//Subprograma processardados para obter o n�mero de carros para cada m�s, obter a m�dia, a soma, incrementar a vari�vel matias e rodrigo e obter vari�vel marcos
void processardados() {
  for (int i = 0; i < 12; i++) {

    v[i] = getnr("", "Valor inv�lido\n", i + 1);

    // se o n� de carros no m�s for superior a 1000, incrementar a vari�vel rodrigo
    if (v[i] > 1000) {
      rodrigo++;
      //Caso contr�rio verificar se � inferior a 800 e se for, incrementar a vari�vel matias
    } else if (v[i] < 800) {
      matias++;
    }
    //Adicionar valor � soma
    soma = soma + v[i];

  }
  media = (soma / 12);
//Processar o n� de carros de cada m�s e se for superior � media incrementar a vari�vel marcos
  for (int i = 0; i < 12; i++) {
    if (v[i] > media) {
      marcos++;
    }
  }
}
//Subprograma para apresentar resultados
void apresentarresultados() {
  cout << "-------------------------------------\n";

  for (int i = 0; i < 12; i++) {
    cout << "Mes: " << i + 1 << "\n";
    cout << "Numero de carros estacionados: " << v[i] << "\n";
    cout << "--------------------------------\n";
  }
  cout << "M�dia de carros estacionados nos 12 meses: " << media << "\n";
  cout << "O numero dos meses que tem mais de 1000 carros sao: " << rodrigo << "\n";
  cout << "O numero dos meses que tem menos de 800 carros sao: " << matias << "\n";

  cout << "O numero dos meses em que existem mais carros estacionados que a m�dia: " << marcos << "\n";

}

int main() {
    setlocale (LC_ALL, "portuguese");
    processardados();

    apresentarresultados();

  return 0;
}
