#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <string>

using namespace std;

bool loop;
int main()
{
    setlocale (LC_ALL, "portuguese");
    float nr, rslt;
    do
    {
        loop = false;
        cout << "Insira um número natural: ";
        cin >> nr;
        if (!cin.good() || nr <  0 || nr != int(nr))
        {
            loop = true;
            cin.clear();
            cin.ignore(99999, '\n');
            cout << "[ERRO] Opção inválida.\n";
        }
        }
        while(loop);

        rslt = nr;
        for (int i = nr; i>=1; i--)
        {
            if (rslt != i)
                {
                    rslt = rslt * i;
                    cout << " * " << i;
                }
            else
            {
                cout << nr << "! = " << i;
            }
        }
        cout << " <=>" << endl << "<=> " << nr << "! = " << rslt << endl;


    return 0;
    }




