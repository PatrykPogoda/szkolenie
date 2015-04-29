#include "Ulamek.h"


Ulamek::Ulamek(int lic, int mian)
{
    licznik = lic;
    mianownik = mian;
}
int Ulamek::wspMian(int a,int b) const
{
    if(a*b !=0)
    {
        return a*b;
    }
    return 1;
}

Ulamek Ulamek::dodawanie(const Ulamek &b) const
{
    int mianownik_tmp = 0;
    int licznik_tmp = 0;
    mianownik_tmp = wspMian(mianownik, b.mianownik);
    licznik_tmp = ((licznik*b.mianownik)+(b.licznik*mianownik));
    return Ulamek (licznik_tmp, mianownik_tmp);
}

Ulamek Ulamek::operator+(const Ulamek &b) const
{
    int mianownik_tmp = 0;
    int licznik_tmp = 0;
    mianownik_tmp = wspMian(mianownik, b.mianownik);
    licznik_tmp = ((licznik*b.mianownik)+(b.licznik*mianownik));
    return Ulamek (licznik_tmp, mianownik_tmp);
}

Ulamek Ulamek::odejmowanie(Ulamek b)
{
    int licznik_tmp = 0;
    int mianownik_tmp = mianownik;
    mianownik_tmp = wspMian(mianownik, b.mianownik);
    licznik_tmp = ((licznik*b.mianownik)-(b.licznik*mianownik));

    return Ulamek (licznik_tmp, mianownik_tmp);
}
