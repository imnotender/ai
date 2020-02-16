#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <string>
#include <cstdlib>
using namespace std;

bool bad;
int getnr(int i , int operation)
{
    float nr;
    do
    {
        bad = false;
        cout << "Insira o n�mero " << i+1 << " : ";
        cin >> nr;
        if (!cin.good() || operation == 4 && nr == 0)
        {
            bad = true;
            cin.clear();
            cin.ignore(99999, '\n');
            cout << "[ERRO] O valor inserido n�o � v�lido.\n";
        }
    }
    while(bad);
    return nr;
}

int main()
{
    //Definir vari�veis a usar e locale
    setlocale (LC_ALL, "portuguese");
    char opt;
    float nr1, nr2;
    bool bad = false, loop = true;
    do
    {
        system("cls");
        cout << "\n";
        cout << "\n";
        cout << "Selecione uma op��o: \n";
        cout << "s - Sair (terminar programa)\n";
        cout << "+ - Somar (+) \n";
        cout << "- - Subtrair (-) \n";
        cout << "* - Multiplicar (*) \n";
        cout << "/ - Dividir (/) \n";
        cout << "\n";
        cout << ">> ";
        cin >> opt;


    switch (opt)
    {
    case 's':
            cout <<"Sair do Programa\n";
            loop  = false;
            exit(0);
            break;


   /* N�o funciona mas n�o � necess�rio porque o programa sai na mesma
    case "s":
        exit(0);
        break;
    */
    case '+':
        cout << "Opera��o escolhida: somar" << endl << endl;
        nr1 = getnr(0, 1);
        nr2 = getnr(1, 1);
        cout << "Opera��o: " << nr1 << " + " << nr2 << " = " << nr1+nr2 << endl;
        break;
    case '-':
        cout << "Opera��o escolhida: subtrair" << endl << endl;
        nr1 = getnr(0, 2);
        nr2 = getnr(1, 2);
        cout << "Opera��o: " << nr1 << " - " << nr2 << " = " << nr1-nr2 << endl;
        break;
    case '*':
        cout << "Opera��o escolhida: multiplicar" << endl << endl;
        nr1 = getnr(0, 3);
        nr2 = getnr(1, 3);
        cout << "Opera��o: " << nr1 << " * " << nr2 << " = " << nr1*nr2 << endl;
        break;
    case '/':
        cout << "Opera��o escolhida: dividir" << endl << endl;
        nr1 = getnr(0, 4);
        nr2 = getnr(1, 3);

        cout << "Opera��o: " << nr1 << " / " << nr2 << " = " << nr1 / nr2 << endl;
        break;
    default:
        cout << "[ERRO] Op��o inv�lida.";
    }
    //cout << "Pressiona uma tecla para continuar...";
    system("pause");
    }
    while(loop);
    return 0;
}
