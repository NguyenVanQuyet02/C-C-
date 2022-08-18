#include<bits/stdc++.h>
using namespace std;
void nhap(float &x,float &y,int &n){
	cout<<"\n nhap 2 so thuc: ";
	cin>>x>>y;
	do{
		cout<<"\n nhap so nguyen duong: ";
		cin>>n;
	}while(n<0);
}
void DienTichHCN(float x,float y){
	cout<<"\n Dien tich hinh chu nhat la: "<<x*y<<endl;
}
void TongSoChanChiaHetCho3(int n){
	int s=0;
	int d=0;
	for(int i=1;i<=n;i++){
		if(i%2==0 && i%3==0){
			s+=i;
			d++;
		}
	}
	if(d>0){
		cout<<"\n Tong so chan va chia het cho 3 la: "<<s<<endl;
	}else{
		cout<<"\n Khong co so chan va chia het cho 3"<<endl;
	}
}
void F1(float x,int n){
	float s=2016*pow(x,n);
	for(int i=1;i<=n;i++){
		s+= (pow(x,i))/(pow(3,i));
	}
	cout<<"\n F1 = "<<s<<endl;
}
void F2(float x,int n){
	if(n>10){
		cout<<"\n F2 = "<<2016*x<<endl;
		return;
	}else{
		float s=exp(x);
		for(int i=1;i<=n;i++){
			s+=i;
		}
		cout<<"\n F2 = "<<s<<endl;
	}
}
int main(){
	float x,y;
	int n;
	nhap(x,y,n);
	DienTichHCN(x,y);
	TongSoChanChiaHetCho3(n);
	F1(x,n);
	F2(x,n);
	return 0;
}
