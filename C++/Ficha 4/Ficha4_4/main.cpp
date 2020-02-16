#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <string>

using namespace std;

int main()
{
    //Definir vari�veis a usar e locale
    setlocale (LC_ALL, "portuguese");
    float l1,l2,area;
    l1 = l2 = area = 0;
    bool bad;
    //Obter e validar lado 1
    do
    {
        bad = false;
        cout << "Insira o 1� lado: ";
        cin >> l1;
        if (!cin.good() || l1<=0)
        {
            cin.clear();
            cin.ignore(99999, '\n');
            bad = true;
            //cout << "[ERRO] Valor inserido ("<<l1<<") n�o � uma medida de comprimento v�lida.\n";
            cout << "[ERRO] Valor inserido n�o � uma medida de comprimento v�lida.\n";
        }
    }
    while(bad);
    //Obter e validar lado 2
    do
    {
        bad = false;
        cout << "Insira o 2� lado: ";
        cin >> l2;
        if (!cin.good() || l2<=0)
        {
            cin.clear();
            cin.ignore(99999, '\n');
            bad = true;
            //cout << "[ERRO] Valor inserido ("<<l2<<") uma medida de comprimento v�lida.\n";
            cout << "[ERRO] Valor inserido uma medida de comprimento v�lida.\n";
        }
    }
    while(bad);

    if (l1 == l2)
    {
        cout << "\nOs dois lados inseridos s�o iguais - trata se de um quadrado.\n";
    }
    else
    {
        cout << "Os dois lados inseridos n�o s�o iguais - trata-se de um ret�ngulo.\n";
    }
    area = l1*l2;
    cout << "�rea ("<<l1<<"*"<<l2<<") = "<<area<<"\n\n\n";
    return 0;
}
