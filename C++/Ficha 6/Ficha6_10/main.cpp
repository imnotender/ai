#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <string>

using namespace std;

bool loop;
int main()
{
    float rslt;
    setlocale (LC_ALL, "portuguese");
    cout << "Soma dos primeiros 50 números naturais:\n";
    for (int i = 1; i<=50; i++)
    {
        rslt = rslt + i;
        cout << i << " + ";
    }
    cout << " = " << rslt << endl;
    return 0;
}
