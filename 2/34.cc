/*  Za klasu Vektor preklopiti operator prefiksnog i postfiksnog inkrementiranja ++, pri čemu pod
inkrementiranjem podrazumijevati inkrementiranje obje koordinate. U okviru funkcije main izvršiti testiranje
preklopljenih operatora.*/


#include <iostream>
using namespace std;

class Vektor
{
	private:
		int x,y;
	public:
		Vektor():x(0),y(0){}
		Vektor(int a, int b):x(a),y(b){}
		Vektor(const Vektor & v){ x = v.x; y = v.y; }
		~Vektor(){}
		void Citaj();
		
	Vektor operator=(const Vektor &);
	Vektor operator+(const Vektor &);

	Vektor & operator++();
	Vektor operator++(int);

};

void Vektor::Citaj(){
	cout<<"("<<x<<","<<y<<")"<<endl;
}

Vektor Vektor::operator=(const Vektor & v){
	if(this==&v){
		return *this;
		}
	x=v.x;
	y=v.y;
	return *this;
}

//za sabiranje
Vektor Vektor::operator+(const Vektor & v){
	Vektor v1;
	v1.x=x+v.x;
	v1.y=y+v.y;
	return v1;
}

Vektor & Vektor::operator++(){

	x++;
	y++;

	return *this;
}

//postfiksni [ POSTFIKSNI ] [ a++ ] 
Vektor Vektor::operator ++(int){
	Vektor v1=*this; 

	x++;
	y++;

	return v1;
}

int main(){

	Vektor v1(1,2),v2;
	v2=++v1;
	
	cout<<"Prefiksno inkrementiranje"<<endl;
	
	v1.Citaj();
	v2.Citaj();

	v2=v1++;

	cout<<"Postfiksno inkrementiranje"<<endl;

	v1.Citaj();
	v2.Citaj();

	return 1;
}
