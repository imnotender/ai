#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <string>

using namespace std;

int main()
{
    //Definir variáveis a usar e locale
    setlocale (LC_ALL, "portuguese");
    float vc_base, vc_liquido;
    int idade[3];
    string nome[3];
    bool bad;
    //Obter vencimento base
    do
    {
        bad = false;
        cout << "Digite o vencimento base: ";
        cin >> vc_base;
        if (!cin.good() || vc_base <= 0)
        {
            cin.clear();
            cin.ignore(99999, '\n');
            cout << "[ERRO] Vencimento base inserido é inválido.\n";
            bad = true;
        }
    }
    while(bad);
    //Verificar vencimento líquido de cada um dos funcionários, escalavemente
    for (int i=0; i<=2; i++)
    {
        //cout << "Valor de i:" << i << endl;
        cout << "Insira o nome do funcionário nº "<<i+1<<": ";
        cin >> nome[i];
        //cout << nome[i];
        do
        {
            bad = false;
            cout << "Insira a idade de '"<<nome[i]<<"': ";
            cin >> idade[i];
            if (!cin.good())

            {
                bad = true;
                cin.clear();
                cin.ignore(99999, '\n');
                cout << "[ERRO] A idade inserida não é válida.\n";
            }

        }
        while (bad);

    }

        //Apresentar resultados
        cout << "\n\n-------------------------\n";
        for (int n=0; n<=2; n++)
        {
           // cout << "Valor de n:" << n << endl;
            cout << "Funcionário nº " << n+1 << ":" << endl;
            cout << "   - Nome: " << nome[n] << endl;
            cout << "   - Idade: " << idade[n] << endl;
            cout << "   - Vencimento Base: " << vc_base << endl;
            if (idade[n] < 25)
            {
                vc_liquido = vc_base + vc_base*0.01;
            }
            else
            {
                vc_liquido = vc_base + vc_base*0.03;
            }
            cout << "   - Vencimento Líquido: " << vc_liquido<<endl;
        }
    return 0;
}
