/* Implementirati funkciju maksimum koja kao rezultat daje maksimalni element niza od 5 cijelih brojeva.
Implementirati inline funkciju sa istim imenom maksimum koja kao rezultat daje veći od dva cijela broja. 
U okviru funkcije main izvršiti testiranje preklopljne funkcije maksimum.*/



#include <iostream>
using namespace std;
const int N=5;



int maksium(int *niz){
	int temp;
	temp=niz[0];
	for(int i=1;i<N; i++){
		if(temp<niz[i]){
			temp=niz[i];
		
		}
	
	}
	return temp;
	

}


inline int maksium(int a, int b){
	return a>b ? a : b;
}


int main(){
	int niz[N];
	int a, b;
	cout << "unesite niz od 5 celih brojeva" << endl;
	
	//unos niza
	for(int i=0; i<N;i++){
		cin>>niz[i];
	}
	
	
	cout << "unesite dva cela broja" << endl;
	cin >> a >> b;
	cout << "max niza je: " << maksium(niz) << endl;
	cout << "max dva broja je: " << maksium(a,b) << endl;
	return 0;


}





