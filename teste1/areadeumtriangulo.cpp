#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    //Banana
    float n1,n2,media;
    setlocale (LC_ALL, "portuguese");
    cout << "Digite o 1� n�mero: ";
    cin >> n1;
    cout << "Digite o 2� n�mero: ";
    cin >> n2;
    media=(n1+n2)/2;
    cout << "A m�dia �: "<<media<<"\n";


    return 0;
}
