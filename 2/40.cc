/* 
Implementirati konstruktor kopije. 
U okviru funkcije main deklarisati dva objekta klase Kvadrat - k1 i k2 i inicijalizovati stranicu kvadrata k1 na vrijednost koju korisnik unosi iz konzolne linije. 

Inicijalizovati objekat k2 na vrijednost objekta k1 (Kvadrat k2(k1);). 

Koji konstruktor se poziva pri inicijalizaciji objekta k2?

Prikazati dužine stranica kvadrata k1 i k2 u konzolnoj liniji koristeći odgovarajuću pristupnu metodu.


//Pri inicijalizaciji objekta k2 poziva se konstruktor kopije koji je definisan u okviru definicije klase.

*/


#include <iostream>
using namespace std;

class Kvadrat{
	private:
		int a;
	public:
		Kvadrat():a(1){}
		Kvadrat(int x):a(x){}
		Kvadrat(const Kvadrat &k){
			a = k.a;
		}
		
		~Kvadrat(){
			cout<<"unisten sam"<<endl;
		}
		
		int GetA() const{
			return a;
		}
};


int main() {
	int a;
	cout<<"Unesite duzinu stranice kvadrata [mm]:"<<endl;
	cin>>a;

	Kvadrat k1(a), k2(k1);

	cout<<"k1: a=" << k1.GetA() << " mm; k2: a=" << k2.GetA() << " mm" << endl;
		
	return 0;
}
	
	
	