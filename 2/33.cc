/*  Za klasu Vektor preklopiti operator sabiranja +. U okviru funkcije main izvršiti testiranje preklopljenog
operatora. */

//evo i ovde, primer koriscenja *this , kao i sa objektom kopijom za privremeno storing

#include <iostream>
using namespace std;

class Vektor{
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
};

void Vektor::Citaj()
{
	cout<<"("<<x<<","<<y<<")"<<endl;
}

Vektor Vektor::operator=(const Vektor & v)
{
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



int main(){

	Vektor v1(1,2), v2(3,4), v3;

	v3=v1+v2;
	v3.Citaj();


	system("PAUSE");
	return 1;
}
