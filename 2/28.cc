
//Dat je kod:

#include <iostream>
using namespace std;
class A {
	private:
		int *a;
	public:
		A(){a=new int(0);}
		A(int x){a=new int(x);}
		~A(){delete a;}
};

int main(){

	A *b = new A(4);
	delete b;
	return 0;

}



// a je:  4.pokazivač na podatak član klase A
// b je:  3. pokazivač na objekat klase A