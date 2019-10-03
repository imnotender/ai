#include <iostream>
#include <locale.h>

using namespace std;

int areadeumtriangulo()
{
    //Calcular a área de um triângulo
    float base,altura,area;
    cout << "Digite a base: ";
    cin >> base;
    cout << "Digite a altura: ";
    cin >> altura;
    area=(base*altura)/2;
    cout << "A área é: "<<area<<"\n";


    return 0;
}
int somadedoisnumeros()
{
    //Fazer a soma de dois números
    int base,altura,area;
    cout << "Digite o 1º número: ";
    cin >> n1;
    cout << "Digite o 2º número: ";
    cin >> n2;
    soma=n1+n2;
    cout << "A soma é: "<<soma<<"\n";

    return 0;
}

int resolverexpressaomaluca()
{
    //Fazer a soma de dois números
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
    cout << "A soma é: "<<soma<<"\n";

    return 0;
}

int main()
{
    setlocale (LC_ALL, "portuguese");

    /*
    Lista de Programas:
    0 - Soma de Dois Números, somadedoisnumeros FEITO
    1 - Área de um triângulo, areadeumtriangulo FEITO
    2 - Resolver ((A+B)*C)/D ), resolverexpressaomaluca WIP
    3 - Resolver a hipotenusa de um triângulo retângulo,
    4 - Calcular o valor total de um produto, calcularproduto
    */

    int nr;
    cout << "Lista de Funções: \n";
    cout << "0 - Soma de Dois números";
    cout << "1 - Área de um triângulo: \n";
    cout << "2 - Resolver ((A+B)*C / D): \n";
    cout << "3 - Calcular a hipotenusa de um triângulo retângulo \n";
    cout << "4 - Calcular o valor total de um produto";

    return 0;
}

