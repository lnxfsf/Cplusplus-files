/*  Za klasu Vektor preklopiti operator ==, pri čemu su dva vektora jednki ukoliko su im x i y koordinate
jednake. 
U okviru funkcije main izvršiti testiranje preklopljenog operatora.

*/


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


	//prefiksni
	Vektor & operator++();
	
	//postfiksni
	Vektor operator++(int);
	
	bool operator==(const Vektor &);

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


Vektor Vektor::operator ++(int){
	Vektor v1=*this;
	x++;
	y++;
	return v1;
}

bool Vektor::operator ==(const Vektor & v)
{
	return (x==v.x && y==v.y); 
}

int main(){

	Vektor v1(1,2),v2(v1); 
	
	if(v1==v2)
		cout<<"Vektori su jednaki."<<endl; 
	else
		cout<<"Vektori nijesu jednaki."<<endl;

	return 1;
}
