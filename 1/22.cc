
/* 4 jpg. 1 zadatak */


#include <iostream>
#include <cmath>
using namespace std;



class TVektor3D{
	private:
		double x,y,z;
	public:
		TVektor3D(){}
		TVektor3D(double a,double b,double c):x(a),y(b),z(c){}
		TVektor3D(TVektor3D &k){
			x=k.x;
			y=k.y; 
		}
		double Intezitet(){
			return sqrt(((x*x)+(y*y)+(z*z)));
		
		}
		~TVektor3D(){}
		
		
		TVektor3D operator-(TVektor3D &b){
			TVektor3D temp;
			temp.x = x - b.x;
			temp.y = y - b.y;
			temp.z = z - b.z;
			return temp;
		
		}
		

};




int main(){

	TVektor3D a(1,1,1);
	TVektor3D b(a);
	TVektor3D c;
	c = a-b;
	
	cout << "Intezitet oduzimanja ova dva vektora je: " << c.Intezitet() << "\n" << endl; 
	
	
	//delete a,b,c;

	return 0;

}



	
	
	

	
	
