#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <string>
using namespace std;

bool loop;
int main()
{
    setlocale (LC_ALL, "portuguese");
    char a;
    cout << "Digite um caracter: ";
    cin >> a;
    for (int i=0; i<10; i++)
    {
        cout << a << endl;
    }

    return 0;
}
