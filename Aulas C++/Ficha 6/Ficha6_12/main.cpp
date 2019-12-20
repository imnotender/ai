#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <string>
using namespace std;

bool bad;
float getnr(int nr, string askmsg, string errormsg)
{
    do
    {
        bad = false;
        cout << "Insira o " << nr+1 << "º número: ";
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


bool loop;

int main()
{
    setlocale (LC_ALL, "portuguese");
    float nr[3];
    float maximo, minimo;
    for (int i=0; i<3;i++)
    {
        string askmsg = "b";
        nr[i] = getnr(i, askmsg, "[ERRO] Número Inválido.\n");
    }
    maximo = nr[0];
    for (int i = 0; i < 3; i++)
    {
        if (maximo < nr[i])
        {
            maximo = nr[i];
        }

    }
          minimo = nr[0];
    for (int i = 0; i < 3; i++)
    {
        if (minimo > nr[i])
        {
            minimo = nr[i];
        }

    }
    cout << "Menor número: " << minimo << endl;
    cout << "Maior número: " << maximo;

}
