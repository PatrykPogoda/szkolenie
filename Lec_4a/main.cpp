#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
ifstream input("plik.txt");
struct Osoba{
    char login[50];
    char imie[50];
    char nazwisko[50];
    char dzial[50];
};
void zapisz_osobe(Osoba *o)
{

        input>>o->login;
        input>>o->imie;
        input>>o->nazwisko;
        input>>o->dzial;


}
void wyp_os(Osoba *o, int liczba)
{

    for(int i=0; i<liczba; i++)
    {
        cout<<o[i].login<<" ";
        cout<<o[i].imie<<" ";
        cout<<o[i].nazwisko<<" ";
        cout<<o[i].dzial<<endl;
    }
}
const Osoba* getByLogin(const Osoba* o, const int liczba, const char * login)
{
    for(int i=0;i<liczba;i++)
    {
        if(strcmp(o[i].login, login)==0)
        {
            return &o[i];
        }
    }
    return NULL;
}
void showAllByName(const Osoba* o, const int liczba, const char * imie)
{
    for(int i=0;i<liczba;i++)
    {
        if(strcmp(o[i].imie, imie)==0)
        {
            cout<<o[i].login<<" ";
            cout<<o[i].imie<<" ";
            cout<<o[i].nazwisko<<" ";
            cout<<o[i].dzial<<endl;
        }
    }
}

int main()
{

    //char napis[50];
    int liczba;
    input>>liczba;
    //input>>napis;
    Osoba * os = new Osoba[liczba];

    for(int i=0; i<liczba; i++)
    {
       zapisz_osobe(os+i);
    }
   wyp_os(os, liczba);
   cout<<endl;
   cout<<getByLogin(os,liczba,"PPOG")->imie<<endl<<endl;

   cout<<"Wszyscy o tym samym imieniu:"<<endl;
   showAllByName(os,liczba,"Anna");







    return 0;
}
