/*

Statički podatak član proglasiti privatnim. 
Implementirati statičku funkciju članicu DajBroj koja vraća vrijednsot statičkog podatka člana. 
U okviru funkcije main testirati funkciju DajBroj. 
Da li funkcija DajBroj mora biti statička? (da, izgleda da i funkcija treba biti staticka, da se ne gubi vrednost)


*/



#include <iostream>
using namespace std;

class Radnik{
	private:
		int Koef;
		int *IDBroj; 
		static int Broj;  
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
		//čitanje ID broja (jer su podaci privatni)
		int DajIDBroj() const {
			return *IDBroj; 
		}
		
		//ovo je za promjenu
		void PromijeniKoef(int);
		//ovo je za promjenu
		void PromijeniIDBroj(int);
		
		int VisePlacen(Radnik);
		
		static int DajBroj(){ 
		
			return Broj;  
		
		}

};


 //parametizovan konstruktor
Radnik::Radnik(int k, int id){
	Koef=k; 
	IDBroj = new int(id); 

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

//ovo je za promjenu
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

	//malo drugaciji pristup
	Radnik *r1 = new Radnik(7,7689);
	Radnik *r2 = new Radnik(5,5739);

	cout<<"Ukupno radnika: " << r1->DajBroj() << endl;  //posto je pointer, da pristupi clanu (tj. funkciji) zato moras koristiti ->

	delete r1;
	delete r2;	//i oslobodis memoriju

	return 0;


}



