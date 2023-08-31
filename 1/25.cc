//3.Realizovati klasu Vektor2D koja kao privatne podatke članove ima koordinate x i y.
//Klasa sadrži :
//
//
//
//
//
//
//
//Konstruktor bez argumenata koji inicijalizuje koordinate na (4,4)
//Konstruktor koji ima dva argumenta i sa njihovim vrednostima inicijalizuje koordinate
//Konstruktor kopije
//Destruktor
//Metode za podešavanje vrednosti koordinata x i y
//(SetX,Set Y)
//Metode koje vracaju vrednosti koordinata x i y (Get X i Get Y)
//Realizovati funkciju clanicu Intezitet koja racuna intezitet vektora
//Za klasu Vektor2D preklopiti operator oduzimanja koji oduzima dva vektora klase Vektor3D
//
//
//
//
//U okviru funkcije main :
//Deklarisati pokazivac na objekat klase Vektor2D – v1 i pomocu odgovarajuceg konstruktora
//inicijalizovati koordinate tacke (4,5)
//Deklarisati objekat v2 klase Vektor2D i pomocu odgovarajucih pristupnih metoda podesiti
//njegove koordinate na (6,7)
//Deklarisati objekat v3 klase Vektor2D i inicijalizovati ga razlikom vektora v1 i v2
//Ispisati koordinate vektora v3
//
//

#include <iostream>
#include <math.h>
using namespace std;


class Vektor2D{
		private: 
			int x,y;
		public:
			Vektor2D() : x(4),y(4){}
			Vektor2D(int a, int b){x=a;y=b;}
			Vektor2D(const Vektor2D & t1){x=t1.x;y=t1.y;}
			~Vektor2D(){}

			void SetX(int t){x=t;}
			void SetY(int t){y=t;}
			int GetX()const {return x;}
			int GetY()const {return y;}

			double Intezitet(Vektor2D);

			Vektor2D operator=(const Vektor2D &);
			Vektor2D operator-(const Vektor2D &);

};


double Vektor2D::Intezitet(Vektor2D f){
	return sqrt(pow(f.x,2.0)+pow(f.y,2.0));
}

Vektor2D Vektor2D::operator=(const Vektor2D & v){
	if (this==&v){
		return *this;
	}

	x=v.x;
	y=v.y;

	return *this;

}

Vektor2D Vektor2D::operator-(const Vektor2D & v){
	Vektor2D v1;

	v1.x=x-v.x;
	v1.y=y-v.y;

	return v1;
}

main(){
	Vektor2D *v1=new Vektor2D(4,5);
	Vektor2D v2;
	Vektor2D v3;

	v2.SetX(6);
	v2.SetY(7);

	v3=(*v1)-v2;

	cout << v3.GetX() << "," << v3.GetY() << endl;
}
