#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <string>
#include <cstdlib>
using namespace std;

bool bad=false, loop=true;
float getnr(string askmsg, string errormsg)
{
    float nr;
    do
    {
        bad = false;

        cout << askmsg;
        cin >> nr;
        if (!cin.good() || nr <= 0 || nr != int(nr))
        {
            bad = true;
            cin.clear();
            cin.ignore(99999, '\n');
            cout << errormsg;

        }
    }
    while(bad);
    return nr;
}


int main()
{
    setlocale (LC_ALL, "portuguese");
    // Genero true para masculino, false para feminino
    string genero, gostar, resposta;
    int idade, homens = 0, mulheres = 0, ultimapergunta=0;

    do
    {
        do
        {
            bad=false;
            cout << "Digite o seu g�nero (M ou F): ";
            cin >> genero;
            if(!cin.good())
            {
                bad = true;
                cout << "[ERRO] G�nero inv�lido.\n";
            }
            else if (genero == "m")
            {
                homens++;
            }
            else if (genero == "f")
            {
                mulheres++;
            }
            else
            {
                bad=true;
                cout << "[ERRO] G�nero inv�lido.\n";
            }
        }
        while(bad);

        idade = getnr("Digite a sua idade: ", "[ERRO] A idade inserida � inv�lida.\n");

        do
        {
            bad=false;
            cout << "Gosta do curso que est� a frequentar? (S ou N): ";
            cin >> gostar;
            if (!cin.good())
            {
                bad=true;
                cout << "[ERRO] A resposta inserida � inv�lida.\n";
            }
            else if (gostar == "s")
            {
                //Nada
            }
            else if (gostar == "n")
            {
                if (idade < 23)
                {
                    if (genero == "m")
                        {
                            ultimapergunta++;

                        }
                }
            }
            else
            {
                bad=true;
                cout << "[ERRO] A resposta inserida � inv�lida.\n";
            }

        }
        while(bad);
        do {

            cout << "Deseja sair? (S ou N): ";
            cin >> resposta;
            if (!cin.good())
            {
                bad = true;
                cout << "[ERRO] Resposta inv�lida.\n";
            }
            else if (resposta=="s")
            {
                loop=false;
            }
            else if (resposta=="n")
            {
                system("cls");
            }
            else
            {
                bad=true;
                cout << "[ERRO] Resposta inv�lida.\n";
            }

        }
        while(bad);

    }
    while(loop);
        system("cls");
        cout << "\nN�mero de homens entrevistados: " << homens << endl;
        cout << "N�mero de mulheres entrevistadas: " << mulheres << endl;
        double percentagem = ((mulheres / (mulheres + homens))) * 100;
        cout << "Percentagem de mulheres entre os entrevistados: " << percentagem << endl;
        cout << "Homens com menos de 23 anos que n�o gostam do curso que est�o a frequentar: " << ultimapergunta << "%" << endl;
        cout << "\n\n\n\n";

    return 0;
}
