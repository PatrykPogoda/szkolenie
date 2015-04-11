#include <iostream>

using namespace std;

int main()
{
    float tablica[5];
    float suma = 0;
    cout<<"Podaj 5 liczb"<<endl;
    for(int i=0; i<5; i++)
    {
        cin>>tablica[i];
        suma += tablica[i];
    }
    cout<<endl;
    for(int i=0; i<5; i++)
    {
        cout<<tablica[i]<<" ";
    }

    cout<<endl;
    cout<<"suma: "<<suma<<endl;
    suma = suma/5;
    cout<<"Srednia: "<<suma;
    return 0;
}
