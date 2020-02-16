#include <iostream>
#include <locale.h>
using namespace std;

//Booleana bad para repetir o pedido do valor no subprograma getnr
bool bad = false;
/*
 Declarar variáveis:
  Variável v p/ guardar o nº de carros em cada um dos 12 meses
  Variável rodrigo p/ guardar o nº de meses com mais de 1000 carros
  Variável matias p/ guardar o nº de meses com menos de 800 carros
  Variável marcos p/ guardar o nº de meses com um nº de carros superior à media
*/
int v[12];

int rodrigo = 0, matias = 0, marcos = 0;
float media, soma = 0;
//Suprograma getnr para validar o número de carros de cada mês
double getnr(string askmsg, string errormsg, int mes) {
  float nr;
  do {
    bad = false;
    cout << "Insira o numero dos carros estacionados no mes " << mes << " : ";
    cin >> nr;
    //Se o valor não for inteiro ou for uma string ou não estiver no intervalo, pedir novamente o valor
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
//Subprograma processardados para obter o número de carros para cada mês, obter a média, a soma, incrementar a variável matias e rodrigo e obter variável marcos
void processardados() {
  for (int i = 0; i < 12; i++) {

    v[i] = getnr("", "Valor inválido\n", i + 1);

    // se o nº de carros no mês for superior a 1000, incrementar a variável rodrigo
    if (v[i] > 1000) {
      rodrigo++;
      //Caso contrário verificar se é inferior a 800 e se for, incrementar a variável matias
    } else if (v[i] < 800) {
      matias++;
    }
    //Adicionar valor à soma
    soma = soma + v[i];

  }
  media = (soma / 12);
//Processar o nº de carros de cada mês e se for superior à media incrementar a variável marcos
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
  cout << "Média de carros estacionados nos 12 meses: " << media << "\n";
  cout << "O numero dos meses que tem mais de 1000 carros sao: " << rodrigo << "\n";
  cout << "O numero dos meses que tem menos de 800 carros sao: " << matias << "\n";

  cout << "O numero dos meses em que existem mais carros estacionados que a média: " << marcos << "\n";

}

int main() {
    setlocale (LC_ALL, "portuguese");
    processardados();

    apresentarresultados();

  return 0;
}
