#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <math.h>
#include <string>

using namespace std;

void menu();

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
    menu();

    return 0;
}

int somadedoisnumeros()
{
    //Fazer a soma de dois números
    int n1,n2,soma;
    cout << "Digite o 1º número: ";
    cin >> n1;
    cout << "Digite o 2º número: ";
    cin >> n2;
    soma=n1+n2;
    cout << "A soma é: "<<soma<<"\n";
    menu();

    return 0;
}
int valordeumproduto()
{
    //Fazer a soma de dois números
    string desc;
    float valor,qntd,rslt;
    cout << "Digite a descrição do produto: "; //Isto fica tudo maluco quando tem mais que caracteres alfanumericos
    cin >> desc;
    cout << "Digite o valor de uma unidade de produto: ";
    cin >> valor;
    cout << "Digite a quantidade de produto: ";
    cin >> qntd;
    rslt=qntd*valor;
    cout << "Descrição do produto digitada: "<<desc<<"\n";
    cout << "O valor de "<<qntd<<" produtos valendo cada um "<<valor<<" Euros é: "<<rslt<<"\n";
    menu();

    return 0;
}

int maiornumero()
{

    float n1,n2;
    cout << "Digite o 1º número:";
    cin >> n1;
    cout << "Digite o 2º número:";
    cin >> n2;
    if (n1 > n2)
    {
     cout << "O número "<<n1<<" é maior que "<<n2<<"\n";
     //cout << "O maior número é: "<<n1<<"\n";
    }
    if (n1 < n2)
    {
       cout << "O número "<<n2<<"é maior que "<<n1<<"\n";
        //cout << "Om aior número é: "<<n2<<"\n";
    }

    menu();
    return 0;
}



int cenadalaura()

{
    /*
    int i, cdl_0 cdl_1 cdl_2 cdl_3 cdl_4 cdl_5 cdl_6 cdl_7 cdl_8 cdl_9 cdl_10 cdl_11 cdl_12 cdl_13 cdl_14 cdl_15 cdl_16 cdl_17 cdl_18 cdl_19;
    cout << "Digite o nº de variáveis:";
    cin >> i;
    for (int si=0; si<i ; i++)
    {
        cout << "Define p/ grau "<<si<<": ";
        cin >>
    }
    */
    menu();
    return 0;
}
int medianotas()
{
    float somanotas, media;
    somanotas=0;
    int nnotas;
    cout << "Digite o nº de notas a introduzir na média: ";
    cin >> nnotas;
    int* x = new int[nnotas];
    for (int i=0; i < nnotas; i++)
    {
        do {
            cout << "Introduz a média do teste nº " << i+1 << ": ";
            cin >> x[i];
            if (x[i] > 20 || x[i] < 0)
            {
                cout << "[ERRO] A nota tem que ser um valor entre 0 e 20.\n";
            }
        }
        while (x[i] > 20 || x[i] < 0);
    }
    for (int i=0; i < nnotas; i++)
    {
    //    cout << x[i];
        somanotas = somanotas + x[i];
    }
 //   cout << "Nº de notas a introduzir na média: "<<nnotas<<"\n";
    media = (somanotas / nnotas);
 //   cout << "Cálculo da média: " << somanotas << " / " << nnotas<< " \n";
    cout << "A média dos "<< nnotas<< " testes é: " << media<<"\n";
    menu();
    return 0;
}

int calchip()
{
    //Calcular a hipotenusa de um triângulo retângulo
    float c1,c2,hip;
    cout << "Digite o cateto 1: ";
    cin >> c1;
    cout << "Digite o cateto 2: ";
    cin >> c2;
    hip=sqrt(pow(c1, 2) + pow(c2, 2));
    cout << "O valor da hipotenusa é: "<<hip<<"\n";
    menu();

    return 0;
}

int resolverexpressaomaluca()
{
    //Resolver ((A+B) * C / D)
    float a,b,c,d,rslt,sum;
    string expressao;

    cout << "Irá resolver (A+B) * C / D";
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
    cout << "Expressão a resolver: "<<expressao<<"\n";
    cout << "\n";
    cout << "Resultado: "<<rslt<<   "\n";

    menu();
    return 0;
}


void menu()
{

    /*
    Lista de Programas:
    0 - Soma de Dois Números, somadedoisnumeros FEITO
    1 - Área de um triângulo, areadeumtriangulo FEITO
    2 - Resolver ((A+B)*C)/D ), resolverexpressaomaluca WIP
    3 - Resolver a hipotenusa de um triângulo retângulo, calchipo()
    4 - Calcular o valor total de um produto, calcularproduto
    5 - Sair, abort()
    */

    int nr;
    cout << "\n";
    cout << "\n";
    cout << "Lista de Funções: \n";
    cout << "0 - Soma de Dois números\n";
    cout << "1 - Área de um triângulo \n";
    cout << "2 - Resolver ((A+B)*C / D) \n";
    cout << "3 - Calcular a hipotenusa de um triângulo retângulo \n";
    cout << "4 - Calcular o valor total de um produto\n";
    cout << "5 - Maior número de dois\n";
    cout << "6 - Cena da Laura\n";
    cout << "7 - Média de n notas\n";
    cout << "8 - Sair\n";

    cout << "\n";
    cout << "\n";
    cout << "Digita um valor de 0 a 8: ";
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
        cout << "WIP";
        menu();
    }
    if (nr == 7)
    {
        medianotas();
    }
    if (nr == 8)
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

