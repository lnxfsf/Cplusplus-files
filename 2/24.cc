/* Implementirati konstruktor koji ima jedan argument i inicijalizuje dužinu stranice kvadrata na tu vrijednost. 
Kreirati odgovarajući destruktor. 
U okviru funkcije main deklarisati objekat klase Kvadrat (Kvadrat k;). 
Objasniti.*/


#include <iostream>
using namespace std;


class Kvadrat{
	private:
		int a;
	public:

		Kvadrat(){a=0;}
		Kvadrat(int x):a(x){} 

		/*
		Kvadrat(int x){
			a=x;
		}
		*/
		/*
		Kvadrat(int x){
			a(x);  
		}
		*/
		
		int ret(){
			return a;
		}
		
		~Kvadrat(){} //ovo je default desktruktor !
};


int main(){
	Kvadrat k(3);
	cout << k.ret() << endl;



	Kvadrat r;
	cout << r.ret() << endl;



	return 0;


}


/*  - Nije implementiran
konstruktor bez argumenata. Ukoliko nije implementiran nijedan konstruktor, kompajler sam kreira tzv.
podrazumijevani (default) konstruktor bez argumenata. Međutim, ukoliko je implementiran bilo kakav
konstruktor, kompajler neće sam kreirati konstruktor bez argumenata i potrebno ga je kreirati.  */






