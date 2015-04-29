#include <iostream>

using namespace std;



class Plotno{
private:
    int wysokosc;
    int szerokosc;
    char ** tab;
public:

    Plotno(int wys,int szer)
    {
        wysokosc = wys;
        szerokosc = szer;
        tab = new char*[szerokosc];
        for(int i=0;i<szerokosc;i++)
        {
            tab[i] = new char[wysokosc];
            for(int j=0; j<wysokosc; j++)
            {
                tab[i][j] = '.';
            }
        }

    }
    Plotno(const Plotno &pl)        //konstruktor kop.
    {
         wysokosc = pl.wysokosc;
            szerokosc = pl.szerokosc;

            tab = new char*[this->szerokosc];
            for(int i=0;i<this->szerokosc;i++)
            {
                tab[i] = new char[this->wysokosc];
                for(int j=0; j<this->wysokosc; j++)
                {
                    tab[i][j] = pl.tab[i][j];
                }
            }
    }
    Plotno & operator=(const Plotno &pl) //przec. operatora
    {
         if(this != &pl)
         {
            this->niszczyciel();

        //(this->szerokosc==pl.szerokosc && this->wysokosc==pl.wysokosc) do zrobenia, zeby nie kasowac pamieci, ktora moze byc wykorzystana

            wysokosc = pl.wysokosc;
            szerokosc = pl.szerokosc;
            tab = new char*[this->szerokosc];
            for(int i=0;i<this->szerokosc;i++)
            {
                tab[i] = new char[this->wysokosc];
                for(int j=0; j<this->wysokosc; j++)
                {
                    tab[i][j] = pl.tab[i][j];
                }
            }

         }

        return *this;
    }

    void niszczyciel()
    {
        for(int i=0; i<szerokosc;i++)
        {
            delete[] tab[i];
        }
        delete [] tab;
    }

    ~Plotno()
    {
        niszczyciel();
    }

    void wyswietl()
    {
        for(int i=0; i<szerokosc; i++)
        {
            for(int j=0;j<wysokosc;j++)
            {
                cout<<tab[i][j];
            }
            cout<<endl;
        }
    }

void rysujProstokat(int a, int b)
{
    for(int i=0;i<szerokosc;i++)
    {
        for(int j=0;j<wysokosc;j++)
        {
           if(i<a && j<b)
           {
              tab[i][j] = 'X';
           }

        }

    }
}

};
int main()
{


// krok 1
  Plotno p(20, 10);
  p.rysujProstokat(10,2);
  p.wyswietl();
  cout<<endl;
  Plotno p1(1,1);
  p1 = p;
    p1.wyswietl();
    cout<<endl;
    p.rysujProstokat(2,10);
    cout<<endl<<endl;
    p1.wyswietl();
    cout<<endl;
    Plotno p2(p);
    p2.wyswietl();

/*
// krok 2
  Plotno kopia = p;
  p.rysujKolo(40,12, 6,6);

  p.wyswietl();
  kopia.wyswietl();
*/

/*
// krok 3
  p = kopia;
  p.wyswietl();
*/

/*
  Plotno male(10,10);
  male = p;
  male.wyswietl();
*/

/*
// dla chetnych
  if (p == kopia)
  {
    std::cout << "takie same" << std::endl;
  }
  else
  {
    std::cout << "sa rozncie" << std::endl;
  }
*/


    return 0;
}
