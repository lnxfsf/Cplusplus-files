/*Proglasiti podatak član klase privatnim. 
U okviru funkcije main deklarisati objekat tipa Kvadrat i zadati dužinu stranice kvadrata 5. Objasniti.
*/

#include <iostream>
using namespace std;

class Kvadrat{
	private: 
		int a;
	public:
		void setA(int x){
			a=x;
		}
		int getA(){ return a;}

};

int main(){
	Kvadrat k;
	//k.a=5;
	k.setA(5);
	//cout<<"a="<<k.a<<" mm"<<endl;
	//
	
	cout<<"a="<<k.getA()<<" mm"<<endl;
	return 0;

}







