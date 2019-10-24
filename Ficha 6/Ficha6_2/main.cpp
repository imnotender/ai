#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <string>
#include <cstdlib>
using namespace std;

bool loop;
int main()
{
    setlocale (LC_ALL, "portuguese");
    float nr;
    do
    {
        loop = true;
        cout << "Insira um n�mero (ou insira 0 para sair): ";
        cin >> nr;
        if (!cin.good() || nr > 5 || nr < 0 || nr != int(nr))
        {
            loop = true;
            cin.clear();
            cin.ignore(99999, '\n');
            cout << "[ERRO] OP��O INV�LIDA.\n";
        }
        else if (nr == 0)
        {
            cout << "Saiu do programa."<< endl;
            exit(0);
            loop = false;

        }
        else
        {
            cout << "Inseriu o n�mero " << nr << endl;
        }

        system("pause");
        system("cls");
    }
    while(loop);

    return 0;
}
