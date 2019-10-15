#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <string>

using namespace std;

int main()
{
    //Definir vari�veis a usar e locale
    setlocale (LC_ALL, "portuguese");
    float nota[3];
    string nome[3];
    bool bad;
    //Obter e processar nota de cada um dos alunos
    for (int i=0; i<=2; i++)
    {
        //cout << "Valor de i:" << i << endl;
        cout << "Insira o nome do aluno n� "<<i+1<<": ";
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
                cout << "[ERRO] A nota inserida n�o � v�lida.\n";
            }
        }
        while (bad);
    }

        //Apresentar resultados
        cout << "\n\n-------------------------\n";
        for (int i=0; i<=2; i++)
        {
           // cout << "Valor de n:" << n << endl;
            cout << "Aluno n� " << i+1 << ":" << endl;
            cout << "   - Nome: " << nome[i] << endl;
            cout << "   - Nota: " << nota[i] << endl;

            if (nota[i] >= 9.5)
            {
                cout << "   - Estado: APROVADO" << endl;
            }
            if (nota[i] < 7.5)
            {
                cout << "   - Estado: REPROVADO" << endl;
            }
            if (nota[i] < 9.5 && nota[i] >=w 7.5)
            {
                cout << "   - Estado: PARA EXAME" << endl;
            }

     //       cout << "   - Estadi: " << vc_base << endl;

        }
    return 0;
}
