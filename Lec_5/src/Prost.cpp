#include "Prost.h"
#include <iostream>
using namespace std;

Prost::Prost()
{
    cout<<"KONSTRUKTOR"<<endl<<endl;
}

Prost::~Prost()
{
    cout<<"DESTRUKTOR!"<<endl;
}
int Prost::pole()
{
    return x*y;
}
int Prost::obwod()
{
    return (2*x+2*y);
}
