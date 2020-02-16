#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <string>

using namespace std;

int main()
{
    //Definir vari�veis a usar e locale
    setlocale (LC_ALL, "portuguese");
    int n;
    bool bad;
    //Obter e validar n�mero
    do
    {
        bad = false;
        cout << "Insira um n�mero: ";
        cin >> n;
        if (!cin.good())
        {
            cin.clear();
            cin.ignore(99999, '\n');
            bad = true;
            cout << "[ERRO] Valor inserido n�o � um n�mero v�lido.\n";
        }

    }
    while(bad);
    if (n % 2 == 0)
    {
        cout << "O n�mero "<<n<<" � par.\n";

    }
    else
    {
        cout << "O n�mero "<<n<<" � �mpar.\n";
    }
    return 0;
}
