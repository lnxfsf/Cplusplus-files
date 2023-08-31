//Projektovati klasu za obradu vektora realnih brojeva sa zadatim opsezima indeksa. Za
//razriješavanje konfliktnih situacija koristiti mehanizam obrade izuzetaka. Sastaviti glavni
//program za prikazivanjenje mogućnosti te klase.


#include<iostream.h>
#include<conio.h>
#include<string.h>
class Vektor{
private:
float *niz;
int max_ops;
int min_ops;
public:
enum Greska{OK, //Kodovi gresaka
OPSEG, //neispravan opseg indeksiranja
MEMORIJA,//dodjela memorije nije uspjela,
PRAZAN, //vektor je prazan
INDEKS, //indeks je izvan opsega
DUZINA}; //neusaglasene duzine vektora
Vektor(){niz=0;}
Vektor(float, float=0);
Vektor(const Vektor &);
~Vektor(){delete []niz;niz=0;}
Vektor &operator=(const Vektor &v);
float &operator[](int)const; //referencu saljem kao rezultat da
// bi se mogao mijenjati sadrzaj elementa kojem se pristupa pomocu [].
friend double operator*(const Vektor&,const Vektor &);
};
Vektor::Vektor(float a,float b):max_ops(a),min_ops(b){
if(max_ops<min_ops) throw(OPSEG);
else if(!(niz=new float[max_ops-min_ops+1])) throw MEMORIJA;
else for(int i=0;i<max_ops-min_ops+1;i++) niz[i]=0;
}
Vektor::Vektor(const Vektor &a):max_ops(a.max_ops),min_ops(a.min_ops){
if(!(niz=new float[max_ops-min_ops+1])) throw MEMORIJA;
else for(int i=0;i<max_ops-min_ops+1;i++) niz[i]=a.niz[i];
}
Vektor &Vektor::operator=(const Vektor& a){
if(&a!=this){
delete []niz;
niz=0;
if(!(niz=new float[max_ops-min_ops+1])) throw MEMORIJA;
else for(int i=0;i<max_ops-min_ops+1;i++) niz[i]=a.niz[i];
89
 }
return *this;
}
float &Vektor::operator[](int i)const{
if(!niz) throw PRAZAN;//u niz nije nista upisano,
// samo je izvrsen default konstruktor
else if((i<min_ops)||(i>max_ops)) throw INDEKS;
else return niz[i-min_ops];
}
double operator*(const Vektor& a1,const Vektor& a2){
if((!a1.niz)||(!a2.niz)) throw Vektor::PRAZAN;
else {
float s=0;
for(int i=0;i<a1.max_ops-a1.min_ops+1;i++) s+=a1.niz[i]*a2.niz[i];
return s;
}
}
main(){
while(1){
try{
int max, min;
cout<<"Unesi opseg indeksa prvog vektora"<<endl;
cin>>max>>min;
if(cin.eof()) throw 1;
Vektor v1(max,min);
cout<<"Komponente prvog vektora"<<endl;
for(int i=min;i<=max;i++) cin>>v1[i];
cout<<"Unesi opseg indeksa drugog vektora"<<endl;
cin>>max>>min;
Vektor v2(max,min);
cout<<"Komponente drugog vektora"<<endl;
for(int i=min;i<=max;i++) cin>>v2[i];
cout<<"Skalarni proizvod dva zadata vektora je "<<v1*v2<<endl;
}
catch(Vektor::Greska g){
char *poruke[]={"",
"Neispravan opseg indeksa!",
"Neuspjelo dodjeljivanje memorije!"
"Vektor je prazan!",
"Indeks je izvan opsega!"
};
cout<<poruke[g]<<endl;
}
catch(...){
cout<<"Kraj unosa"<<endl;
break;
}
}
getch();getch();
}
