//Projektovati klase krug i kvadrat koje su izvedene iz klase figure (sadrži težiste kao
//zajedničku karakteristiku za sve figure, funkciju koja omogućava pomjeraj težista za
//zadatu vrijednost i virtuelne funkcije obim, površina i čitaj). Klase treba da imaju
//specifične funkcije za računanje obima i površine kao i očitavanje odgovarajućih podataka
//članova


#include<iostream.h>
#include<conio.h>
class Tacka{
	private:
		float x;
		float y;
	public:
		Tacka(float a=0,float b=0):x(a),y(b){}
		~Tacka(){}
		float aps(){return x;}
		float ord(){return y;}
		void Tcitaj(){cout<<"("<<x<<","<<y<<")";}
};


const Tacka KP;


class Figura{
	private:
		Tacka teziste;
	public:
		Figura(Tacka t=KP):teziste(t){}
		virtual ~Figura(){}
		void pomjeri(float a, float b){teziste=Tacka(teziste.aps()+a,teziste.ord()+b);}
		virtual float Obim()const=0;
		virtual float Povrsina()const=0;
		virtual void citaj(){cout<<"T="; teziste.Tcitaj();}
};

class Krug : public Figura{
	private:
		float poluprecnik;
	public:
		Krug(float rr=1, Tacka k=KP):Figura(k),poluprecnik(rr){};
		~Krug(){}
		float Obim()const{const float pi=3.14; return 2*poluprecnik*pi;}
		float Povrsina()const{const float pi=3.14; return pow(poluprecnik,2)*pi;}
		void citaj();
};

void Krug::citaj(){
	cout<<"U pitanju je krug: [ r="<<poluprecnik<<",";
	Figura::citaj();
	cout<<", O="<<Obim()<<", P="<<Povrsina()<<" ]"<<endl;
}


class Kvadrat:public Figura{
	private:
		float osnovica;
	public:
		Kvadrat(float a=1, Tacka t=KP):Figura(t),osnovica(a){}
		~Kvadrat(){}
		float Obim()const{return 4*osnovica;}
		float Povrsina()const{return pow(osnovica,2);}
		void citaj();
};

void Kvadrat::citaj(){
	cout<<"U pitanju je kvadrat: [ a="<<osnovica<<",";
	Figura::citaj();
	cout<<", O="<<Obim()<<", P="<<Povrsina()<<" ]"<<endl;
}


main(){
Figura *pf[4];

pf[0]=new Krug;
pf[1]=new Kvadrat;
pf[2]=new Krug(2,Tacka(3,3));
pf[3]=new Kvadrat(2.5,Tacka(1.3,2));

for(int j=0;j<4;j++) pf[j]->citaj();

pf[0]->pomjeri(1,0.5);
pf[1]->pomjeri(0.5,1);

for(int j=0;j<2;j++) pf[j]->citaj();

for(int j=0;j<4;j++) {delete pf[j]; pf[j]=0;}

getch();
}
