#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

struct Osoba{
    char login[50];
    char imie[50];
    char nazwisko[50];
    char dzial[50];
};

int main()
{

    ifstream input("plik.txt");
    char napis[50];
    int liczba;
    input>>liczba;


    Osoba * os = new Osoba[liczba];
    for(int i=0;i<14;i++)



    return 0;
}
