#ifndef ULAMEK_H
#define ULAMEK_H

class Ulamek{
public:
    int licznik;
    int mianownik;
int wspMian(int a,int b) const;
Ulamek(int lic, int mian);
Ulamek dodawanie(const Ulamek &b) const;  //drugi const dotyczy obiektu na ktorym wywolywana jest metoda - nie mozna go zmienic)

Ulamek odejmowanie(Ulamek b);

Ulamek operator+(const Ulamek &ul) const;


};
#endif // ULAMEK_H
