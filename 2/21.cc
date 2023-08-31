/* Implementirati funkciju SrednjaKvadratnaVrijednost koja vraća srednju kvadratnu vrijednost niza. 
U okviru funkcije main izvršiti testiranje funkcije SrednjaKvadratnaVrijednost. 
Broj elemenata niza, kao i elemente niza unosi korisnik iz konzolne linije.


to je verovatno, kada je sve na kvadrat, i onda srednja vrednost od toga....

*/

#include <iostream>
using namespace std;

double SrednjaKvadratnaVrijednost (int *niz, int N){
	float suma=0;
	int j=0;
	for(j=0;j<N;){
		suma+=(*(niz+j))*(*(niz+j));
		++j;	
	
	}
	
	return suma/j;


}



int main(){

	int N;
	
	
	
	cout << "Unesti broj elemenata" << endl;
	cin >> N;
	int *niz = new int[N]; 


	cout << "Unesti elemente" << endl;
	for(int i=0;i<N;i++){
		cout << "[" << i+1 << "]: " ;
		cin >> *(niz+i);
	
	}
	
	
	cout << "Srednja kvadratna vrijednost niza je: " <<  SrednjaKvadratnaVrijednost(niz,N) << endl; 




	return 0;

}



















