/* Realizovati klasu Vektor koja predstavlja dvodimenzionalne vektore. 
Klasa ima dva privatna podatka člana: jedan za x koordinatu i drugi za y koordinatu. 
Klasa sadrži odgovarajuće konstruktore (i konstruktor kopije) i destruktor, kao i funkciju članicu Citaj koja ispisuje na ekranu koordinate vektora. 
U okviru funkcije main deklarisati objekat v1 klase Vektor i inicijalizovati ga upotrebom konstruktora. 
Pozvati funkciju Citaj za objekat v1.

*/



#include <iostream>
using namespace std;

class Vektor{
	private:
		int x,y;
	public:
		Vektor():x(0),y(0){}
		Vektor(int a, int b):x(a),y(b){}
		Vektor(const Vektor &v){ x=v.x; y=v.y; } 
		~Vektor(){}
		void Citaj();
	
	
	


};




void Vektor::Citaj(){
	cout << " (" << x << "," << y << ")" << endl;

}


int main(){
	
	Vektor v1(1,2);
	v1.Citaj();
	return 1;


}










