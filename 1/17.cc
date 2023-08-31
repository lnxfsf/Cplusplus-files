//Sastaviti šablonsku funkciju kojom se od dva uređena niza formira treći, na isti način
//uređen, niz. Sastaviti glavni program koji primjenjuje ovu funkciju nad nizovima cijelih
//brojeva i tačaka, pri čemu su koordinate tačaka cijeli brojevi kao i nad dvije tačke koje
//imaju realne koordinate. Klasu tačka realizovati kao šablonsku klasu kako bi koordinate
//mogle biti traženog tipa


#include<iostream.h>
#include<conio.h>
#include<math.h>
template<class T>
void uredi(T *prvi, int n1,T* drugi, int n2,T *treci){
for(int ia=0,ib=0,ic=0;ia<n1||ib<n2;ic++)
treci[ic]=ia==n1?drugi[ib++]:ib==n2?prvi[ia++]:prvi[ia]<\
drugi[ib]?prvi[ia++]:drugi[ib++];
}
template<class S>
class sablon{
S x;
S y;
public:
sablon(S=0,S=0);
~sablon(){};
//bool operator<(const sablon<S>&);
bool operator<(const sablon&);//Moze i bez <S>
void citaj(){cout<<"("<<x<<","<<y<<")"<<endl;}
};
template<class S>
sablon<S>::sablon(S a,S b):x(a),y(b){}
template<class S>
bool sablon<S>::operator<(const sablon& b){
return (pow(x,2)+pow(y,2))<(pow(b.x,2)+pow(b.y,2));
}
void main(){
int d1[]={1,2,5,7,9};
int d2[]={3,4,7,8};
int *d3=new int[9];
int n3;
uredi(d1,5,d2,4,d3);
cout<<"Uredjeni niz je:"<<endl;
for(int i=0;i<9;i++)cout<<" "<<d3[i];
cout<<endl;
delete []d3;
80
 sablon<int> *p;
cout<<"Koliko ima tacaka prvi niz?"<<endl;
int i1;
cin>>i1;
cout<<"Unesite niz tacaka sa cjelobrojnim koordinatama"<<endl;
p=new sablon<int>[i1];
int a,b;
for(int i=0;i<i1;i++) {cin>>a>>b; p[i]=sablon<int>(a,b);}
cout<<"Koliko ima tacaka drugi niz?";
int i2;
cin>>i2;
cout<<"Unesite niz tacaka sa cjelobrojnim koordinatama"<<endl;
sablon<int> *q;
q=new sablon<int>[i2];
for(int i=0;i<i2;i++) {cin>>a>>b; q[i]=sablon<int>(a,b);}
int i3;
i3=i2+i1;
sablon<int> *r;
r=new sablon<int>[i3];
uredi(p,i1,q,i2,r);
for(int i=0;i<i3;i++) {cout<<" "; r[i].citaj();}
cout<<endl;
delete []p;
delete []q;
delete []r;
float a1,b1;
sablon<float> t1(2.3,4.6),t4(2.5,6.8);
if(t1<t4) {
cout<<"Tacka ima koordinate: ";
t1.citaj();}
else {
cout<<"Tacka ima koordinate: ";
t4.citaj();}
getch();
}
