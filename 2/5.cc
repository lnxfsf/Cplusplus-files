#include <iostream>
using namespace std;
int main ()
{
	int a = 1;
	int b = 2;
	int c = !(a > b || a < b/2) ? a++ : ++b;
	cout << "a:" << a << endl;
	cout << "b:" << b << endl;
	cout << "c:" << c << endl;
	cin.get();
	return 0;
}