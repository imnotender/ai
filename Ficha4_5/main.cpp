#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <string>

using namespace std;

int main()
{
    //Definir variáveis a usar e locale
    setlocale (LC_ALL, "portuguese");
    int nota;
    bool bad;
    //Obter e validar nota
    do
    {
        /*
        Perguntar à stora porque é que este programa aceita floats para nota( ex: aceita 2.3 como fraco)
        */
        bad = false;
        cout << "Insira a nota do aluno (Ensino Básico, entre 1 e 5): ";
        cin >> nota;
        if (!cin.good() || nota < 1 || nota > 5)
        {
            cin.clear();
            cin.ignore(99999, '\n');
            bad = true;
            cout << "[ERRO] Classificação inválida.\n";
        }
        if (nota == 1) {
            cout << "FRACO\n";
        }
        else if (nota == 2) {
            cout << "INSUFICIENTE\n";
        }
        else if (nota == 3) {
            cout << "SUFICIENTE\n";
        }
        else if (nota == 4) {
            cout << "BOM\n";
        }
        else if (nota == 5) {
            cout << "MUITO BOM\n";
        }
        else if (!bad)
        {
            bad = true;
            cout << "[ERRO] Classificação inválida.\n";
        }
    }
    while(bad);

    return 0;
}
