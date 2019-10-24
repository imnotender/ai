#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <string>
#include <cstdlib>
using namespace std;

bool loop;
int main()
{
    setlocale (LC_ALL, "portuguese");
    for (int i=0;i<30;i++)
    {
        cout << i+1 << endl;
    }
    return 0;
}
