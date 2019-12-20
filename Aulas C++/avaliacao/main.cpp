#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <string>
#include <cstdlib>
using namespace std;

bool bad=false, loop=true;
double getnr(string askmsg, string errormsg)
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

    return 0;
}
