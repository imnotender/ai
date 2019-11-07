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
            cout << "Digite o seu género (M ou F): ";
            cin >> genero;
            if(!cin.good())
            {
                bad = true;
                cout << "[ERRO] Género inválido.\n";
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
                cout << "[ERRO] Género inválido.\n";
            }
        }
        while(bad);

        idade = getnr("Digite a sua idade: ", "[ERRO] A idade inserida é inválida.\n");

        do
        {
            bad=false;
            cout << "Gosta do curso que está a frequentar? (S ou N): ";
            cin >> gostar;
            if (!cin.good())
            {
                bad=true;
                cout << "[ERRO] A resposta inserida é inválida.\n";
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
                cout << "[ERRO] A resposta inserida é inválida.\n";
            }

        }
        while(bad);
        do {

            cout << "Deseja sair? (S ou N): ";
            cin >> resposta;
            if (!cin.good())
            {
                bad = true;
                cout << "[ERRO] Resposta inválida.\n";
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
                cout << "[ERRO] Resposta inválida.\n";
            }

        }
        while(bad);

    }
    while(loop);
        system("cls");
        cout << "\nNúmero de homens entrevistados: " << homens << endl;
        cout << "Número de mulheres entrevistadas: " << mulheres << endl;
        double percentagem = ((mulheres / (mulheres + homens))) * 100;
        cout << "Percentagem de mulheres entre os entrevistados: " << percentagem << endl;
        cout << "Homens com menos de 23 anos que não gostam do curso que estão a frequentar: " << ultimapergunta << "%" << endl;
        cout << "\n\n\n\n";

    return 0;
}
