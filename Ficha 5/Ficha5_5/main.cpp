#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <string>

using namespace std;

int main()
{
    int opt;
    //Definir vari�veis a usar e locale
    setlocale (LC_ALL, "portuguese");
    cout << "Insira um n�mero de 1 a 7: " << endl ;
    cin >> opt;
    switch (opt)
    {
    case 0:
        exit(0);
        break;
    case 1:
        cout << "Dia 1 da semana � Segunda feira";
        break;
    case 2:
        cout << "Dia 2 da semana � Ter�a feira";
        break;
    case 3:
        cout << "Dia 3 da semana � Quarta feira";
        break;
    case 4:
        cout << "Dia 4 da semana � Quinta feira";
        break;
    case 5:
        cout << "Dia 5 da semana � Sexta feira";
        break;
    case 6:
        cout << "Dia 6 da semana � S�bado";
        break;
    case 7:
        cout << "Dia 7 da semana � Domingo";
        break;
    }
    return 0;
}
