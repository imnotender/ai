#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <string>

using namespace std;

int main()
{
    //Definir variáveis a usar e locale
    setlocale (LC_ALL, "portuguese");
    int n;
    bool bad;
    //Obter e validar número
    do
    {
        bad = false;
        cout << "Insira um número: ";
        cin >> n;
        if (!cin.good())
        {
            cin.clear();
            cin.ignore(99999, '\n');
            bad = true;
            cout << "[ERRO] Valor inserido não é um número válido.\n";
        }

    }
    while(bad);
    if (n % 2 == 0)
    {
        cout << "O número "<<n<<" é par.\n";

    }
    else
    {
        cout << "O número "<<n<<" é ímpar.\n";
    }
    return 0;
}
