#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <string>

using namespace std;

int main()
{
    //Definir variáveis a usar e locale
    setlocale (LC_ALL, "portuguese");
    float nota[5];
    string nome[5];
    int nr = 0;
    bool bad;
    //Obter e processar nota de cada um dos alunos
    for (int i=0; i<5; i++)
    {
        //cout << "Valor de i:" << i << endl;
        cout << "Insira o nome do aluno nº "<<i+1<<": ";
        cin >> nome[i];
        //cout << nome[i];
        do
        {
            bad = false;
            cout << "Insira a nota de '"<<nome[i]<<"': ";
            cin >> nota[i];
            if (!cin.good() || nota[i] < 0 || nota[i] > 20)
            {
                bad = true;
                cin.clear();
                cin.ignore(99999, '\n');
                cout << "[ERRO] A nota inserida não é válida.\n";
            }
        }
        while (bad);
    }

        //Apresentar resultados
        cout << "\n\n-------------------------\n";
        for (int i=0; i<5; i++)
        {
           // cout << "Valor de n:" << n << endl;
            cout << "Aluno nº " << i+1 << ":" << endl;
            cout << "   - Nome: " << nome[i] << endl;
            cout << "   - Nota: " << nota[i] << endl;

            if (nota[i] >= 9.5)
            {
                cout << "   - Resultado da nota: Positivo" << endl;
                nr++;
            }
            //if (nota[i] < 7.5)
            else
            {
                cout << "   - Resultado da nota: Negativa" << endl;
            }

        }
        cout << endl << "Nº de notas positivas: " << nr;
    return 0;
}
