#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <string>

using namespace std;

int main()
{
    //Definir vari�veis a usar e locale
    setlocale (LC_ALL, "portuguese");
    int nr;
    bool bad;
    do
    {
        bad = false;
        cout << "Digite um n�mero: ";
        cin >> nr;
        if (!cin.good())
        {
            cin.clear();
            cin.ignore(99999, '\n');
            cout << "[ERRO] N�mero inserido � inv�lido.\n";
            bad = true;
        }
        else
        {
            cout << "\nTabuada do n� " << nr<< ": \n";
            for (int i = 1; i<11; i++)
            {
                cout << nr << " * " << i << " = " << nr*i << endl;
            }
        }


    }
    while(bad);

    return 0;
}
