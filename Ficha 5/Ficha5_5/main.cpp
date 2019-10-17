#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <string>

using namespace std;

int main()
{
    int opt;
    //Definir variáveis a usar e locale
    setlocale (LC_ALL, "portuguese");
    cout << "Insira um número de 1 a 7: " << endl ;
    cin >> opt;
    switch (opt)
    {
    case 0:
        exit(0);
        break;
    case 1:
        cout << "Dia 1 da semana é Segunda feira";
        break;
    case 2:
        cout << "Dia 2 da semana é Terça feira";
        break;
    case 3:
        cout << "Dia 3 da semana é Quarta feira";
        break;
    case 4:
        cout << "Dia 4 da semana é Quinta feira";
        break;
    case 5:
        cout << "Dia 5 da semana é Sexta feira";
        break;
    case 6:
        cout << "Dia 6 da semana é Sábado";
        break;
    case 7:
        cout << "Dia 7 da semana é Domingo";
        break;
    }
    return 0;
}
