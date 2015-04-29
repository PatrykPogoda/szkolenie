#include <iostream>
#include <cmath>

using namespace std;
const int x=20,y=20,z=17;
char tab[x][y];

struct Plotno{
  char tab[20][20]; // maksymalny rozmiar plotna to 20x20
};

void pr()
{
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<y;j++)
        {
           if(i<3 && j<4)
           {
              tab[i][j] = 'X';
           }

        }

    }
}
void tr()
{
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<y;j++)
        {
            if(j<=(i-z))
            tab[i][j] = 'Y';

        }

    }

}


void rysTab(char a='.') //wype³nia '.' je¿eli nie podane zostanie inaczej: rysTab();
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
}

int main()
{
    for(int i=0; i<x; i++)
    {
        for(int j=0; j<y; j++)
        {
            tab[i][j]=0;
        }
    }
    rysTab();
    char a;
    cout<<"Podaj znak: ";
    cin>>a;
        tr();
        pr();
        //kolo();
        rysTab(a);
    return 0;
}
