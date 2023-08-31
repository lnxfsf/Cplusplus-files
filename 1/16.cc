//Implementirati klasu motocikl koja je izvedena iz klasa motorno vozilo i vozilo na dva
//točka a koje su izvedene iz klase vozilo. Klasa vozilo posjeduje podatak o registarskim
//tablicama, motorno vozilo sadrži podatak o jačini motora a klasa vozilo na dva točka o
//broju sjedišta. Klasa motocikl ima kao sopstveni podatak član marku motocikla


#include<iostream.h>
#include<conio.h>
#include<string.h>

class Vozilo{
	protected:
		char *tablice;
	public:
		Vozilo(){tablice=0;}
		Vozilo(char *);
		virtual ~Vozilo(){delete []tablice;tablice=0;}
		virtual void citaj();
};	  

Vozilo::Vozilo(char * tab){
	tablice=new char[strlen(tab)+1];
	strcpy(tablice,tab);
}

void Vozilo::citaj(){
	cout<<"U pitanju je vozilo reg. tab. "<<tablice<<endl;
}

class MotornoVozilo:virtual public Vozilo{
	protected:
		int snaga_motora;
	public:
		MotornoVozilo(){}
		MotornoVozilo(char * br_tab, int sm):snaga_motora(sm), Vozilo(br_tab){}
		~MotornoVozilo(){}
		void citaj();
};

void MotornoVozilo::citaj(){
	cout<<"Snaga motora je "<<snaga_motora<<endl;
}


class Vozilo_na_dva_tocka:virtual public Vozilo{
	protected:
		int br_sjedista;
	public:
		Vozilo_na_dva_tocka(int a=0):br_sjedista(a){}//za Vozilo_na_dva_tocka v;
		// dodjeljuje 0 broju sjedista i sam poziva default konstruktor za Vozilo.
		Vozilo_na_dva_tocka(char *ch,int a):br_sjedista(a),Vozilo(ch){}
		~Vozilo_na_dva_tocka(){}
		void citaj();
 };


void Vozilo_na_dva_tocka::citaj(){
	cout<<"Broj sjedista je:"<<br_sjedista<<endl;
}

class Motocikl:public Vozilo_na_dva_tocka,public MotornoVozilo, virtual Vozilo{
	private:
		char * proizvodjac;
	public:
		Motocikl(){proizvodjac=0;}
		Motocikl(char *,char*,int,int);
		~Motocikl(){delete []proizvodjac; proizvodjac=0;}
		void citaj();
};

Motocikl::Motocikl(char * marka,char *tab, int bs,int sm):MotornoVozilo(tab,sm), Vozilo_na_dva_tocka(tab,bs), Vozilo(tab){
	proizvodjac=new char[strlen(marka)+1];
	strcpy(proizvodjac,marka);
}

void Motocikl::citaj(){
	Vozilo::citaj();
	MotornoVozilo::citaj();
	Vozilo_na_dva_tocka::citaj();
	cout<<"Marka motora je "<<proizvodjac<<endl;
}


void main(){
	Vozilo *pv=new Motocikl("Suzuki","PG1234",2,800);
	pv->citaj();

	delete pv;

getch();
}
