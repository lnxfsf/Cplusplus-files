/* Napisati program koji na ekranu ispisuje ime, prezime, inicijale, starost i mjesto rođenja osobe u
odgovarajućem formatu*/


#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main(){

	string Ime, Prezime, mestorodjenja, godinarodjenja;
	string strl(50,'-'); 
	int god;
	
	cout << "Unesite ime:";
	getline(cin,Ime);
	
	cout << "Unesite prezime:";
	getline(cin,Prezime);
	
	cout << "Unesite mjesto rodjenja:";
	getline(cin,mestorodjenja);
	
	cout << "Unesite godinu rodjenja:";
	getline(cin,godinarodjenja);
	
	
	stringstream(godinarodjenja) >> god; // konverzija iz string u int
	cout << strl << endl; 
	cout << Ime << " " << Prezime << " (" << Ime.at(0) << Prezime.at(0) << "), " << 2022-god << ", " << mestorodjenja << endl;

	
return 0;
	
	
	
	
	

}
