/*Šta će biti ispisano na ekranu nakon izvršenja datog koda? */


//a)

/*
#include <iostream>
using namespace std;

int main()
{
	int *p;
	int q[] = {1,4,9,16};
	p = &q[1]; //pokazuje na 2 element, tj. 4
	*p++ = 25; //ovo je, ide na sledeći element, tj. 3, i stavlja mu 25
	*p = 36; //pa 36
	q[2] = 49; //pa 49
	
	cout<<"vrijednost na koju pokazuje p: "<<*p<<endl; //49
	cout<<"niz q: ";
	//lista niz, samo 3 element je izmenjen
	for(int i=0; i<4; i++)
		cout<<q[i]<<" ";
	cin.get();
	return 0;
}
*/



//b)


#include <iostream>
using namespace std;
int main()
{

int *p;
int **q;  //pointer to pointer

int r = 2;

p = &r; //prvi, ukazuje na int r, tj. 2 , adresu makar
q = &p; // a ovaj ukazuje na pointer p, koji ukazuje na r

int &s = **q;   

/*
int &k=**q;
cout << k;
*/
cout << s << endl;

s*=2;  
cout << s << endl;
(*p)++; 

cout << "*p = " << *p << endl; //*p = 5
cout << "**q = " << **q << endl; //**q=5
cout << "r = " << r << endl; //r=5
cout << "s = " << s << endl; //s=5

cin.get();
return 0;
}

