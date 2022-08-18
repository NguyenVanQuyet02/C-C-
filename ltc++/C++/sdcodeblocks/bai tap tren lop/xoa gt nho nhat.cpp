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
void xoanhonhat(int *a,int &n){
	int min=a[0];
	for(int i=0;i<n;i++){
		if(min>a[i]){
			min=a[i];
		}
	}
	for(int i=0;i<n;i++){
		if(a[i]==min){
			xoavt(a,n,i);
			i--;
			
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
	xoanhonhat(a,n);
	inmang(a,n);
	return 0;
}
