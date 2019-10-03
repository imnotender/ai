#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    //Banana
    float base,altura,area;
    setlocale (LC_ALL, "portuguese");
    cout << "Digite a base: ";
    cin >> base;
    cout << "Digite a altura: ";
    cin >> altura;
    area=(base*altura)/2;
    cout << "A área é: "<<area<<"\n";


    return 0;
}
