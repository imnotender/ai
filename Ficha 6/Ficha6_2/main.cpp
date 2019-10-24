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
        cout << "Insira um número (ou insira 0 para sair): ";
        cin >> nr;
        if (!cin.good() || nr > 5 || nr < 0 || nr != int(nr))
        {
            loop = true;
            cin.clear();
            cin.ignore(99999, '\n');
            cout << "[ERRO] OPÇÃO INVÁLIDA.\n";
        }
        else if (nr == 0)
        {
            cout << "Saiu do programa."<< endl;
            exit(0);
            loop = false;

        }
        else
        {
            cout << "Inseriu o número " << nr << endl;
        }

        system("pause");
        system("cls");
    }
    while(loop);

    return 0;
}
