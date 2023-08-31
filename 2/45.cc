#include <iostream>
using namespace std;


class Radnik{
	private:
		int Koef;
		int *IDBroj;
		static int Broj;

	public:
		Radnik(){IDBroj = 0; Broj++;}
		Radnik(int,int);
		Radnik(const Radnik &);
	
		~Radnik();

		int DajKoef() const { return Koef; }
		int DajIDBroj() const { return *IDBroj; }

		void PromijeniKoef(int);
		void PromijeniIDBroj(int);
		int VisePlacen(Radnik);

		static int DajBroj(int x){ 
			Broj += x;
			return Broj;
		}
};


Radnik::Radnik(int k, int id){
	Koef = k;
	IDBroj = new int(id);
	Broj++;
}

Radnik::Radnik(const Radnik & r){
	Koef = r.Koef;
	IDBroj = new int;
	*IDBroj = *r.IDBroj;
	Broj++;
}


Radnik::~Radnik(){
	delete IDBroj;
	IDBroj = 0;
	Broj--;
}


void Radnik::PromijeniKoef(int k){
	Koef = k;
}

void Radnik::PromijeniIDBroj(int id){
	*IDBroj = id;
}

int Radnik::VisePlacen(Radnik r){
	if(Koef > r.Koef){
		return *IDBroj;
	}else{ 
		return *r.IDBroj;
	}
}

//inicijalno podesavanje static člana
int Radnik::Broj=0;

int main (){

	Radnik *r1 = new Radnik(7,7689);
	Radnik *r2 = new Radnik(5,5739);

	cout<<"Ukupno radnika: "<< Radnik::DajBroj(3)   <<endl; 

	delete r1;
	delete r2;


	system("PAUSE");
	return 0;

}
