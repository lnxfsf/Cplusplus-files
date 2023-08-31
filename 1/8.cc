//Realizovati klasu niz koja će imati kao podatak član pokazivač na niz kompleksnih
//brojeva, kao i dužinu niza. Implementirati funkciju koja daje proizvod dva kompleksna
//broja, pri čemu je realizovati kao funkciju članicu i kao prijateljsku funkciju i napisati
//glavni program u kojem će se ukazati na način pozivanja obije funkcije. Unijeti niz
//kompleksnih brojeva i implementirati u okviru klase niz funkciju koja će isčitavati dati niz,
//uzeti da je klasa niz prijateljska klasa klasi kompleksnih brojeva. Klasa sadrži
//konstruktor, destruktor i konstruktor kopije.


#include<iostream.h>
#include<conio.h>
class kompleks{
	private:
		float real;
		float imag;
	public:
		kompleks(){}
		kompleks(float a,float b):real(a),imag(b){};
		~kompleks(){};
		kompleks prod(kompleks);
		float kRe(){return real;}
		float kIm(){return imag;}
		friend kompleks kprod(kompleks,kompleks);
		friend class niz;
};

kompleks kompleks::prod(kompleks a){
	kompleks temp;
	temp.real=real*a.real-imag*a.imag;
	temp.imag=imag*a.real+real*a.imag;
	return temp;
}


kompleks kprod(kompleks a,kompleks b){
	kompleks temp;
	temp.real=b.real*a.real-b.imag*a.imag;
	temp.imag=b.imag*a.real+b.real*a.imag;
	return temp;
}



class niz{
	private:
		kompleks *nizk;
		int ukupno;
	public:
		niz(){nizk=0;}
		niz(int,kompleks *);
		niz(niz &);
		~niz();
		void read(){
			for(int i=0;i<ukupno;i++){ cout<<nizk[i].real;
			if(nizk[i].imag<0)
			cout<<"-j";
			else
			cout<<"+ j";
			cout<<abs(nizk[i].imag)<<endl;}
		}

};


niz::niz(int d, kompleks *k):ukupno(d){
	nizk=new kompleks[ukupno];
	for(int i=0;i<ukupno;i++) nizk[i]=k[i];
}


niz::niz(niz &a):ukupno(a.ukupno){
	nizk=new kompleks[ukupno];
	for(int i=0;i<ukupno;i++)
	nizk[i]=a.nizk[i];
}


niz::~niz(){
	delete []nizk;
	nizk=0;
}


int main(){

float a,b;

cout<<"Unesite prvi kompleksan broj"<<endl;
cin>>a>>b;

kompleks k1(a,b);
cout<<"Unesite drugi kompleksan broj"<<endl;
cin>>a>>b;

kompleks k2(a,b);
kompleks k3;
k3=k1.prod(k2);

cout<<"("<<k3.kRe()<<","<<k3.kIm()<<")"<<endl;
k3=kprod(k1,k2);
cout<<"("<<k3.kRe()<<","<<k3.kIm()<<")"<<endl;

int n;
cout<<"Koliko clanova imaju vasi nizovi?";
cin>>n;
cout<<"Unesite elemente niza < 10"<<endl;

float x,y;

kompleks k[10];

for(int i=0;i<n;i++){
	cin>>x>>y;
	k[i]=kompleks(x,y);
}
niz n1(n,k);
n1.read();


getch();
}
