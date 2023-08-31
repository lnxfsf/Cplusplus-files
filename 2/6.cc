
#include <iostream>
using namespace std;
int main ()
{
int a = 1;
double b = 2.75;

// a<<1 znaci da pomeri u levo bite. ako je 1 bitno 001 , onda ce ulevo biti  010 time je to 2 sada. i 2.75*2=5.5 , i onda 2.75+5.5=8.25 
double c = b + b * (a << 1);
//ovo ce biti 8 , jer, je INT tipa ! 
int d = c;
cout << "a:" << a << endl;
cout << "b:" << b << endl;
cout << "c:" << c << endl;
cout << "d:" << d << endl;
cin.get();
return 0;
}
