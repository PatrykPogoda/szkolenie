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
    Jeden obiektJ;
    Jeden *wsk = &obiektJ;
    Dwa obiektD;

    cout<<"Przed przypisaniem (randomowa wartosc): "<<obiektJ.x<<endl;
    cout<<"Przed przypisaniem (wskaznikiem wsk->): "<<wsk->x<<endl;

    obiektD.podajx(obiektJ, 10);

    cout<<"Pierwsze przypisanie: "<<obiektJ.x<<endl;
    cout<<"Pierwsze przypisanie (wskaznikiem wsk->): "<<wsk->x<<endl;

    obiektD.podajx(obiektJ, 11);

    cout<<"Drugie przypisanie: "<<obiektJ.x<<endl;
    cout<<"Drugie przypisanie (wskaznikiem wsk->): "<<wsk->x<<endl;

    return 0;
}
