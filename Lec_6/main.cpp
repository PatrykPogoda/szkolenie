#include <iostream>
#include "Ulamek.h"


using namespace std;

int main()
{
    Ulamek ob_1(1,2), ob_2(1,3), ob_3(0,0);

    ob_3 = ob_1+ob_2;
    cout<<"licznik: "<<ob_3.licznik<<" i mianownik: "<<ob_3.mianownik<<endl;
    /*
    Ulamek ulamek_1(1,2), ulamek_2(1,3);
    ob_2 = ob_1.dodawanie(ulamek_2);
    cout<<"licznik: "<<ob_2.licznik<<" i mianownik: "<<ob_2.mianownik<<endl;
    ob_2 = ob_1.odejmowanie(ulamek_2);
    cout<<"licznik: "<<ob_2.licznik<<" i mianownik: "<<ob_2.mianownik<<endl;
    ob_2 = ulamek_2.odejmowanie(ob_1);
    cout<<"licznik: "<<ob_2.licznik<<" i mianownik: "<<ob_2.mianownik<<endl;
    */
    return 0;
}
