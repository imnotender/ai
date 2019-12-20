#include <iostream>
#include <locale.h>
#include <stdlib.h>
using namespace std;

bool bad;
int getnr(string askmsg, string errormsg)
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


bool loop;
int main()
{
    setlocale (LC_ALL, "portuguese");
    int i = getnr("Insira a quantidade de números que pretende introduzir: ", "[ERRO] O valor inserido não é válido.\n");
    float nrs[i];
    int n = 0;
    float soma = 0;
    for(;i > 0; i--)
    {

        cout << "Digite o número nº " << n+1 << ": ";
        nrs[i] = getnr("", "[ERRO] O valor inserido não é válido.\n");
        soma = soma + nrs[i];
        n++;
    }
    float media = soma / n;
    cout << "Soma de todos os " << n << " números inseridos = " << soma<< endl;
    cout << "Média de todos os " << n << " números inseridos = " << media<< endl;

    return 0;
}
