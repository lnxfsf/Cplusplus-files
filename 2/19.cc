/* Šta će biti ispisano na ekranu nakon izvršenja datog koda?*/


//  a)

#include <iostream>
using namespace std;
int main()
{
char *p;
char q[] = "Knjiga";

p = q;

p[1]='N'; //KNjiga

cout<<"1niz karaktera q: "<<q; //KNAJga

cout<<"1vrijednost na koju pokazuje p: "<<*p<<endl; //J
cout<<"1niz karaktera q: "<<q; //KNAJga


p+=2;
cout<<"2vrijednost na koju pokazuje p: "<<*p<<endl; //J
cout<<"2niz karaktera q: "<<q; //KNAJga


*p++='J'; 
cout<<"3vrijednost na koju pokazuje p: "<<*p<<endl; //J
cout<<"3niz karaktera q: "<<q; //KNAJga

*(p+2)='A'; 
cout<<"-vrijednost na koju pokazuje p: "<<*p<<endl; //J
cout<<"- niz karaktera q: "<<q; //KNAJga
cin.get();
return 0;
}





















