#include<bits/stdc++.h>
using namespace std;
void nhap(int &a,int &b){
	cout<<"\n nhap 2 so nguyen a va b: ";
	cin>>a>>b;
	if(a>b){
		int temp = a;
		a=b;
		b= temp;
	}
}
int TongChiaHet2Va3(int a,int b){
	int s=0;
	int d=0;
	for(int i=a;i<=b;i++){
		if(i%2==0 && i%3==0){
			s+=i;
			d++;
		}
	}if(d>0){
		return s;
		
	}else{
		return 0;
	}
}
float F(float x,int n){
	if(n<0){
		return 1;
	}
	float s = 2021 * fabs(n-x);
	for(int i=1;i<=n;i++){
		s+= (x)/(2*n-i);
	}
	return s;
}
int main(){
	int a,b;
	float x;
	nhap(a,b);
	cout<<"\n Nhap so thuc: ";
	cin>>x;
	cout<<"\n Tong cac so chia het cho 2 va 3 trong doan [a,b] la: "<<TongChiaHet2Va3(a,b)<<endl;
	cout<<"\n Tong cac so chia het cho 2 va 3 trong doan [1.a] la: "<<TongChiaHet2Va3(1,a)<<endl;
	cout<<"\n T = "<<F(x,b)-F(x,a)<<endl;
	return 0;
}
