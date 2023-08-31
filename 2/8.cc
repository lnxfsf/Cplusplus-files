

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main(){

	string artikal, cijena, popust;
	string strl(50,'-');
	int cena, pop;
	float rez;
	
	cout << "Unesite naziv artikla:";
	getline(cin,artikal);
	
	cout << "Unesite cijenu artikla:";
	getline(cin,cijena);
	
	cout << "Unesite popust [%]:";
	getline(cin,popust);
	
	
	
	stringstream(cijena) >> cena; // konverzija iz string u int
	stringstream(popust) >> pop; // konverzija iz string u int

	rez=pop*(cena*0.01);
	cout << strl << endl;
	cout << "Naziv artikla:" << artikal << endl << "Cijena sa uračunatim popustom: " << rez << endl;
return 0;
	
	
	
	
	

}
