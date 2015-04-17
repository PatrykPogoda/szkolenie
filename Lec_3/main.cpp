#include <iostream>
using namespace std;


struct Plotno{
    char tab[20][20]; // maksymalny rozmiar plotna to 20x20
    int a=0;
    int b=0;

};
void stworzPlotno(Plotno &p, int x, int y, char a)
{
    p.a=x;
    p.b=y;
    for(int i=0; i<x; i++)
    {
        for(int j=0; j<y; j++)
        {
             p.tab[i][j] = a;
        }
    }
}
void wyswietlPlotno(Plotno *p)
{
    for(int i=0; i<p->a; i++)
    {
        for(int j=0; j<p->b; j++)
        {
             cout<<p->tab[i][j];

        }
        cout<<endl;
    }
}
void rysujProstokat(Plotno &g, int p, int q, int r, int s, char a)
{
    for(int i=0;i<g.a;i++)
    {
        for(int j=0;j<g.b;j++)
        {
           if(i>=p && j>=q && i<(p+r) && j<(q+s))
           {
              g.tab[i][j] = a;
           }

        }

    }
}
void rysujTrojkat(Plotno &g, int p, int q, int r, char a)
{
    for(int i=0;i<g.a;i++)
    {
        for(int j=0;j<g.b;j++)
        {
            if(i>=p && j>=q && (j<=(i-r)))
            g.tab[i][j] = 'Y';

        }
    }
}
void kopiujPlotno(Plotno &p, Plotno &g)
{
    p = g;
}

int main()
{
    Plotno p;
    stworzPlotno(p, 10, 10, '.');
    wyswietlPlotno(&p);
    cout<<endl;
    rysujProstokat(p, 4, 4, 2, 3, 'p');
    wyswietlPlotno(&p);
    cout<<endl;
    rysujTrojkat(p, 4, 4, 2, 'A');
    wyswietlPlotno(&p);
    cout<<endl;
    Plotno p2;
    kopiujPlotno(p2, p); //Kopiuje rysunek i jego wymiary z plotna p do p2
    wyswietlPlotno(&p2);

    return 0;
}

/*\void zeroP(int x, int y){
    for(int i=0; i<x; i++)
    {
        for(int j=0; j<y; j++)
        {
            tab[i][j]=0;
        }
    }

}
void rysTab(int x, int y) //wype³nia '.' je¿eli nie podane zostanie inaczej: rysTab();
{

   for(int i=0; i<x; i++)
    {
        for(int j=0; j<y; j++)
        {
            if(tab[i][j]==0)
            {
              tab[i][j] = a;
            }


            cout<<tab[i][j];
        }
        cout<<endl;
    }
}*/
