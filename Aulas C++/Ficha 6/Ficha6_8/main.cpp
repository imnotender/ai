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
    int i = getnr("Insira a quantidade de n�meros que pretende introduzir: ", "[ERRO] O valor inserido n�o � v�lido.\n");
    float nrs[i];
    int n = 0;
    float soma = 0;
    for(;i > 0; i--)
    {

        cout << "Digite o n�mero n� " << n+1 << ": ";
        nrs[i] = getnr("", "[ERRO] O valor inserido n�o � v�lido.\n");
        soma = soma + nrs[i];
        n++;
    }
    float media = soma / n;
    cout << "Soma de todos os " << n << " n�meros inseridos = " << soma<< endl;
    cout << "M�dia de todos os " << n << " n�meros inseridos = " << media<< endl;

    return 0;
}
