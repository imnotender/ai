#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <string>

using namespace std;

int main()
{
    //Definir vari�veis a usar e locale
    setlocale (LC_ALL, "portuguese");
    float nota[5];
    int nr = 0;
    float soma=0, media=0;
    bool bad;
    //Obter e processar notas
    for (int i=0; i<6; i++)
    {
        do
        {
            bad = false;
            cout << "Insira a nota "<<i+1<<": ";
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
        for (int i=0; i<6; i++)
        {
            soma = soma + nota[i];
            cout << "Nota n�" << i+1 << ": " << nota[i] << endl;
        }
        media = soma / 6;
        cout << "M�dia das 6 notas: " << media;
    return 0;
}
