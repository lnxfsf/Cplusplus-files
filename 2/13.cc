// Šta će biti ispisano na ekranu nakon izvršenja datog koda?

// a)
/*
#include <iostream>
using namespace std;
double f(double a=1.1, double b=5.4) 
{
	return a+b;
}

int f(int a=1, int b=2)
{
return a+b;
}

int main()
{

int c = f(1.3); //ovo je, samo prvi će biti, tj, a=1.3 . to je: 1.3+5.4=6.7
cout << c;
cin.get();
return 0;
// 6.7, ali posto c je int, bude 6 

}
*/

//b)

#include <iostream>
using namespace std;
void f_r(double &a)
{
a *= 0.5; //menja ga direktno, kao referenca , i bude, d=5.05
}

void f_v(double a)
{
a *= 0.5;
}

int main()
{

double d = 10.10;
f_r(d); //10.10 
cout<<d<<endl; //5.05
f_v(d);
cout<<d<<endl; //5.05 , isti je i dalje
cin.get();
return 0;
}








