#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <string>


using namespace std;

int main()
{
    //Definir variáveis a usar e locale
    setlocale (LC_ALL, "portuguese");
    float n1;
    bool bad;
    do
    {
        bad = false;
        cout << "Insira um número: ";
        cin >> n1;
        if (!cin.good())
        {
            cin.clear();
            cin.ignore(99999, '\n');
            bad = true;
            cout << "[ERRO] Valor inserido não é um número real.\n";
        }
    }
    while(bad);
    if (n1 >=10 && n1 <= 20)
    {
        cout << "O número " <<n1<< " pertence ao intervalo [10,20]";
    }
    else
    {
        cout << "O número "<< n1 <<" não pertence ao intervalo [10,20]";
    }
    return 0;
}
