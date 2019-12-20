#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <string>
#include <cstdlib>
using namespace std;

bool bad;
float n1,n2,n3,media;
double getnr(string askmsg, string errormsg)
{
    float nr;
    do
    {
        bad = false;

        cout << askmsg;
        cin >> nr;
        if (!cin.good() || nr <= 0)
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
    setlocale (LC_ALL, "portuguese");
    n1 = getnr("Insira o 1� valor:", "[ERRO] O valor inserido � inv�lido.\n");
    n2 = getnr("Insira o 2� valor:", "[ERRO] O valor inserido � inv�lido.\n");
    n3 = getnr("Insira o 3� valor:", "[ERRO] O valor inserido � inv�lido.\n");
    media = (n1+n2+n3) / 3;
    cout << "M�dia dos 3 valores inseridos: " << media << "EUR\n";
    if (media > 1000)
    {
        cout << "A m�dia dos 3 valores inseridos � superior a 1000EUR.";
    }
    else
    {
        cout << "A m�dia dos 3 valores inseridos n�o � superior a 1000EUR.";
    }
    return 0;
}
