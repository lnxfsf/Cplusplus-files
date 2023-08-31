/*  Realizovati klasu Complex koja računa sumu dva kompleksna broja. 
Klasa sadrži privatne podatke članove - imaginarni i realni dio kompleksnog broja. 
Implementirati odgovarajuće pristupne metode klase, kao i funkciju članicu koja računa sumu kompleksnih brojeva i ima jedan argument tipa Complex. 
U okviru funkcije main izvršiti testiranje klase, slika.*/



#include <iostream>
using namespace std;


class Complex{
	private:
		int imag, real;
	public:
		Complex(){imag=0; real=0;}
		void reala(int i){real=i;}
		void imaga(int j){imag=j;}
		//void set(int i, int j){imag=i; real=j;}
		~Complex(){}
	
		Complex suma(Complex *c1, Complex *c2){
			Complex res;
			res.real=c1->real + c2->real;
			res.imag=c1->imag + c2->imag;
		
			return res;
		}
		
		int ret_re (){
			return real;
		}
		
		int ret_im (){
			return imag;
		}
		


};

int main(){
	
	//Complex c1(2,4);
	//Complex c2(2,9);
	Complex c1,c2,c3;
	int o;
	
	cout << "Re<c1>=";
	cin >> o;
	c1.reala(o);
	cout << "Im<c1>=";
	cin >> o;
	c1.imaga(o);
	
	cout << "Re<c2>=";
	cin >> o;
	c2.reala(o);
	cout << "Im<c2>=";
	cin >> o;
	c2.imaga(o);
	
	c3=c3.suma(c1,c2);
	
	cout << "Re<c1+c2>=" << c3.ret_re() << endl;
	cout << "Im<c1+c2>=" << c3.ret_im() << endl;
	
	
	

	return 0;
}













