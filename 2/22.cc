/*Realizovati klasu Kvadrat koja ima jedan javni podatak član - dužinu stranice kvadrata u milimetrima. 
U okviru funkcije main deklarisati objekat tipa Kvadrat i zadati dužinu stranice kvadrata 5. 
U konzoli prikazati dužinu stranice kvadrata. */



#include <iostream>
using namespace std;

class Kvadrat{

	public:
		int a;

};

int main(){

	Kvadrat k;
	k.a=5;
	cout << "a=" << k.a << " mm" << endl;
	return 0;


}





