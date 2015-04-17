#include <iostream>
using std::cout;
using std::endl;


struct Plotno{
  ...
  char tab[20][20]; // maksymalny rozmiar plotna to 20x20
};

int main()
{
  Plotno p;
  stworzPlotno(p, 10, 10, '.'); //tworzy plotno o wymiarach 10 na 20 i wypelnia je '.'
                                //Funkcja powinna nie pozwolic na stworzenie wiekszego plotna niz 20x20
                                
  wyswietlPlotno(&p); //wyswietla plotno na ekran. W przypadku NULL komunikuje o bledzie.
  
  rysujProstokat(p, 4, 4, 2, 3, 'p');
  wyswietlPlotno(&p);
  
  rysujTrojkat(p, 4, 4, 2, 'A');
  wyswietlPlotno(&p);  
  
  
  Plotno p2;
  kopiujPlotno(p2, p); //Kopiuje rysunek i jego wymiary z plotna p do p2
  wyswietlPlotno(&p2);
  
  Plotno p_kolo;
  stworzPlotno(p_kolo, 20, 20, '.');
  rysujKolo(p_kolo, 2, 18, 5, 'O');
  wyswietlPlotno(&p_kolo);
  
  return 0;
}
