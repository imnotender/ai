#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <math.h>
#include <string>

using namespace std;

void menu();

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
    menu();

    return 0;
}

int somadedoisnumeros()
{
    //Fazer a soma de dois n�meros
    int n1,n2,soma;
    cout << "Digite o 1� n�mero: ";
    cin >> n1;
    cout << "Digite o 2� n�mero: ";
    cin >> n2;
    soma=n1+n2;
    cout << "A soma �: "<<soma<<"\n";
    menu();

    return 0;
}
int valordeumproduto()
{
    //Fazer a soma de dois n�meros
    string desc;
    float valor,qntd,rslt;
    cout << "Digite a descri��o do produto: "; //Isto fica tudo maluco quando tem mais que caracteres alfanumericos
    cin >> desc;
    cout << "Digite o valor de uma unidade de produto: ";
    cin >> valor;
    cout << "Digite a quantidade de produto: ";
    cin >> qntd;
    rslt=qntd*valor;
    cout << "Descri��o do produto digitada: "<<desc<<"\n";
    cout << "O valor de "<<qntd<<" produtos valendo cada um "<<valor<<" Euros �: "<<rslt<<"\n";
    menu();

    return 0;
}

int maiornumero()
{
    float n1,n2;
    cout << "Digite o 1� n�mero:";
    cin >> n1;
    cout << "Digite o 2� n�mero:";
    cin >> n2;
    if (n1 > n2)
    {
        cout << "O n�mero "<<n1<<"� maior que "<<n2"\n";
    }
    if (n1 < n2)
    {
        cout << "O n�mero "<<n2<<"� maior que "<<n1"\n";
    }
    return 0;
}


/*
int cenadalaura()
{
    int i;
    cout << "Digite o n� de vari�veis:";
    cin >> i;
    for (i > 0; i--)
    {
        cout << i << "\n";
    return 0;
    }

}
*/
int calchip()
{
    //Calcular a hipotenusa de um tri�ngulo ret�ngulo
    float c1,c2,hip;
    cout << "Digite o cateto 1: ";
    cin >> c1;
    cout << "Digite o cateto 2: ";
    cin >> c2;
    hip=sqrt(pow(c1, 2) + pow(c2, 2));
    cout << "O valor da hipotenusa �: "<<hip<<"\n";
    menu();

    return 0;
}

int resolverexpressaomaluca()
{
    //Resolver ((A+B) * C / D)
    float a,b,c,d,rslt,sum;
    string expressao;

    cout << "Ir� resolver (A+B) * C / D";
    cout << "\n";
    cout << "\n";
    cout << "Digite A: ";
    cin >> a;
    cout << "Digite B: ";
    cin >> b;
    cout << "Digite C: ";
    cin >> c;
    cout << "Digite D: ";
    cin >> d;
    sum=(a+b);
    rslt=sum * c / d;
//    expressao = "(" + a + "+" + b + ") * " + c + " / " + d;
    cout << "Express�o a resolver: "<<expressao<<"\n";
    cout << "\n";
    cout << "Resultado: "<<rslt<<   "\n";

    menu();
    return 0;
}


void menu()
{

    /*
    Lista de Programas:
    0 - Soma de Dois N�meros, somadedoisnumeros FEITO
    1 - �rea de um tri�ngulo, areadeumtriangulo FEITO
    2 - Resolver ((A+B)*C)/D ), resolverexpressaomaluca WIP
    3 - Resolver a hipotenusa de um tri�ngulo ret�ngulo, calchipo()
    4 - Calcular o valor total de um produto, calcularproduto
    5 - Sair, abort()
    */

    int nr;
    cout << "\n";
    cout << "\n";
    cout << "Lista de Fun��es: \n";
    cout << "0 - Soma de Dois n�meros\n";
    cout << "1 - �rea de um tri�ngulo \n";
    cout << "2 - Resolver ((A+B)*C / D) \n";
    cout << "3 - Calcular a hipotenusa de um tri�ngulo ret�ngulo \n";
    cout << "4 - Calcular o valor total de um produto\n";
    cout << "5 - Maior n�mero de dois\n";
    cout << "6 - Cena da Laura\n";
    cout << "7 - Sair\n";
    cout << "\n";
    cout << "\n";
    cout << "Digita um valor de 0 a 5: ";
    cin >> nr;
    cout << "\n\n\n";
    if (nr == 0)
    {
        somadedoisnumeros();
    }
    if (nr == 1)
    {
        areadeumtriangulo();
    }
    if (nr == 2)
    {
        resolverexpressaomaluca();
    }
    if (nr == 3)
    {
        calchip();
    }
    if (nr == 4)
    {
        valordeumproduto();
    }
    if (nr == 5)
    {
        maiornumero();
    }
    if (nr == 6)
    {

        /*
        void cenadalaura();
        cenadalaura();

        */
        exit(0);
    }
    if (nr == 7)
    {
        exit(0);
    }
    menu();
}


int main()
{
    setlocale (LC_ALL, "portuguese");
    menu();
    return 0;
}

