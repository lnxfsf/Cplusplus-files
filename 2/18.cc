/*  Implementirati funkciju SrednjaVrijednost koja vraća srednju vrijednost niza. 
U okviru funkcije main izvršiti testiranje funkcije SrednjaVrijednost. 
Broj elemenata niza, kao i elemente niza unosi korisnik iz konzolne linije.

*/



#include <iostream>
#include <new>

using namespace std;

double SrednjaVrijednost(int niz[], int N){
	double s=0;
	for(int i=0;i<N;i++){
		s+=niz[i];
	}
	
	return s/N;

}

int main(){
	int N;
	
	cout << "Unesite broj elemenata niza: ";
	cin >> N;
	int *niz = new (nothrow) int[N];
	
	if(niz==0){
		cout << "Neuspešna alokacija memorije!";
	}else{
		cout << "Unesite elemente niza: ";
		for(int i=0; i<N;i++){
			cin >> niz[i];
		}
		cout << "Srednja vrednost niza je: " << SrednjaVrijednost(niz,N) << endl;
		
		//oslobodis memoriju
		delete []niz;
		
	
	
	}
	
	
	return 0;
	
	


}



