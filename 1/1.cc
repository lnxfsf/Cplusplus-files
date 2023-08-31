//Dat je niz cjelobrojnih elemenata. Kreirati funkciju koja po defaultu obrće elemente niza
//"naopačke", a ako je spoecificiran cijeli broj veći od nula formira novi niz koji predstavlja
//elemente starog niza od prvog sa datim preskokom do kraja, a za negativan broj ide od
//posljednjeg elementa niza ka početku sa odgovarajućim preskokom.
//
//
#include <iostream.h>
#include <conio.h>


int uredi(int *, int ,int * ,int=-1 );

main(){

int a[]={2,3,2,1,5},c;
int i, b=5, *r;

r = new int[b]; 
c=uredi(a,b,r); //'a' je niz. 'b' je broj elemenata, 'r' je dinamicki alocirano memorija, počinje od prvog elementa (adresa elementa prvog)

for(i=0;i<c;i++){
	cout << r[i]; //stampa svaki element niza, reversed u ova slucaj
	cout << endl;
	c = uredi(a,b,r,2); //ovaj 4 parametar je preskok, tj. 'step'
}

for(i=0;i<c;i++){
	cout << r[i];
	cout << endl;
	c = uredi(a,b,r,-2); 
}

for(i=0;i<c;i++){
	cout << r[i];
	cout << endl;
}

	delete []r;
	r=0;

	getch();

}


int uredi(int *a, int n,int *c, int m){

	int j=0;

	if(m>0){ 
		for(int i=0;i<n;j++,i+=m){
			c[j]=a[i];
		}
	}else{ 
		for(int i=n-1;i>=0;j++,i+=m){
			c[j]=a[i];
		}
	}

	return j;
}
