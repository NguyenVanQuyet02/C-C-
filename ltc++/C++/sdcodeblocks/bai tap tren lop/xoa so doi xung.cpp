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
int ktsodoixung(int n){
	int temp = n;
	int dx=0;
	while(n>0){
		dx = dx*10 + n%10;
		n/=10;
	}
	if(dx==temp){
		return 1;
	}else{
		return 0;
	}
}
void xoasodoixung(int *a,int &n){
	int d=0;
	for(int i=0;i<n;i++){
		if(ktsodoixung(a[i])){
			xoavt(a,n,i);
			i--;
			d++;
		}
	}
	if(d>0){
		inmang(a,n);
	}else{
		cout<<"\nmang khong co so doi xung"<<endl;
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
	xoasodoixung(a,n);
	return 0;
}
