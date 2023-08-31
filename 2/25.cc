/* Implementirati konstruktor bez argumenata koji inicijalizuje dužinu stranice na 1, kao i konstruktor koji
ima jedan argument i inicijalizuje dužinu stranice kvadrata na tu vrijednost. 
Kreirati odgovarajući destruktor koji ispisuje poruku ′′unisten sam′′. 

U okviru funkcije main deklarisati objekat k klase Kvadrat. 
Upotrebom konstruktora inicijalizovati dužinu stranice tog objekta na 8 (Kvadrat k; k=Kvadrat(8);). 
Koliko objekata klase Kvadrat je kreirano na ovaj način? 
Implementirati funkciju članicu GetA koja daje vrijednost podatka člana a. 

U konzoli prikazati vrijednost podatka člana a objekta k.*/



#include <iostream>
using namespace std;


class Kvadrat {
	private:
		int a;
	public:
		Kvadrat():a(1){}
		Kvadrat(int x):a(x){}
		~Kvadrat(){cout << "Unisten sam" << endl;}
		int GetA(){return a;}
		

};


int main(){

	Kvadrat k; 
	k=Kvadrat(8); 
	
	cout<<"a="<<k.GetA()<<" mm"<<endl;

	return 0;

	/* Konstruktor se poziva dva puta (obratite pažnju na komentare), dakle, biće kreirana (i uništena) dva objekta
klase Kvadrat. msm, ono, on će pozvati desktruktor kad:

A destructor is automatically called when:
1) The program finished execution.
2) When a scope (the { } parenthesis) containing local variable ends.
3) When you call the delete operator.






*/


}





