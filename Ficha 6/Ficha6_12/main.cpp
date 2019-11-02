#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <string>
using namespace std;

bool bad;
float getnr(int nr, string askmsg, string errormsg)
{
    do
    {
        bad = false;
        cout << "Insira o " << nr << "º número: ";
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
    float nr[3];
    float menornr, maiornr;
    for (int i=1; i<=3;i++)
    {
        //string askmsg = "Insira o " + std::to_string(i) + " número";
        string askmsg = "b";
        nr[i] = getnr(i, askmsg, "[ERRO] Preço Inválido.");
    }
    // n1 > n2 > n3
    if (nr[0] > nr[1] && nr[1] > nr[2])
   {
        maiornr = nr[0];
        menornr = nr[2];
   }
   // n1 > n3 > n2
    else if (nr[0] > nr[2] && nr[2] > nr[1])
   {
    maiornr = nr[0];
    menornr = nr[1];
   }
   // n2 > n1 > n3
    else if (nr[1] > nr[0] && nr[0] > nr[2])
   {
    maiornr = nr[1];
    menornr = nr[2];
   }
   //n2 > n3 > n1
    else if (nr[1] > nr[2] && nr[2] > nr[0])
   {
    maiornr = nr[1];
    menornr = nr[0];
   }
   //n3 > n1 > n3
    else if (nr[2] > nr[0] && nr[0] > nr[2])
   {
    maiornr = nr[2];
    menornr = nr[1];
   }
   //n1 = n2 > n3
    else if (nr[0] == nr[1] && nr[1] > nr[2])
   {
    maiornr = nr[0];
    menornr = nr[2];
   }
   //n1 = n3 > n1
    else if (nr[2] > nr[0] && nr[0] > nr[2])
   {
    maiornr = nr[2];
    menornr = nr[1];
   }
    else if (nr[2] > nr[0] && nr[0] > nr[2])
   {
    maiornr = nr[2];
    menornr = nr[1];
   }
    else if (nr[2] > nr[0] && nr[0] > nr[2])
   {
    maiornr = nr[2];
    menornr = nr[1];
   }
}
