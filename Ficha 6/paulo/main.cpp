#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Portuguese");

    int i,n;

    do{

        cout << "Digite as notas.\n\n";

        for(i=1;i<5;i++)
            {
                cout << "Digite a " << i << "a nota: ";
                cin>>n;



                if(n>=0 && n<95)
                {
                    cout << "Nota negativa.\n\n";
                }
                else if(n>=95 && n<=200)
                {
                    cout << "Nota positiva.\n\n";
                }
                else
                {
                    cout << "Nota inválida! Tente novamente.";
                }
            }

    cout << "Alguma das notas inseridas é inválida! Tente novamente...";

    system("pause");
    system("cls");

    }while(n<0 || n>200);

    return 0;
}
