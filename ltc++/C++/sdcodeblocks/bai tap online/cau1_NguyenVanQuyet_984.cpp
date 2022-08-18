#include<bits/stdc++.h>
using namespace std;
void nhap(int &n,float &x){
	do{
		cout<<"\n Nhap so nguyen duong n: ";
		cin>>n;
	}while(n<=0);
	cout<<"\n Nhap so thuc x: ";
	cin>>x;
}
int T(int n){
	int s=1;
	if(n>0){
		for(int i=1;i<=n;i++){
			s*= i;
		}
		return s;	
	}else{
		return 1;
	}
}
float XmuN(float x,int n){
	return pow(x,n);
}
int main(){
	float x;
	int n;
	nhap(n,x);
	float s = 2021;
	for(int i=1;i<=n;i++){
		s+=(XmuN(x,(2*i+1)))/(T(2*i+1));
	}
	cout<<"\n S(x,n) = "<<s<<endl;
	return 0;
}
