//Realizovati klasu koja predstavlja realne brojeve u zapisu sa decimalnom tačkom (npr.
//23.45). Klasa će imati dva podatka člana: jedan za realan broj (23.45) a drugi za cijeli dio
//tog broja (23). Izvršiti preklapanje operatora -, -= kao i operatora za prefiksno i postfiksno
//dekrementiranje. Prilikom realizacije operatora - uzeti u obzir i mogućnosti oduzimanja
//brojeva u decimalnom zapisu i cijelih brojeva, pri čemu se cijeli broj može očekivati i kao
//lijevi i kao desni operand.


#include<iostream.h>
#include<math.h>
#include<conio.h>
class Decimalni{
	private:
		float broj;
		int cijeli_dio;
	public:
		Decimalni(float=0);
		~Decimalni(){}
		friend Decimalni operator-(Decimalni,Decimalni);
		Decimalni &operator-=(const Decimalni &);
		Decimalni &operator--();
		Decimalni operator--(int);
		void citaj(){cout<<"Broj je:"<<broj<<". Cijeli dio je:"<<cijeli_dio<<endl;}
};

Decimalni::Decimalni(float a):broj(a),cijeli_dio((int)broj){}

Decimalni operator-(Decimalni a,Decimalni b){
	Decimalni temp;
	temp.broj=a.broj-b.broj;
	temp.cijeli_dio=int(temp.broj);
	return temp;
}
Decimalni &Decimalni::operator-=(const Decimalni &a){
	*this=(*this)-a;
	return *this;
}


Decimalni &Decimalni::operator--(){
	(*this)-=1;
	return *this;
}


Decimalni Decimalni::operator--(int){
	Decimalni temp=*this;
	(*this)-=1;
	return temp;
}


main(){
Decimalni a(23.45),b(12.11),c;

(a-b).citaj();

c=a-5;
c.citaj();
c=5-b;c.citaj();
c=b--;
c.citaj();
b.citaj();
c=--b;
c.citaj();
b.citaj();
b-=a;
b.citaj();
b-=5;
b.citaj();

getch();
}
