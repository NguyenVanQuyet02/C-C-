// sap xep tang dan
#include<bits/stdc++.h>
using namespace std;
void nhapmang(int *a,int n){
	for(int i=0;i<n;i++){
		cin>>*(a+i);
	}
}
void inmang(int *a,int n){
	cout<<"\nmang la:"<<endl;
	for(int i=0;i<n;i++){
		cout<<"\t"<<*(a+i);
	}
}
void hoanvi(int &a,int &b){
	int tg =a;
	a=b;
	b=tg;
}
void duongvedauamvecuoi(int *a,int n){
	for(int i=0;i<n-1;i++){
		for(int j=n-1;j>=i;j--){
			if(a[i]<0&&a[j]>0){
				hoanvi(a[i],a[j]);
			}
		}
	}
}
int main(){
	int n;
	int *a = new int[n];
	do{
		cout<<"\nnhap so phan tu cua mang:";
		cin>>n;
	}while(n<=0);
	nhapmang(a,n);
	inmang(a,n);
	duongvedauamvecuoi(a,n);
	inmang(a,n);
	delete[] a;
	return 0;
}
