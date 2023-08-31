/*  Realizovati klasu Niz koja računa sumu kvadrata elemenata niza. 
Klasa sadrži niz realnih brojeva (kao privatan podatak član), odgovarajuće konstruktore, destruktor, kao i funkciju članicu koja određuje sumu kvadrata elemenata niza. 
U okviru funkcije main izvršiti testiranje klase.  */


#include <iostream>
using namespace std;

const int N=5;


class Niz{
	private:
		double *n; 
	public:
		Niz(){n=0;} 
		Niz(double *);  
		~Niz(){delete []n; n=0;}  
		double f();
		



};

Niz::Niz(double *d){

	n=new double [N]; 
	for(int i=0;i<N;i++){
		n[i]=d[i]; 
	}


}

double Niz::f(){
	double s=0.0; 
	for(int i=0;i<N;i++){
		s+=n[i]*n[i];
	
	
	}
	return s;


}


int main(){
	//niz , od 5 elemenata
	double *p = new double[N];
	
	

	//unosi element
	cout << "Unesite niz od " << N << " realnih brojeva" << endl;
	for(int i=0;i<N;i++){
		cin >> p[i]; 
	} 
	Niz n1(p); 
	cout << "Suma kvadrata elemenata niza: " << n1.f() << endl; 
	delete []p; 
	
	
	return 0;




}









