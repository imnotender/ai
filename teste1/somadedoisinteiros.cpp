#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    //Banana
    int base,altura,area;
    setlocale (LC_ALL, "portuguese");
    cout << "Digite o 1� n�mero: ";
    cin >> n1;
    cout << "Digite o 2� n�mero: ";
    cin >> n2;
    soma=n1+n2;
    cout << "A soma �: "<<soma<<"\n";

    return 0;
}
