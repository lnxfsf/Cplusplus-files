//Sastaviti šablonsku klasu matrice, pri čemu se može mijenjati tip podataka koje ta klasa
//sadrži. Napisati glavni program u kojem treba inicijalizovati matricu cijelih brojeva i
//kompleksnih brojeva i isčitati njihovu vrijednost. Klasa matrica ima konstruktor kopije
//kao i operatore dodjeljivanja i indeksiranja, pri čemu indeksiranje treba realizovati tako
//da poziv elementa m(1,3), m tipa matrica, daje element prve vrste i treće kolone. Elementi
//matrice se čuvaju u vektoru u kojem su prvo elementi prve vrste pa druge itd

#include<iostream.h>
#include<stdlib.h>
#include<conio.h>
template<class T>
class Matrica{
private:
T *podatak;
int vrsta, kolona;
public:
Matrica(){podatak=0;}//deafoult konstruktor
Matrica(int,int);//konstruktor
Matrica(const Matrica&);//konstruktor kopije
83
 ~Matrica(){delete []podatak;}
Matrica &operator=(const Matrica&);
T& operator()(int,int);
int velicina(){return vrsta*kolona;}
int br_vrsta(){return vrsta;}
int br_kolona(){return kolona;}
};
template<class T>
Matrica<T>::Matrica(int a,int b):vrsta(a),kolona(b){
podatak=new T[vrsta*kolona];
}
template<class T>
Matrica<T>::Matrica(const Matrica& stara):vrsta(stara.vrsta),kolona(stara.kolona){
podatak=new T[vrsta*kolona];
for(int i=0;i<vrsta*kolona;i++){
podatak[i]=stara.podatak[i];
}
}
template<class T>
Matrica<T>& Matrica<T>::operator=(const Matrica& stara){
if(this!=&stara){//ako se ne dodjeljuje a=a
vrsta=stara.vrsta;
kolona=stara.kolona;
delete []podatak;
podatak=new T[vrsta*kolona];
for(int i=0;i<vrsta*kolona;i++)
podatak[i]=stara.podatak[i];
}
return *this;
}
template<class T>
T& Matrica<T>::operator()(int i,int j){
//if(i<1||i>vrsta&j<1||j>kolona)
exit(1);
return podatak[(i-1)*kolona+j-1];
}
class Kompleks{
private:
float real;
float imag;
public:
Kompleks(float a=0,float b=0):real(a),imag(b){}
~Kompleks(){}
void citaj(){cout<<"("<<real<<","<<imag<<")";}
};
main(){
cout<<"Koliko vrsta i kolona zelite da ima matrica cijelih brojeva?"<<endl;
int a,b;
84
 cin>>a>>b;
Matrica<int> MatricaCijelih(a,b);
cout<<"Unesite elemente matrice"<<endl;
for(int i=1; i<=a;i++)
for(int j=1;j<=b;j++){
cin>>MatricaCijelih(i,j);};
for(int i=1; i<=a;i++){
for(int j=1;j<=b;j++){
cout<<"MatricaCijelih("<<i<<","<<j<<")==";
cout<<MatricaCijelih(i,j)<<" ";}
cout<<endl;}
cout<<"Koliko vrsta i kolona zelite da ima matrica kompleksnih brojeva?"<<endl;
cin>>a>>b;
Matrica<Kompleks> MatricaKompleksnih(a,b);
float a1,b1;
for(int i=1; i<=a;i++)
for(int j=1;j<=b;j++){
cin>>a1>>b1;
MatricaKompleksnih(i,j)=Kompleks(a1,b1);}
for(int i=1; i<=a;i++) {
for(int j=1;j<=b;j++){
cout<<"MatricaKompleksnih("<<i<<","<<j<<")==";
MatricaKompleksnih(i,j).citaj();
cout<<" ";}
cout<<endl;}
Matrica<Kompleks> b2(MatricaKompleksnih),b3;
b3=b2;
for(int i=1; i<=a;i++){
for(int j=1;j<=b;j++){
cout<<"b2("<<i<<","<<j<<")==";
b2(i,j).citaj();
cout<<" ";}
cout<<endl;}
for(int i=1; i<=a;i++){
for(int j=1;j<=b;j++){
cout<<"b3("<<i<<","<<j<<")==";
b3(i,j).citaj();
cout<<" ";}
cout<<endl;}
getch();
}
