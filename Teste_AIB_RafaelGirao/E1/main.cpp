#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <string>
#include <cstdlib>
using namespace std;

bool bad=false, loop=true;
double getnr(string askmsg, string errormsg)
{
    float nr;
    do
    {
        bad = false;

        cout << askmsg;
        cin >> nr;
        if (!cin.good() || nr < 50 || nr != int(nr) || nr > 70)
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
    float nraulas;
    setlocale (LC_ALL, "portuguese");
    nraulas = getnr("Digite o número de aulas assistidas: " , "Valor de Aula Inválido!\n");
    if(nraulas <= 55)
    {
        cout << "Deve Melhorar a assiduidade";
    }
    else if(nraulas >=56 && nraulas <=60)
    {
        cout << "Assiduidade Regular";
    }
    else if(nraulas >=61 && nraulas <=70)
    {
        cout << "Aluno Assíduo";
    }
    return 0;
}
