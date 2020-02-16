#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <string>
using namespace std;

bool loop;
int main()
{
    setlocale (LC_ALL, "portuguese");
    for (int i=0;i<20;i++)
    {
        cout << "*";
    }
    return 0;
}
