//Realizovati klasu red koja će predstavljati niz cijelih brojeva proizvoljne dužine, neka
//klasa sadrži i podatak o dužini reda. Omogućiti da indeks prvog člana može biti različit od
//nule ukoliko korisnik to zada. Omogućiti pristup članovima reda za upis i izmjenu
//podataka. Napisati glavni program u kojem će se unositi odgovarajući red i na izlazu
//davati suma članova tog reda kao i red koji je sastavljen od kvadrata elemenata reda koji
//je korisnik unio.


#include<iostream.h>
class Array{
	private:
		int *p; //Pokazivac na pocetak niza cijelih brojeva
		int num; //Duzina niza
		const int i1; //Indeks pocetnog elementa niza (moze biti razlicit od 0)
	public:
		Array(int first_index=1,int number=0);
		Array(const Array & a);
		~Array();

		int first(){return i1;}
		int length(){return num;}

		int last(){return i1+num-1;}
		int read(int index){return p[index-i1];}

		void change(int, int);
};

Array::Array(int first_index, int number):i1(first_index), num(number){
	p=new int[num];
}

Array::Array(const Array &a): i1(a.i1), num(a.num){
	p=new int[num];
	for(int i=0;i<num;i++) p[i]=a.p[i];
}

Array::~Array(){delete[] p; p=0;}
	void Array::change(int index, int value){
	p[index-i1]=value;
}


int sum(Array &a){
	int s=0;
	for(int i=a.first();i<=a.last();i++) s+=a.read(i);

	return s;
}

void square(Array &a){
	for(int i=a.first();i<=a.last();i++) {
		int x;
		x=a.read(i);
		a.change(i,pow(x,2));
	}
}


void main(){

int i, n,x;

cout<<"Koliko clanova zelite da ima vas red?"<<'\n';
cin>>n;

cout<<"Od kojeg indeksa zelite da pocinje indeksiranje vaseg reda"<<'\n';
cin>>i;

cout<<"Unesite clanove reda"<<endl;

Array a1(i,n);

for(int j=i;j<n+i;j++){
	cin>>x;
	a1.change(j,x);
}

Array a2(a1);
square(a2);

cout<<"Suma clanova zadatog reda je: "<<sum(a1)<<endl;
cout<<"Red dobijen kvadriranjem clanova zadatog je: "<<endl;

for(int j=a2.first(); j<=a2.last();j++) cout<<a2.read(j)<<" ";
}
