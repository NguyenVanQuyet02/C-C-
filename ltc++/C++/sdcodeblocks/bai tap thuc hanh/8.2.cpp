#include<bits/stdc++.h>
using namespace std;
void NhapMang(int *a,int n){
	cout<<"\n nhap mang:"<<endl;
	for(int i=0;i<n;i++){
		cin>>*(a+i);
	}
}

void InMang(int *a,int n){
	cout<<"\n mang la: ";
	for(int i=0;i<n;i++){
		cout<<"\t"<<*(a+i);
	}
}

void SapTangDan(int *a,int n){
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]>a[j]){
				swap(a[i],a[j]);
			}
		}
	}
}
void DemPhanTu(int *a,int n){
	int d=0;
	for(int i=0;i<n;i++){
		if(*(a+i)>=10 && *(a+i)<=20){
			d++;
		}
	}
	if(d>0){
		cout<<"\n mang co "<<d<<" phan tu thuoc [10,20]"<<endl;
	}else{
		cout<<"\n mang khong co phan tu thuoc [10,20]"<<endl;
	}
}
void Kt3ChanLienTiep(int *a,int n){
	int d=0;
	for(int i=0;i<n;i++){
		if(*(a+i)%2==0 && *(a+i+1)%2==0 && *(a+i+2)%2==0){
			d++;
		}
	}
	if(d>0){
		cout<<"\n mang ton tai ba so chan lien tiep"<<endl;
	}else{
		cout<<"\n mang khong ton tai ba so chan lien tiep"<<endl;
	}
}
int main(){
	int n;
	do{
		cout<<"\n nhap so phan tu mang: ";
		cin>>n;
	}while(n<=0);
	int *a = new int[n];
	NhapMang(a,n);
	SapTangDan(a,n);
	InMang(a,n);
	DemPhanTu(a,n);
	Kt3ChanLienTiep(a,n);
	
}
