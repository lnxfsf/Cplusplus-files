#include <iostream>
using namespace std;
int main ()
{
char a = 0x0F;  //015
double b = 4.5;
bool c = (a == 14);  //false , false je takodje i 0. iako on izbacuje u terminal 0. ti zapisi false ! ali da je int ! onda bi stavio da je to 0 ! jer je 0 isto sto i false, a 1 isto sto i true
int d = c ? b/2 : sizeof(a); // 'c' će biti 'false', time izvrsi ovaj drugi sekvencu , a sizeof() ce samo proveriti veličinu varijable ! tj. njegov tip. INT ce biti 4 bajta !
			     
// prebacuje 'a' u int
cout << "a:" << int(a) << endl;
cout << "b:" << b << endl;
cout << "c:" << c << endl; 
cout << "d:" << d << endl;
cin.get();
return 0;
}
