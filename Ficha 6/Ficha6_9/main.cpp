#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <string>
using namespace std;

bool bad;
float getnr(string askmsg, string errormsg)
{
    float nr;
    do
    {
        bad = false;
        cout << askmsg;
        cin >> nr;
        if (!cin.good() || nr <= 0)
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


bool loop;

int main()
{
    setlocale (LC_ALL, "portuguese");
    float price, qnt, rslt;
    price = getnr("Insira o preço do KWh: ", "[ERRO] Preço inválido.\n");
    qnt = getnr("Insira a quantidade de KWhs consumidos no mês: ", "[ERRO] Quantidade inválida.\n");
    cout << endl << "--------------------------";
    cout << endl << "Preço do KWh: " << price << " EUR" << endl;
    cout << endl << "KWhs consumidos no mês: " << price << endl;
    rslt = price*qnt;
    cout << endl << "Total a pagar: " << rslt << " EUR" <<  endl;

}
