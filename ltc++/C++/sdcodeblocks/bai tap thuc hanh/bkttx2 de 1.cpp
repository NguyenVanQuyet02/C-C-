#include<bits/stdc++.h>
#include<fstream>
using namespace std;
ofstream o;
void nhap(int *a,int n){
	cout<<"\n Nhap phan tu day: ";
	for(int i=0;i<n;i++){
		cin>>*(a+i);
	}
}
void xuat(int *a,int n){	
	cout<<"\n Day so la: ";
	for(int i=0;i<n;i++){
		cout<<*(a+i)<<"\t";
	}
}
void xuatFile(int *a,int n){
	o.open("CAU203.TXT",ios_base::out);
	o<<"\n Day so la: ";
	for(int i=0;i<n;i++){
		o<<*(a+i)<<"\t";
	}
	o.close();
}
void sapTangDanDuongGiamDanAm(int *a,int n){
	int d=0,dem=0;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(*(a+i)>0 && *(a+j)>0 &&*(a+i)>*(a+j)){
				swap(*(a+i),*(a+j));
				d++;
			}
		}
	}
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(*(a+i)<0 && *(a+j)<0 &&*(a+i)<*(a+j)){
				swap(*(a+i),*(a+j));
				dem++;
			}
		}
		
	}
	o.open("CAU203.TXT",ios_base::app);
	o<<"\n day so sau khi sap xep duong tang dan va am giam dan la: "<<endl;
	for(int i=0;i<n;i++){
		o<<*(a+i)<<"\t";
	}
	o.close();
}
int main(){
	int n;
	do{
		cout<<"\n nhap so phan tu cua day: ";
		cin>>n;
	}while(n<=0);
	int *a = new int[n];
	nhap(a,n);
	xuat(a,n);
	xuatFile(a,n);
	cout<<"\n day so sau khi sap xep duong tang dan va am giam dan la: "<<endl;
	sapTangDanDuongGiamDanAm(a,n);
	xuat(a,n);
	delete[] a;
	return 0;
}
