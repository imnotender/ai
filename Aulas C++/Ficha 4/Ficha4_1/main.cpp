#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <string>

using namespace std;

int main()

{
    //Definir variáveis a usar e locale
    setlocale (LC_ALL, "portuguese");
    float valor[3], total, totaldesc, desc;
    string nome[3];
    //Booleana para registar/verificar dentro do while se o valor é valido ou nao
    bool bad;

    //Obter nome e valor dos 3 produtos, e validar o valor do produto, escalavelmente
    for (int i=0; i<3; i++)
    {
        cout << "Insira o nome do produto nº "<<i+1<<": ";
        cin >> nome[i];
       // cout << nome[i];
        do
        {
            bad = false;
            cout << "Insira o valor do produto '"<<nome[i]<<"' em Euros: ";
            cin >> valor[i];
            if (!cin.good())

            {
                bad = true;
                cin.clear();
                cin.ignore(99999, '\n');
                cout << "[ERRO] O valor inserido não é um valor válido.\n";
            }

        }
        while (bad);
    }
    //Somar o valor dos 3 produtos e verificar se há desconto a aplicar
    total = valor[1] + valor[2] + valor[3];
    //Imprimir o nome do produto e respetivo valor, e desconto se houver
    cout << "\n-------------------------------\n";
    cout << "Produto 1: "<<nome[0]<<"\n";
    cout << "    Preço: "<<valor[0]<<" Eur\n";
    cout << "\n";
    cout << "Produto 2: "<<nome[1]<<"\n";
    cout << "    Preço: "<<valor[1]<<" Eur\n";
    cout << "\n";
    cout << "Produto 3: "<<nome[2]<<"\n";
    cout << "    Preço: "<<valor[2]<<" Eur\n";
    cout << "\n";
    cout << "Total a pagar: " << total << " Eur\n\n";

    if (total > 200)
    {
        desc = total * 1/10;
        totaldesc = total - desc;
        cout << "Desconto a aplicar: 10% ("<<desc<<" Eur) \n";
        cout << "Total a pagar(c/ desconto): "<< totaldesc << " Eur\n";
    }
        cout << "\n-------------------------------\n";
    return 0;
}
