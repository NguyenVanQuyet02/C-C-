#include<bits/stdc++.h>
#include<fstream>
using namespace std;
ofstream o;
void nhap(float *a,int n){
	cout<<"\n Nhap phan tu mang: "<<endl;
	for(int i=0;i<n;i++){
		cin>>*(a+i);
	}
}
void xuat(float *a,int n){
	o.open("MANG1.TXT",ios_base::out);
	o<<"\n Mang la: ";
	for(int i=0;i<n;i++){
		o<<"\t"<<*(a+i);
	}
	o.close();
}
void timmax(float *a,int n){
	float max = *a;
	o.open("MAX.TXT",ios_base::app);
	for(int i=0;i<n;i++){
		if(max<*(a+i)){
			max = *(a+i);
		}
	}
	o<<"\n phan tu lon nhat la: "<<max<<endl;
	o.close();
}
int main(){
	int n;
	do{
		cout<<"\n Nhap so phan tu mang: ";
		cin>>n;
	}while(n<=0);
	float *a = new float[n];
	nhap(a,n);
	xuat(a,n);
	timmax(a,n);
	return 0;
}
