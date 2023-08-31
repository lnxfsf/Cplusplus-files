//Napisati program za računanje težine tijela. Ako je zadat jedan argument računati težinu
//na površini zemlje Q=m*9.81, ako su zadata dva argumenta računati na visini r iznad
//zemlje: Q=6.672*10-11*m*4.9156*1024/(6371377+r)2; a ako je zadato m, r i M težinu na
//rastojanju r od planete mase M: Q=6.672*10-11*m*M/r2.



#include<iostream.h>

float tezina(int);
float tezina(int,int);
float tezina(int,int,int);

main(){

int n, m, M, r;

cout<<"Koliko argumenata zelite da unesete?"<<endl;
cin>> n;

if(n==1){
	cin>>m;
	cout<<tezina(m)<<endl;
}else if(n==2){
	cin>>m>>r;
	cout<<tezina(m,r)<<endl;
}else {
	cin>>m>>r>>M;
	cout<<tezina(m,r,M)<<endl;
}

}

float tezina(int a){
	const float k=9.81;

	return a*k;
}

float tezina(int a, int b){
	const float k=6.672*pow(10,-11)*4.9156*pow(10,24), k1=6371377;

	return k*a/pow((k1+b),2);
}

float tezina(int a, int b, int c){
	const float k=pow(10,-11)*6.672;

	return k*a*c/pow(b,2);
}
