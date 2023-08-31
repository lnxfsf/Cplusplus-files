/* Realizovati klasu Kvadrat koja sadrži jedan privatni podatak član - dužinu stranice kvadrata u milimetrima. 

Implementirati konstruktor bez argumenata koji inicijalizuje dužinu stranice na 1, kao i konstruktor koji ima jedan argument i inicijalizuje dužinu stranice kvadrata na tu vrijednost. 

Kreirati odgovarajući destruktor koji ispisuje poruku ′′unisten sam′′. 

U okviru funkcije main deklarisati dva objekta klase Kvadrat - k1 i k2 i inicijalizovati stranicu kvadrata k1 na vrijednost koju korisnik unosi iz konzolne linije. 

Inicijalizovati objekat k2 na vrijednost objekta k1 (Kvadrat k2(k1);). 

Koji konstruktor se poziva pri inicijalizaciji objekta k2? 
Prikazati dužine stranica kvadrata k1 i k2 u konzolnoj liniji koristeći odgovarajuću pristupnu metodu.*/





#include <iostream>
using namespace std;

class Kvadrat{
	private:
		int a;
	public:
		Kvadrat():a(1){}
		Kvadrat(int x):a(x){}
		~Kvadrat(){
			cout << "unisten sam " << endl;
		}
		int GetA() const {
			return a;
		}
		


};



int main(){
	int a;
	
	cout << "unesi duzinu stranice kvadrata [mm]: " << endl;
	cin >> a;
	
	Kvadrat k1(a), k2(k1);	
	
	cout<<"k1: a="<< k1.GetA() << " mm; k2: a="<< k2.GetA() << " mm" << endl;

	return 0;
	
	
}














