#include<bits/stdc++.h>
using namespace std;
void nhapmang(int *a,int n){
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
}
void inmang(int *a,int n){
	cout<<"\nmang la:"<<endl;
	for(int i=0;i<n;i++){
		cout<<"\t"<<*(a+i);
	}
}
void xoavt(int *a,int &n,int k){
	for(int i=k;i<n-1;i++){
		a[i]=a[i+1];
	}
	n--;
}
int ktsohoanthien(int n){
	int s=0;
	for(int i=1;i<n;i++){
		if(n%i==0){
			s+= i;
		}
	}if(s==n){
		return 1;
	}else{
		return 0;
	}
}
void xoasohoanthien(int *a,int &n){
	int d=0;
	for(int i=0;i<n;i++){
		if(ktsohoanthien(a[i])){
			xoavt(a,n,i);
			i--;
			d++;
		}
	}
	if(d>0){
		inmang(a,n);
	}else{
		cout<<"\nmang khong co so hoan thien"<<endl;
	}
}
int main(){
	int n;
	int *a=new int[n];
	do{
		cout<<"\nnhap so phan tu cua mang:";
		cin>>n;
	}while(n<=0);
	nhapmang(a,n);
	inmang(a,n);
	xoasohoanthien(a,n);
	return 0;
}
