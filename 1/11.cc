//Realizovati apstraktni tip podataka koji predstavlja kompleksne brojeve, izvršiti
//preklapanje operatora ==, != i <. Klasa sadrži konstruktore i destruktore.
//

#include<iostream.h>
#include<conio.h>

class Kompleks{
	private:
		float real;
		float imag;
	public:
	Kompleks(float a=0, float b=0):real(a),imag(b){}
	~Kompleks(){}
	
	friend bool operator==(const Kompleks,const Kompleks);
	friend bool operator<(const Kompleks, const Kompleks);
	friend bool operator!=(const Kompleks, const Kompleks);

	void citaj(){cout<<real<<"+ j"<<imag;}
};

bool operator==(const Kompleks a,const Kompleks b){
	return (a.real==b.real)&&(a.imag==b.imag);
}


bool operator!=(const Kompleks a,const Kompleks b){
	return !(a==b);
}

bool operator<(const Kompleks a,const Kompleks b){
	return (pow(a.real,2)+pow(a.imag,2))<(pow(b.real,2)+pow(b.imag,2));
}

main(){
Kompleks k1(1,2), k2(1,3), k3(1,1), k4(1,2);

if(k1==k2) {
	k1.citaj(); cout<<"=="; k2.citaj();cout<<endl;
}else{
	k1.citaj(); cout<<"!="; k2.citaj();cout<<endl;
}

if(k1==k4) {
	k1.citaj(); cout<<"=="; k4.citaj();cout<<endl;
}else{
	k1.citaj(); cout<<"!="; k4.citaj();cout<<endl;
}


if(k1!=k2) {
	k1.citaj(); cout<<"!="; k2.citaj();cout<<endl;
}else{
	k1.citaj(); cout<<"=="; k2.citaj();cout<<endl;
}

if(k1!=k4) {
k1.citaj(); cout<<"!="; k4.citaj();cout<<endl;
}else{
	k1.citaj(); cout<<"=="; k4.citaj();cout<<endl;
}

if(k1<k2) {
	k1.citaj(); cout<<"<"; k2.citaj();cout<<endl;
}else{
	k1.citaj(); cout<<">="; k2.citaj();cout<<endl;
}


if(k1<k3) {
	k1.citaj(); cout<<"<"; k3.citaj();cout<<endl;
}else{
	k1.citaj(); cout<<">="; k3.citaj();cout<<endl;
}

if(k1<k4) {
	k1.citaj(); cout<<"<"; k4.citaj();cout<<endl;
}else{
	k1.citaj(); cout<<">="; k4.citaj();cout<<endl;
}


if(k1<3) {
	k1.citaj(); cout<<"< 3"<<endl;
}else{
	k1.citaj(); cout<<">= 3";cout<<endl;
}


if(k1!=1) {
	k1.citaj(); cout<<"!= 1";cout<<endl;
}else{
	k1.citaj(); cout<<"== 1"; cout<<endl;
}


if(k1==1) {
	k1.citaj(); cout<<"== 1";cout<<endl;
}else{
	k1.citaj(); cout<<"!= 1"; cout<<endl;
}

getch();
}
