/*  Šta će biti ispisano na ekranu nakon izvršenja datog koda?*/

//  a)


#include <iostream>
using namespace std;
double f(double a, double b=1.1, double c=5.4)
{
	return a+b+c;
}


int f(int a=1, int b=2)
{
	return a+b;
}

int main()
{
	float c = f(); //ide prvi, i biće, c=3 , ne neće biti 3.0 !
cout<<c;
cin.get();
return 0;
}




