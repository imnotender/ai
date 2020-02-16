#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <string>

using namespace std;

int main()
{
    //Definir variáveis a usar e locale
    setlocale (LC_ALL, "portuguese");
    float l1,l2,area;
    l1 = l2 = area = 0;
    bool bad;
    //Obter e validar lado 1
    do
    {
        bad = false;
        cout << "Insira o 1º lado: ";
        cin >> l1;
        if (!cin.good() || l1<=0)
        {
            cin.clear();
            cin.ignore(99999, '\n');
            bad = true;
            //cout << "[ERRO] Valor inserido ("<<l1<<") não é uma medida de comprimento válida.\n";
            cout << "[ERRO] Valor inserido não é uma medida de comprimento válida.\n";
        }
    }
    while(bad);
    //Obter e validar lado 2
    do
    {
        bad = false;
        cout << "Insira o 2º lado: ";
        cin >> l2;
        if (!cin.good() || l2<=0)
        {
            cin.clear();
            cin.ignore(99999, '\n');
            bad = true;
            //cout << "[ERRO] Valor inserido ("<<l2<<") uma medida de comprimento válida.\n";
            cout << "[ERRO] Valor inserido uma medida de comprimento válida.\n";
        }
    }
    while(bad);

    if (l1 == l2)
    {
        cout << "\nOs dois lados inseridos são iguais - trata se de um quadrado.\n";
    }
    else
    {
        cout << "Os dois lados inseridos não são iguais - trata-se de um retângulo.\n";
    }
    area = l1*l2;
    cout << "Área ("<<l1<<"*"<<l2<<") = "<<area<<"\n\n\n";
    return 0;
}
