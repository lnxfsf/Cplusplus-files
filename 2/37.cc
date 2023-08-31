/*

Realizovati klasu Radnik koja ima tri podatka člana i to: cjelobrojnu promjenljivu za koeficijent za platu, pokazivač na cjelobrojnu promjenljivu za identifikacioni broj radnika i javnu statičku promjenljivu koja služi za brojanje ukupnog broja radnika (objekata date klase). 

Klasa posjeduje odgovarajuće konstruktore, destruktor i konstruktor kopije, kao i funkcije članice za pristup podacima radi očitavanja i izmjene i funkciju VisePlacen koja računa koji od dva radnika ima veću platu i vraća identifikacioni broj istog. 

U okviru funkcije main deklarisati dva objekta klase Radnik - r1 i r2. 

Objekte inicijalizovati upotrebom konstruktora podacima (koeficijent za platu i identifikacioni broj) koje korisnik unosi iz konzolne linije. 

Pozivati funkciju VisePlacen za objekte r1 i r2. 

Prikazati vrijednost statičkog podatka člana direktnim pozivom preko imena klase. 
Koja od funkcija članica klase može da bude konstantna? Šta to znači?   


*/



#include <iostream>
using namespace std;

class Radnik{
	private:
		int Koef;
		int *IDBroj; 
	public:
		Radnik(){
		
		IDBroj=0;  
		Broj++;  
		
		} 
		
		Radnik(int,int); //parametizovan konstruktor
		
		Radnik(const Radnik &);  
		~Radnik(); //desktruktor
		
		int DajKoef() const {
			return Koef; 
		}

		int DajIDBroj() const {
			return *IDBroj; 
		}
		
		void PromijeniKoef(int);

		void PromijeniIDBroj(int);
		
		int VisePlacen(Radnik);
		
		static int Broj; 

};


 //parametizovan konstruktor
Radnik::Radnik(int k, int id){
	Koef=k; 
	IDBroj = new int(id); 
	Broj++; 

}

//konstruktor kopije
Radnik::Radnik(const Radnik &r){
	Koef=r.Koef;
	IDBroj=new int;
	*IDBroj=*r.IDBroj;
	Broj++;

}

//desktruktor
Radnik::~Radnik(){
	delete IDBroj; //brise pointer
	IDBroj=0; //postavlja vrednost na 0, tog objekta
	Broj--; //i smanji broj radnika

}

//ovo je za promjenu koeficijenta (plate verovatno)
void Radnik::PromijeniKoef(int k){
	Koef=k;

}

//ovo je za promjenu
void Radnik::PromijeniIDBroj(int id){
	*IDBroj=id;

}

//ko je vise placen radnik
int Radnik::VisePlacen (Radnik r){
	if(Koef > r.Koef){
		return *IDBroj;
	}else{
		return *r.IDBroj; 
	}


}

int Radnik::Broj=0; 


int main(){
	int k,id; //privremene promenjive za unos
	
	//1 radnik
	cout<<"Unesite koef. za platu: "; //kolka mu je plata
	cin >> k;
	cout<<"Unesite ID broj: "; //ID broj
	cin >> id;
	
	Radnik r1(k,id); 

	//2 radnik
	cout<<"Unesite koef. za platu: "; //kolka mu je plata
	cin>>k;
	cout<<"Unesite ID broj: "; //ID broj
	cin>>id;

	Radnik r2(k,id);
	
	
	cout<<"ID broj vise placenog radnika: "<< r1.VisePlacen(r2) << endl; 
	
	cout<<"Ukupno radnika: " << Radnik::Broj  <<endl; 
	
	return 0;


}



