#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <string>
#include <cstdlib>
using namespace std;

bool bad=false, loop=true;
float getnr(string askmsg, string errormsg)
{
    float nr;
    do
    {
        bad = false;

        cout << askmsg;
        cin >> nr;
        if (!cin.good() || nr != int(nr))
        {
            bad = true;
            cin.clear();
            cin.ignore(99999, '\n');
            cout << errormsg;

        }
    }
    while(bad);
    return nr;
}

double getmesada(int i, string errormsg)
{
    float nr;
    do
    {
        bad = false;

        cout << "Digite o valor da mesada n� " << i+1 << ": ";
        cin >> nr;
        if (!cin.good() || nr < 25 || nr > 40)
        {
            bad = true;
            cin.clear();
            cin.ignore(99999, '\n');
            cout << errormsg;

        }
    }
    while(bad);
    return nr;
}

int main()
{
    int opt;
    bool done=false;
    float soma = 0, media=0;
    setlocale (LC_ALL, "portuguese");
    do
    {

        system("cls");
        cout << "   MENU\n";
        cout << "0 - Sair\n";
        cout << "1 - Digitar Mesadas\n";
        cout << "2 - Mostrar Soma das Mesadas\n";
        cout << "3 - Calcular M�dia das Mesadas\n";
        opt = getnr("Digite a Op��o: ", "N�mero Inv�lido!\n");

        cout << "\n";
        switch(opt)
        {
            case(0):
                cout <<"Terminar o Programa!\n";
                loop  = false;
                exit(0);
                system("pause");
                break;
            case(1):
                cout <<"\n";
                float mesada[5];
                for(int i = 0; i<5; i++)
                {
                    mesada[i] = getmesada(i, "Mesada Inv�lida!\n");
                }
                done = true;
                system("pause");
                break;
            case(2):
                if(done==true)
                {
                    cout << "Soma das 5 mesadas: \n";
                    for(int i=0; i<5; i++)
                    {
                        soma = soma + mesada[i];
                        cout << mesada[i] << " + ";
                    }
                    cout << " = " << soma << endl;
                }

                else
                   {
                    cout << "Deve digitar as mesadas na op��o 1\n";
                   }
                system("pause");
                break;
            case(3):
                if(done==true)
                {
                    cout << "M�dia das 5 mesadas: \n";
                    cout << "m�dia = (";
                    for(int i=0; i<5; i++)
                    {
                        soma = soma + mesada[i];

                        cout << mesada[i];
                        if (i!=4)
                        {
                            cout << " + ";
                        }
                    }
                    media=soma/5;
                    cout << ") / 5 = " << media << endl;

                }
                else
                {
                    cout << "Deve digitar as mesadas na op��o 1\n";
                }
                system("pause");
                break;
            default:
                cout << "N�mero Inv�lido!\n";
                system("pause");
                break;
        }
    }
    while(loop);

    return 0;
}
