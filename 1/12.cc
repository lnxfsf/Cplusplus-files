//Kreirati klasu Knjiga koja će imati kao podatak član pokazivač na cijeli broj koji
//predstavlja broj stranica. Za datu klasu izvršiti preklapanje operatora =.



#include<iostream.h>
#include<conio.h>

class Knjiga{
	private:
		int *br_strana;
	public:
		Knjiga(){br_strana=0;}
		Knjiga(int);
		Knjiga(const Knjiga&);
		~Knjiga();
		Knjiga & operator=(const Knjiga&);
		void dodaj_strane(int a){*br_strana+=a;}
		void ocitavanje(){cout<<"Knjiga ima "<<*br_strana<<" stranica"<<endl;}
};

Knjiga::Knjiga(int br){
	br_strana=new int;
	*br_strana=br;
}


Knjiga::Knjiga(const Knjiga & stara){
	br_strana=new int;
	*br_strana=*stara.br_strana;
}


Knjiga::~Knjiga(){
	delete br_strana;
	br_strana=0;
}


Knjiga &Knjiga::operator=(const Knjiga & a){
	if(this!=&a) {//provjera da li je dodjela a=a;
	delete br_strana;
	br_strana=new int;
	*br_strana=*a.br_strana;
}
	return *this;
}


main(){
Knjiga k1;

cout<<"Unesi broj stranica"<<endl;

int n;
cin>>n;

Knjiga k2(n);
Knjiga k3=k2; //Poziva se konstruktor kopije;
	      
k1=k2;//Vrsi se operacija dodjeljivanja-poziva se operator dodjeljivanja.
      
k1.ocitavanje();
k3.dodaj_strane(5);
k2.ocitavanje();
k3.ocitavanje();

getch();
}
