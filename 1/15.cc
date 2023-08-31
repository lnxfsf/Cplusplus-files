//Pojektovati klase pravougaonik i trougao koje su izvedene iz klase figure (sadrži težište kao
//zajedničku karakteristiku za sve figure, funkciju koja omogućava pomjeraj težišta za
//zadatu vrijednost i virtuelne funkcije dijagonala, poluprečnik opisanog i čitaj). Klase treba
//da imaju specifične funkcije za računanje dijagonale i poluprečnika opisanog kruga kao i
//očitavanje odgovarajućih podataka članova. Za klasu trougao treba realizovati
//konstruktor tako da može stvoriti jednakostranični trougao kada se unosi podatak za
//dužinu jedne stranice kao i opšti slučaj. Funkcija za računanje dijagonale u slučaju trougla
//treba da vraća -1. Poluprečnik opisanog kruga, za trougao (stranica a, b i c) se može
//računati kao:


#include<iostream.h>
#include<math.h>
#include<conio.h>
class Tacka{
	private:
		float x;
		float y;
	public:
		Tacka(float a=0,float b=0):x(a),y(b){}
		~Tacka(){}
		void tcitaj()const{cout<<"("<<x<<","<<y<<")";}
		float aps(){return x;}
		float ord(){return y;}
};


const Tacka KP;

class Figure{
	protected:
		Tacka teziste;
	public:
		Figure(Tacka t=KP):teziste(t){}
		virtual ~Figure(){}
		void Pomjeri(float dx,float dy){teziste=Tacka(dx+teziste.aps(),dy+teziste.ord());}
		virtual float Dijagonala()const=0;
		virtual float Poluprecnik()const=0;
		virtual void citaj()const=0;
};


class Pravougaonik:public Figure{
	private:
		float a;
		float b;
	public:
		Pravougaonik(float a1=1,float b1=0.5,Tacka t=KP):a(a1),b(b1),Figure(t){}
		~Pravougaonik(){}
		float Dijagonala()const{return sqrt(a*a+b*b);}
		float Poluprecnik()const{return Dijagonala()/2;}
		void citaj()const;
};


void Pravougaonik::citaj()const{
	cout<<"U pitanju je pravougaonik:[a="<<a<<", b="<<b;
	cout<<". Teziste je :";teziste.tcitaj();
	cout<<", d="<<Dijagonala()<<", R="<<Poluprecnik()<<"]"<<endl;
}


class Trougao:public Figure{
	private:
		float a1,b1,c1;
	public:
		Trougao(float a2=1,Tacka t=KP):Figure(t){a1=b1=c1=a2;}
		Trougao(float a2,float b2,float c2,Tacka t=KP):a1(a2),b1(b2),c1(c2),Figure(t){}
		~Trougao(){}
		float Dijagonala()const{return -1;}
		floatPoluprecnik()const{return a1*b1*c1/sqrt(pow(a1*a1+b1*b1+c1*c1,2)+\
		2*(pow(a1,4)+pow(b1,4) +pow(c1,4)));}
		void citaj()const;
};

void Trougao::citaj()const{
	cout<<"U pitanju je trougao:[a="<<a1<<", b= "<<b1<<", c= "<<c1;
	cout<<". Teziste je :";teziste.tcitaj();
	cout<<", d="<<Dijagonala()<<", R="<<Poluprecnik()<<"]"<<endl;
}


main(){
Figure *pf[5];

pf[0]=new Pravougaonik;
pf[1]=new Trougao;
pf[2]=new Trougao(2.5,3);
pf[3]=new Pravougaonik(2,3,Tacka(1,2));
pf[4]=new Trougao(2,4,5,Tacka(1,2));

for(int i=0;i<5;i++) pf[i]->citaj();

pf[0]->Pomjeri(2.3,4);
pf[1]->Pomjeri(3.1,2);

for(int i=0;i<2;i++) pf[i]->citaj();

for(int j=0;j<4;j++) {delete pf[j]; pf[j]=0;}

getch();
}
