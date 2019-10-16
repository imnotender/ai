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
    //Booleana para registar/verificar dentro do while se o valor � valido ou nao
    bool bad;
    do
    {
        bad = false;
        cout << "Insira a nota do aluno: ";
        cin >> nota;
        if (nota<0 || nota > 20 || !cin.good())
        {
            bad = true;
            cout << "[ERRO] O valor inserido n�o � uma nota v�lida.\n";
            cin.clear();
            cin.ignore(99999, '\n');

        }
    }
    while(bad);

    if (nota>=18)
    {
        cout << "N�vel Excelente.\n";
    }
    else if (nota>=14 && nota<18)
    {
        cout << "N�vel Bom.\n";
    }
    if (nota>=9.5)
    {
        cout << "Aluno Aprovado.\n";
    }
    else if (nota<9.5)
    {
        cout << "Aluno Reprovado.";
    }

    return 0;
}
