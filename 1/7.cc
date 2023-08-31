//Realizovati klasu radnici koja će imati tri podatka člana i to: cjelobrojnu promjenjivu za
//kofecijent za platu, pokazivač na cjelobrojnu promjenjivu za identifikacioni broj radnika i
//javnu statičku promjenjivu koja će služiti za brojanje ukupnog broja radnika (objekata
//date klase). Klasa posjeduje konstruktor, destruktor i konstruktor kopije, kao i funkcije
//članice za pristup podacima radi očitavanja i izmjene i funkciju koja računa koji od dva
//radnika ima veću platu i vraća identifikacioni broj istog.


#include<iostream.h>
#include<conio.h>

class radnici{
	private:
		int koeficijent;
		int *idbroj;
	public:
		radnici(){idbroj=0; broj++;}
		radnici(int,int);
		radnici(const radnici&);
		~radnici();

		int daj_koef()const{return koeficijent;}
		int daj_idbroj()const{return *idbroj;}
		void promijeni_koef(int);
		void promijeni_idbroj(int);
		int placeniji(radnici);
		static int broj;
};


radnici::radnici(int koef, int idb):koeficijent(koef){
	idbroj=new int;
	*idbroj=idb;
	broj=broj+1;
}


radnici::radnici(const radnici& stari):koeficijent(stari.koeficijent){
	idbroj=new int;
	*idbroj=*stari.idbroj;
	broj=broj+1;
}


radnici::~radnici(){
	delete idbroj;
	idbroj=0;
	broj=broj-1;
}


void radnici::promijeni_koef(int a){
	koeficijent=a;
}

void radnici::promijeni_idbroj(int a){
	*idbroj=a;
}


int radnici::placeniji(radnici a){
	if(koeficijent>=a.koeficijent)
		return *idbroj;
	else
		return *a.idbroj;
}


int radnici::broj=0;



main(){

int a,b;


cout<<"Unesete podatke za dva radnika"<<endl;
cin>>a>>b;

radnici a1(a,b);

cin>>a>>b;

radnici a2(a,b);

cout<<"Vise je placen radnik: "<<a1.placeniji(a2)<<endl;
cout<<"Ukupno imamo "<<radnici::broj<<" radnika"<<endl;


getch();
}
