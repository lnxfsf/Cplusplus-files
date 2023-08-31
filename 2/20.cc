/* Šta će biti ispisano na ekranu nakon izvršenja datog koda?*/



#include <iostream>
using namespace std;
int main()
{

int *p;
int *q = new int(5); //kreira dinamički, memorijiu za 1 int !!, tj. a direktno mu alocira da je 5 vrednost njegova !! 


p = q; //p pokazuje na q, tj. prvi int 

int &r = *p;  //promenjiva r, ima istu adresu kao pointer p, tj. adresu prvog int od q

r%=2; //ostatak od 5/2 je 1, posto to ide u r, tj. koja je direktno taj int uopste, i p je taj int, svi će biti 1


cout<<"*p = "<<*p<<endl; //1
cout<<"*q = "<<*q<<endl; // 1
cout<<"r = "<<r<<endl; //1

delete q;  //oslobađa se memorije ove


cin.get();
return 0;
}