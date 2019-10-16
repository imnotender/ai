#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <string>

using namespace std;

int main()
{
    //Definir vari�veis a usar e locale
    setlocale (LC_ALL, "portuguese");
    float nota;
    bool bad;
    //Obter,processar e validar nota
    do
    {

        bad = false;
        cout << "Insira a nota do aluno (Ensino B�sico, entre 1 e 5): ";
        cin >> nota;
        if (!cin.good() || nota < 1 || nota > 5 || nota != int(nota))
        {
            cin.clear();
            cin.ignore(99999, '\n');
            bad = true;
            cout << "[ERRO] Classifica��o inv�lida.\n";
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
            cout << "[ERRO] Classifica��o inv�lida.\n";
        }
    }
    while(bad);

    return 0;
}
