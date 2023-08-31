//1. Realizovati klasu TACKA3D koja kao privatne podatne članove ima koordinate x,y
//Klasa Sadrži
// Konstruktor bez argumenata koji inicijalizuje koordinate na (0,0,0)
// Konstruktor koji ma tri argumenta i sa njihovim vrednostima inicijalizuje koordinate
// Konstruktor kopije
// Destruktor
// Metode za podešavanje vrednosti koordinata x,y,z (Set X,Set Y,Set Z),
// Metode koje vracaju vrednosti koordinata x,y,z (Get X,Get Y,Get Z),
//Realizovati funkciju clanicu Intezitet koja racuna rastojanje od tekuce tacke do tacke koja predstavlja
//pocetnu tacku koordinatnog sistema.
//Za klasu Tacka3D preklopiti operator prefiksnog inkrementiranja koji sve tri koordinate uvecava za
//jedan.
//U okviru funkcije main :
//
//
//
//
//Deklarisati pokazivac na objekat klase Tacka3D – t1 i pomocu odgovarajuceg konstruktora
//inicijalizovati koordinate tacke na (4,5,6).
//Deklarisati objekat t2 klase Tacka3D i pomocu odgovarajucih pristupnih metoda podesiti
//njegove koordinate na (5,6,7)
//Pozivom funkcije Intezitet izracunati intezitete tacaka t1 i t2 i vecu vrednost prikazati na
//ekranu
//Izvršiti testiranje operatora prefiksnog inkrementiranja za objekat na koji pokazuje t1
//
//
//
//
//
//
#include<iostream>
#include<math.h>
using namespace std;

class Tacka3D{

	private: 
		int x,y,z;
	public:
		Tacka3D() : x(0), y(0), z(0) {}
		Tacka3D(int a, int b, int c) {x=a; y=b; z=c;}
		Tacka3D(const Tacka3D & t) {x=t.x; y=t.y; z=t.z;}
		~Tacka3D(){}

		int GetX() const {return x;} 
		int GetY() const {return y;}
		int GetZ() const {return z;}

		void SetX(int t){x=t;}
		void SetY(int t){y=t;}
		void SetZ(int t){z=t;}

		double Intenzitet(Tacka3D);

		Tacka3D operator++();

};


double Tacka3D::Intenzitet(Tacka3D k){
	return sqrt(pow(k.x,2.0)+pow(k.y,2.0)+pow(k.z,2.0));
}


Tacka3D Tacka3D::operator++(){
	++x;
	++y;
	++z;

	return *this;  //ovo je prefiksno inkrementiranje. ali samo jednog (ovog) objekta. 

}


int main(){

	Tacka3D *t1=new Tacka3D(4,5,6);
	Tacka3D t2;

	t2.SetX(5);
	t2.SetY(6);
	t2.SetZ(7);

	cout << "Vrijednost prve tacke je: "<<t1->Intenzitet(*t1)<<endl;
	cout << "Vrijednost druge tacke je: "<<t2.Intenzitet(t2)<<endl;

	(t1->Intenzitet(*t1) > t2.Intenzitet(t2)) ? cout << "Prva je veca.\n" : cout << "Druga je veca.\n";

	
	++(*t1);

	cout << "Test operatora++ " << endl << "t2= " << t2.GetX() << "," << t2.GetY() << "," << t2.GetZ() << endl;

	system("PAUSE");
	return 0;

}
