#include<bits/stdc++.h>
using namespace std;
void nhap(float &x,float &y,int &n){
	do{
		cout<<"\n Nhap 2 so thuc a, b (a<b): ";
		cin>>x>>y;
	}while(x>=y);
	do{
		cout<<"\n Nhap so nguyen n (0<n<50): ";
		cin>>n;
	}while(n<=0 || n>=50);
}
void F(float x,float y){
	cout<<"\nF(a,b) = "<<(exp(fabs(x)) + fabs(y)+ sin(2*x))<<endl;
}
void P(float x,int n){
	float s = 30620;
	for(int i = 2;i<=n;i++){
		s+= (pow(x,i))/(pow(i,i));
	}
	cout<<"\n P(x,n) = "<<s<<endl;
}
int main(){
	float a,b;
	int n;
	nhap(a,b,n);
	F(a,b);
	P(a,n);
	return 0;
}
