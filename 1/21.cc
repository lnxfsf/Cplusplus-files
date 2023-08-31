/* 4 jpg. 1 zadatak */


#include <iostream>
#include <cmath>
using namespace std;



class TVektor2D{
	private:
		float x,y;
	public:
		TVektor2D(){}
		TVektor2D(float a,float b):x(a),y(b){}
		TVektor2D(TVektor2D &k){
			x=k.x;
			y=k.y; 
		}
		float Intezitet(){
			return sqrt(((x*x)+(y*y)));
		
		}
		

};




int main(){
	
//	TVektor2D *novi = new TVektor2D(3.0,4.0);
//	TVektor2D **p = &novi;
	
	
	TVektor2D *p = new TVektor2D(3.0,4.0);
	
	// cout << novi->Intezitet() << "\n" << endl; 
	
	cout << p->Intezitet() << "\n" << endl; 
	delete novi;
	

	return 0;

}



	
	
	
