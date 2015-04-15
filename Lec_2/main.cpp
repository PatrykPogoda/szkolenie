#include <iostream>

using namespace std;
int min(int a, int b)
{
    if(a<=b){
        cout<<a<<"!!!!!"<<endl;
        return a;}
    return b;
}
int max(int a, int b)
{
    if(a<=b){return b;}
    return a;
}
void swap(int &a, int &b)
{
    int z = a;
    a = b;
    b = z;
}
void sort(int *a, int *b, int *c = NULL, int *d = NULL)
{
    cout<<"Funkcja sort"<<endl;
    if()







        swap(a, b);
        cout<<"a = "<<*a<<", b = "<<*b<<endl;


}
void increment_c(int a)
{
    a++;
}
void increment_r(int &a)
{
    a++;
}
void increment_p(int *a)
{
    (*a)++;
}

int main()
{
    int a=5,b=5,c=5;
    cout<<"a = "<<a<<endl;
    increment_c(a);
    cout<<"po increment_c a = "<<a<<endl;

    cout<<"b = "<<b<<endl;
    increment_r(b);
    cout<<"po increment_r a = "<<b<<endl;

    cout<<"c = "<<c<<endl;
    increment_p(&c);
    cout<<"po increment_p c = "<<c<<endl<<endl;

    cout<<"min(5,7): "<<min(5,7)<<endl;
    cout<<"max(5,7): "<<max(5,7)<<endl;

    int x=7,y=10;
    cout<<"Przed swap x = "<<x<<" y = "<<y<<endl;
    swap(x,y);
    cout<<"Po swap x = "<<x<<", a y = "<<y<<endl;

    int q=12,p=32,r=-11,s=2;
    sort(&q,&p);
    return 0;
}
/*
int &p  -deklaracja referencji
&p - pobranie adresu zmiennej p

zadanie 1:
    int a = 5;
    int *a_ptr = &a;

    *a_ptr = 7;

    cout<<"*a_ptr = "<<*a_ptr<<", a_ptr = "<<a_ptr<<", a = "<<a<<endl;

    int & a_ref = a;
    a_ref = 10;

    cout<<"*a_ptr = "<<*a_ptr<<", a_ptr = "<<a_ptr<<", a = "<<a<<", a_ref = "<<a_ref<<endl;

*/
