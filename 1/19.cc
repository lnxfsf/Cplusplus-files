//Sastaviti šablonsku funkciju koja će eliminisati ponavljanje istih elemenata u nekom nizu
//(npr. ako imamo niz 2 3 4 3 2 1 5 daje niz 4 3 2 1 5), kao i šablonsku klasu koja će
//predstavljati niz sa zadatim opsezima indeksa. Napisati glavni program u kojem će se data
//86
//funkcija pozivati za niz cijelih i niz realnih brojeva kao i izvršiti inicijalizacija objekata
//klase niz za cijele i realne elemente nizova dobijenih izvršavanjem šablonske funkcije za
//niz cijelih ili realnih elemenata (4 3 2 1 5).


#include<iostream.h>
#include<conio.h>
template <class S>
int Sazimanje(S* niz,int duz){
int pom;
int n=0;
for(int i=0;i<duz-1;i++){
pom=0;
for(int j=i+1;j<=duz-1;j++)
if(niz[i]==niz[j]){
pom=1;
break;
}
if(pom==0) {niz[n]=niz[i]; n=n+1;}
}
niz[n]=niz[duz-1];
return n+1;
}
template <class T>
class Niz{
private:
T* sadrzaj;
int poc;
int kraj;
public:
Niz(){sadrzaj=0;}
Niz(T*,int,int=0);
Niz(const Niz&);
~Niz(){delete []sadrzaj; sadrzaj=0;}
T*Daj_sadrzaj(){return sadrzaj;}
Niz&operator=(const Niz&);
T operator[](int i){return sadrzaj[i];}
void citaj(){for(int i=0;i<kraj-poc+1;i++) cout<<sadrzaj[i]<<" ";cout<<endl;}
};
template<class T>
Niz<T>::Niz(T * unos,int max,int min):poc(min),kraj(max){
sadrzaj=new T[max-min+1];
for(int i=0;i<max-min+1;i++) sadrzaj[i]=unos[i];
}
template<class T>
Niz<T>::Niz(const Niz& stara):poc(stara.poc),kraj(stara.kraj){
sadrzaj=new T[kraj-poc+1];
for(int i=0;i<max-min+1;i++) sadrzaj[i]=stara.sadrzaj[i];
}
87
template<class T>
Niz<T> &Niz<T>::operator=(const Niz<T>& stara){
if(this!=&stara){
delete []sadrzaj;
poc=stara.poc;
kraj=stara.kraj;
sadrzaj=new T[kraj-poc+1];
for(int i=0;i<kraj-poc+1;i++) sadrzaj[i]=stara.sadrzaj[i];
}
return *this;
}
void main(){
int niz[]={1,2,5,3,2,4,6,3,2};
Niz<int> Cijeli(niz,10,2);
float realni[]={1.5,2.4,5,3,2.4,4,6,3,2.4};
Niz<float> Realni(realni,8);
int n;
n=Sazimanje(niz,9);
for(int i=0;i<n;i++) cout<<niz[i]<<", "; cout<<endl;
Sazimanje(realni,9);
Cijeli.citaj();
Realni.citaj();
getch();
}
