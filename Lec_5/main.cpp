#include <iostream>
#include "Prost.h"
using namespace std;
void skalowanie(Prost &p, float wartosc)
{

    p.x = p.x*wartosc;
    p.y = p.y*wartosc;

}
bool por(const Prost &p, const Prost &p1)
{
    if(p.x == p1.x || p.x == p1.y)
    {
        if(p.y == p1.y || p.y == p1.x)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    Prost p;
    p.x = 10;
    p.y = 20;
    cout<<p.pole()<<endl;
    cout<<p.obwod()<<endl;

    cout<<"Skalowanie!"<<endl;
    skalowanie(p,2);

    cout<<p.pole()<<endl;
    cout<<p.obwod()<<endl;

    cout<<endl;
    return 0;
}
