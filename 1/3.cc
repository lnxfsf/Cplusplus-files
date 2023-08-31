//Projektovati klasu sa elementarnim operacijama nad tačkama u ravni (računanje
//udaljenosti zadate tačke od koordinatnog početka, rastojanja dvije tačke). U glavnom
//programu unijeti podatke za dvije tačke a dati na izlazu koordinate tačke koja je na većem
//rastojanju od koordinatnog početka i rastojanje te dvije tačke. Koordinate tačke su
//privatni članovi klase.


#include<iostream.h>
#include<math.h>


class tacka{

	private:
		double x, y;

	public:
		void pravi(double a, double b){x=a;y=b;}

		double aps() const {return x;}
		double ord() const {return y;}

		double poteg() const;

		double rastojanje(tacka) const;

		void ispisi() const;
};


double tacka::poteg() const {
	return sqrt(pow(x,2)+pow(y,2));
}

double tacka::rastojanje (tacka a) const {
	return sqrt(pow(x-a.x,2)+pow(y-a.y,2));
}

void tacka::ispisi() const {
	cout<<"("<<x<<","<<y<<")"<<"\n";
}


void main(){

	int n;

	tacka t1;

	cout<<" Unesite koordinate prve tacke "<<endl;

	double x, y;

	cin>>x>>y;

	t1.pravi(x,y);

	tacka t2;
	cout<<" Unesite koordinate druge tacke "<<endl;
	cin>>x>>y;

	t2.pravi(x,y);
	cout<<"Koordinate dalje tacke su: ";

	t1.poteg() > t2.poteg() ? t1.ispisi() : t2.ispisi();
	cout<<"Rastojanje zadatih tacaka je: "<<t1.rastojanje(t2)<<'\n';
}
