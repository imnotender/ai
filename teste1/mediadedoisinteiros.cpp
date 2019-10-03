#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    //Banana
    float n1,n2,media;
    setlocale (LC_ALL, "portuguese");
    cout << "Digite o 1º número: ";
    cin >> n1;
    cout << "Digite o 2º número: ";
    cin >> n2;
    media=(n1+n2)/2;
    cout << "A média é: "<<media<<"\n";


    return 0;
}
