#include <iostream>
#include <locale.h>

using namespace std;

int areadeumtriangulo()
{
    //Calcular a �rea de um tri�ngulo
    float base,altura,area;
    cout << "Digite a base: ";
    cin >> base;
    cout << "Digite a altura: ";
    cin >> altura;
    area=(base*altura)/2;
    cout << "A �rea �: "<<area<<"\n";


    return 0;
}
int somadedoisnumeros()
{
    //Fazer a soma de dois n�meros
    int base,altura,area;
    cout << "Digite o 1� n�mero: ";
    cin >> n1;
    cout << "Digite o 2� n�mero: ";
    cin >> n2;
    soma=n1+n2;
    cout << "A soma �: "<<soma<<"\n";

    return 0;
}

int resolverexpressaomaluca()
{
    //Fazer a soma de dois n�meros
    int a,b,c,d;
    cout << "Digite A: ";
    cin >> a;
    cout << "Digite B: ";
    cin >> b;
    cout << "Digite C: ";
    cin >> c;
    cout << "Digite D: ";
    cin >> d;
    cin >> n2;
    soma=n1+n2;
    cout << "A soma �: "<<soma<<"\n";

    return 0;
}

int main()
{
    setlocale (LC_ALL, "portuguese");

    /*
    Lista de Programas:
    0 - Soma de Dois N�meros, somadedoisnumeros FEITO
    1 - �rea de um tri�ngulo, areadeumtriangulo FEITO
    2 - Resolver ((A+B)*C)/D ), resolverexpressaomaluca WIP
    3 - Resolver a hipotenusa de um tri�ngulo ret�ngulo,
    4 - Calcular o valor total de um produto, calcularproduto
    */

    int nr;
    cout << "Lista de Fun��es: \n";
    cout << "0 - Soma de Dois n�meros";
    cout << "1 - �rea de um tri�ngulo: \n";
    cout << "2 - Resolver ((A+B)*C / D): \n";
    cout << "3 - Calcular a hipotenusa de um tri�ngulo ret�ngulo \n";
    cout << "4 - Calcular o valor total de um produto";

    return 0;
}

