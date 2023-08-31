#include <iostream>
using namespace std;
int main ()
{
int a = 0xB;  // ovo je decimalno 11
int b = 2.75; 
bool c = (a != b) ; //true
int c1 = c ; 
int d = c ? (a>>2) : b+=2; 

cout << "a:" << a << endl; 
cout << "b:" << b << endl;
cout << "c:" << c << endl;
cout << "c1:" << c1 << endl;
cout << "d:" << d << endl;


cout << "a:" << a << endl; 
cin.get();
return 0;
}
