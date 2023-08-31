/*  Implementirati javnu funkciju članicu Povrsina klase Kvadrat koja računa površinu kvadrata. 
U okviru funkcije main deklarisati pokazivač na objekat klase Kvadrat, dinamički alocirati potrebnu memoriju i inicijalizovati stranicu kvadrata na vrijednost koju korisnik unosi iz konzolne linije. 
Izračunati površinu kvadrata pozivom funkcije članice i rezultat prikazati u konzoli. 
Dinamički dealocirati memoriju koju zauzima objekat klase Kvadrat.  */




#include <iostream>
using namespace std;

class Kvadrat{
	private:
		int a;
	public:
		Kvadrat():a(1){}
		Kvadrat(int x):a(x){}
		~Kvadrat(){cout<<"unisten sam"<<endl;}
		int GetA(){return a;}
		int Povrsina();


};

int Kvadrat::Povrsina(){

	return a*a;
}

int main()
{
int a;
cout<<"Duzina stranice [mm]:"<<endl;
cin>>a;

Kvadrat *k = new Kvadrat(a); //dinamička alokacija, novi objekat, koji ima duzinu stranice koja je unesena od korisnika

cout<<"P="<<k->Povrsina()<<" mm2"<<endl; 

delete k; 

system("PAUSE");
return 0;
}








