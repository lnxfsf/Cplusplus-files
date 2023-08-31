/*Za klasu Vektor preklopiti operator dodjele =. 
U okviru funkcije main izvršiti testiranje preklopljenog operatora.


   */
   
   
   
#include <iostream>
using namespace std;

class Vektor{
	private:
		int x,y;
	public:
		Vektor():x(0),y(0){}
		Vektor(int a, int b):x(a),y(b){} 
	
		Vektor(const Vektor &v){
			x=v.x;
			y=v.y;
		}
		
		~Vektor(){}
		void Citaj();

		Vektor operator= (const Vektor &);

};
   
   
void Vektor::Citaj()
{
cout<<"("<<x<<","<<y<<")"<<endl;
}

Vektor Vektor::operator= (const Vektor &v){
	if(this==&v){
		return *this; 
	}
	x=v.x;
	y=v.y;
	return *this; 

	
	x=v.x;
	y=v.y;
	return *this; 
	

}


class Vektor2{
	private:
		int x,y;
	public:
		Vektor2():x(0),y(0){}
		Vektor2(int a, int b):x(a),y(b){} 
	
		Vektor2(const Vektor2 &v){
			x=v.x;
			y=v.y;
			return *this;
		}
		
		~Vektor2(){}
		void Citajz();

};
   
   
void Vektor2::Citajz()
{
cout<<"("<<x<<","<<y<<")"<<endl;
}


int main(){
	Vektor v1(1,2), v2(3,4);
	v2=v1;
	v2.Citaj();
	
	
	Vektor2 v3(1,2), v4(3,4);
	v4=v3;
	v3.Citajz(); 
	
	
	
	
	return 0;
	



}


   
  
   
   
   
   
   
   
   
