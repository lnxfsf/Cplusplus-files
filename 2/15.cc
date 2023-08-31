/*  Implementirati funkciju mean koja kao rezultat daje srednju vrijednost niza od N cijelih brojeva.
Implementirati inline funkciju sa istim imenom mean koja kao rezultat daje srednju vrijednost od dva cijela broja. 
U okviru funkcije main izvršiti testiranje preklopljne funkcije mean.*/


#include <iostream>
using namespace std;


float mean(int *niz, int N){
	float sum=0;
	int j=0;
	for(j=0;j<N;){
		sum+=(*(niz+j));
		
		
		++j;
	}
	
	return sum/(float)j;

}

inline float mean(int a, int b){
	return ((float)a+(float)b)/2;
}

int main(){
	
	int N, a, b;
	float ar;
	
	
	cout << "Unesi duzinu niza" << endl;
	cin >> N;
	
	//dinamički dodeli memoriju
	int *niz=new int[N];
	
	cout << "Unesi elemente niza" << endl;
	for(int i=0;i<N;i++){
		cout << "["<< i+1 <<"]: ";
		cin >> *(niz+i);
	
	}
	cout << endl;
	
	
	cout << "Unesi dva cijela broja" << endl;
	cin >> a >> b;
	cout << "Srednja vrednost 2 broja je: " << mean(a,b) << endl;
	
	
	ar=mean(niz,N);
	cout << "Srednja vrednost niza je: " << ar << endl;
	
	//oslobodis memoriju, niz
	delete []niz;
	
	
	return 0;

}
