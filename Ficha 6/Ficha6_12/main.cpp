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

    return 0;
}
