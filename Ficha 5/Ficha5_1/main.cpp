#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <string>

using namespace std;

int main()
{
    //Definir vari�veis a usar e locale
    setlocale (LC_ALL, "portuguese");
    int stock = 1000, opt, change;
    bool bad;
    bool loop;
    string confirm;
    loop = true;
    do
    {
        cout << "\n";
        cout << "\n";
        cout << "Selecione uma op��o: \n";
        cout << "0 - Sair (terminar programa)\n";
        cout << "1 - Consultar stock \n";
        cout << "2 - Levantar stock \n";
        cout << "3 - Depositar stock \n";
        cout << "\n";
        cout << "Selecione a sua op��o: ";
        cin >> opt;



        switch (opt)
        {
            case 0:
                exit(0);
                break;
            case 1:
                cout << "Mercadoria em Stock: "<< stock;
                break;
            case 2:
                do
                {
                    bad = false;
                    cout << "Digite a quantidade de mercadoria a levantar: ";
                    cin >> change;
                    cout << "\n";
                    if (!cin.good() || stock < change)
                    {
                        cout << "[ERRO] Quantidade a levantar inv�lida ou maior que a quantidade em stock.\n"<<endl;
                        cin.clear();
                        cin.ignore(99999, '\n');
                        bad = true;
                    }

                    else
                    {
                        cout << "----------------------\n";
                        cout << "Stock total: "<< stock<<endl;
                        cout << "Qntd de stock a levantar: "<< change<< endl;
                        cout << "Stock restante: "<< stock - change<< endl;
                        cout << "Confirmar? (y/n | s/n)" <<endl;
                        cin >> confirm;

                        if (confirm == "y" || confirm == "s")
                        {
                            cout << "Levantamento confirmado." << endl;
                            stock = stock - change;
                        }
                        else
                        {
                            cout << "Levantamento cancelado." << endl;
                        }
                    }

                }
                while (bad);
                break;
            case 3:
                do
                {
                    bad = false;
                    cout << "Digite a quantidade de stock a depositar: ";
                    cin >> change;
                    cout << "\n";
                    if (!cin.good() || stock + change > 1000)
                    {
                        cout << "[ERRO] Quantidade a depositar inv�lida ou maior que a capacidade de stock.\n"<<endl;
                        cin.clear();
                        cin.ignore(99999, '\n');
                        bad = true;
                    }

                    else
                    {
                        cout << "----------------------\n";
                        cout << "Stock total: "<< stock <<endl;
                        cout << "Qntd de stock a depositar: "<< change<< endl;
                        cout << "Stock restante: "<< stock + change << endl;
                        cout << "Confirmar? (y/n | s/n)" <<endl;
                        cin >> confirm;

                        if (confirm == "y" || confirm == "s")
                        {
                            cout << "Dep�sito confirmado." << endl;
                            stock = stock + change;
                        }
                        else
                        {
                            cout << "Dep�sito cancelado." << endl;
                        }
                    }

                }
                while (bad);
                break;
            default:
                cout << "[ERRO] Op��o inv�lida.";
                break;
        }

        }
        while(loop);


    return 0;
}
