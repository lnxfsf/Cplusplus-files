/* 
Pri inicijalizaciji objekta k2 poziva se konstruktor kopije koji je definisan u okviru definicije klase.

Prikazati dužinu stranice kvadrata k1 koristeći odgovarajuću pristupnu metodu (koja je proglašena za konstantnu metodu klase Kvadrat). 

Da li je moguće konstantnom objektu pristupiti koristeći funkciju članicu koja nije konstantna?
//Nije. Konstantnom objektu može pristupiti samo funkcija članica koja je konstantna.


*/



#include <iostream>
using namespace std;

class Kvadrat{
	private:
		int a;
		static int BrojKvadrata;
	public:
		Kvadrat():a(1){
			BrojKvadrata++;
		}
		
		Kvadrat(int x):a(x){
			BrojKvadrata++;
		}
		
		Kvadrat(const Kvadrat & k){
			a = k.a;
			BrojKvadrata++;
		}

		~Kvadrat(){
			cout << "unisten sam" << endl;
			BrojKvadrata--;
		}
		
		int GetA() const{
			return a;
		}
		
		static int GetBroj(){
			return BrojKvadrata;
		}
};


int Kvadrat::BrojKvadrata=0;


int main()
{
	const Kvadrat k2;  //objekat je konstantan
	
	cout<< "a=" << k2.GetA() << " mm"<< endl;

	return 0;
}










