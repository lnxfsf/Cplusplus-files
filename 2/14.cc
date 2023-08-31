/*  Implementirati funkciju f koja kao rezultat daje sumu i proizvod elemenata niza od 5 realnih brojeva.
Funkcija f je tipa void. 
U okviru funkcije main izvršiti testiranje funckije f.

*/

#include <iostream>
using namespace std;

// #define N 5

const int N=5;

void f(double *niz, double &suma, double &proizvod){

	suma=0;
	proizvod=1;
	for(int i=0;i<N;i++){
		suma+=niz[i];
		proizvod*=niz[i];
	}


}


int main(){
	double suma, proizvod;
	double niz[N];
	
	cout << "unesite niz od 5 realnih brojeva" << endl;
	
	for (int i=0;i<N;i++){
		cin >> niz[i];
	}
	
	f(niz, suma, proizvod);
	
	cout << "Suma elemenata niza: " << suma << endl;
	cout << "Proizvod elemenata niza: " << proizvod << endl;
	

}









