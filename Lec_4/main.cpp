#include <iostream>

using namespace std;
double* func(double a)
{
    double* zmienna = new double(a);
    return zmienna;
}
int main()
{
    cout<<"Zadania 1a"<<endl;
    int * a = new int;
    *a = 5;
    cout<<*a<<endl;

    delete a;
    a = new int(8);
    cout<<*a<<endl<<endl;
    delete a;
    a = NULL;
    cout<<"Zadanie 1b"<<endl;
    int * tab = new int[10];
    for(int i=0; i<10; i++)
    {
        *(tab+i)=i;
    }
    for(int i=0; i<10; i++)
    {
        cout<<*(tab+i)<<endl;
    }
    delete[] tab;

    cout<<"Zadanie 1c"<<endl;
    double *d = func(10.5);
    *d = *d+1;
    cout<<*d<<endl;

    delete d;
    cout<<"Zadanie 2"<<endl;


    return 0;
}
