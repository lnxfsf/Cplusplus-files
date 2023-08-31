//2 . Realizovati klasu Vektor3D



#include <iostream>
#include <math.h>
using namespace std;

class Vektor3D{
		private: int x,y,z;
		public:
		Vektor3D() : x(0),y(0),z(0){}
		Vektor3D(int a, int b, int c){x=a;y=b;z=c;}
		Vektor3D(const Vektor3D & t1){x=t1.x;y=t1.y;z=t1.z;}
		~Vektor3D(){}

		void SetX(int t){x=t;}
		void SetY(int t){y=t;}
		void SetZ(int t){z=t;}

		int GetX()const{return x;}
		int GetY()const{return y;}
		int GetZ()const{return z;}

		double Intezitet(Vektor3D);

		Vektor3D operator++();
		Vektor3D operator--(int);
};


double Vektor3D::Intezitet(Vektor3D v){
	return sqrt(pow(v.x,2.0)+pow(v.y,2.0)+pow(v.z,2.0));
}


Vektor3D Vektor3D::operator++(){
	++x;
	++y;
	++z;
	return *this;
}

//ovo je za oduzimanje postfiksno. 
Vektor3D Vektor3D::operator--(int){
	Vektor3D v1;
	v1=*this;

	x--;
	y--;
	z--;

	return v1;
}


main(){
	Vektor3D *v1 = new Vektor3D(2,3,4);
	Vektor3D v2, v3;

	v2.SetX(5);
	v2.SetY(6);
	v2.SetZ(7);

	cout << "Intezitet vektora v1 je: " << v1->Intezitet(*v1) << endl; 

	
	v3=++v2;

	cout << "Nakon promjene v2 je: " << endl << "v2=" << v3.GetX() << "," << v3.GetY() << "," << v3.GetZ() << endl;
}
