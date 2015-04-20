#include <iostream>

using namespace std;
struct Jeden{
    int x;
};
struct Dwa{
    int podajx(Jeden &j, int x)
    {
        j.x = x;
    }
};
int main()
{
    Jeden obiektJ, obiektJ2;
    Jeden *wsk = &obiektJ;
    Jeden *wsk2 = &obiektJ2;
    Dwa obiektD;

    cout<<"Przed przypisaniem (randomowa wartosc): "<<obiektJ.x<<endl;
    cout<<"Przed przypisaniem (wskaznikiem wsk->): "<<wsk->x<<endl;
    cout<<"Wartosc randomowa powinna sie zmieniac co odpalenie programu, ale nie w trakcie jego dzialania."<<
    "Mozna to przesledzic po obiekcie 2."<<endl<<endl;
    cout<<"Sprawdzam wskaznikiem co jest w obiecie drugim: "<<wsk2->x<<endl;

    obiektD.podajx(obiektJ, 10);

    cout<<endl;

    cout<<"Pierwsze przypisanie: "<<obiektJ.x<<endl;
    cout<<"Pierwsze przypisanie (wskaznikiem wsk->): "<<wsk->x<<endl;
    cout<<"Sprawdzam wskaznikiem co jest w obiecie drugim: "<<wsk2->x<<endl;

      obiektD.podajx(obiektJ, 11);

    cout<<endl;

    cout<<"Drugie przypisanie: "<<obiektJ.x<<endl;
    cout<<"Drugie przypisanie (wskaznikiem wsk->): "<<wsk->x<<endl;
    cout<<"Sprawdzam wskaznikiem co jest w obiecie drugim: "<<wsk2->x<<endl;


    cout<<endl;
    obiektJ.x = 12;
    obiektJ2.x = 111;
    cout<<"Zmieniam wartosc standadowo: "<<obiektJ.x<<endl;
    cout<<"i przez wskaznik ja wypisuje: "<<wsk->x<<endl;
    cout<<"i x w obiekcie 2 (po zmianie wartosci): "<<wsk2->x<<endl;


    return 0;
}
