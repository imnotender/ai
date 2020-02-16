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
        cout << "Insira o número " << i+1 << " : ";
        cin >> nr;
        if (!cin.good() || operation == 4 && nr == 0)
        {
            bad = true;
            cin.clear();
            cin.ignore(99999, '\n');
            cout << "[ERRO] O valor inserido não é válido.\n";
        }
    }
    while(bad);
    return nr;
}

int main()
{
    //Definir variáveis a usar e locale
    setlocale (LC_ALL, "portuguese");
    char opt;
    float nr1, nr2;
    bool bad = false, loop = true;
    do
    {
        system("cls");
        cout << "\n";
        cout << "\n";
        cout << "Selecione uma opção: \n";
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


   /* Não funciona mas não é necessário porque o programa sai na mesma
    case "s":
        exit(0);
        break;
    */
    case '+':
        cout << "Operação escolhida: somar" << endl << endl;
        nr1 = getnr(0, 1);
        nr2 = getnr(1, 1);
        cout << "Operação: " << nr1 << " + " << nr2 << " = " << nr1+nr2 << endl;
        break;
    case '-':
        cout << "Operação escolhida: subtrair" << endl << endl;
        nr1 = getnr(0, 2);
        nr2 = getnr(1, 2);
        cout << "Operação: " << nr1 << " - " << nr2 << " = " << nr1-nr2 << endl;
        break;
    case '*':
        cout << "Operação escolhida: multiplicar" << endl << endl;
        nr1 = getnr(0, 3);
        nr2 = getnr(1, 3);
        cout << "Operação: " << nr1 << " * " << nr2 << " = " << nr1*nr2 << endl;
        break;
    case '/':
        cout << "Operação escolhida: dividir" << endl << endl;
        nr1 = getnr(0, 4);
        nr2 = getnr(1, 3);

        cout << "Operação: " << nr1 << " / " << nr2 << " = " << nr1 / nr2 << endl;
        break;
    default:
        cout << "[ERRO] Opção inválida.";
    }
    //cout << "Pressiona uma tecla para continuar...";
    system("pause");
    }
    while(loop);
    return 0;
}
