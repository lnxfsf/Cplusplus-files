/* Realizovati klasu Decimalni koja predstavlja realne brojeve u zapisu sa decimalnom tačkom (npr. 23.45).
Klasa ima dva privatna podatka člana: jedan za realni broj (23.45) i drugi za cijeli dio broja (23). 
Klasa sadrži odgovarajuće konstruktore i destruktor, kao i funkciju članicu Citaj koja ispisuje na ekranu broj i njegov cijeli dio. 
U okviru funkcije main deklarisati objekat d1 klase Decimalni i inicijalizovati ga upotrebom konstruktora. 
Pozvati funkciju Citaj za objekat d1 . */


#include <iostream>
using namespace std;

class Decimalni{
	private:
		float Broj;
		int CijeliDio;
	public:
		Decimalni(){Broj=0; CijeliDio=0;}
		Decimalni(float d):Broj(d), CijeliDio(int(d)) {} 
		~Decimalni(){}
		void Citaj(){
			cout << "Broj je:" << Broj << endl << "Cijeli dio:" << CijeliDio << endl;
		}
		
	

};


int main(){
	Decimalni d1(3.45);
	d1.Citaj();
	return 1;
	



}



