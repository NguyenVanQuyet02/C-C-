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
		cout<<"\t"<<a[i];
	}
}
int ktsnt(int n){
	if(n<2){
		return 0;
	}for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			return 0;
		}
	}
	return 1;
}
void chenvt(int *a,int &n,int x,int k){
	for(int i=n;i>k;i--){
		a[i] = a[i-1];
	}a[k]=x;
	n++;
}
void chenssntmaxvaodaumang(int *a,int &n){
	int m=0,d=0,k=0;
	for(int i=0;i<n;i++){
		if(ktsnt(a[i])){
			m=a[i];
			d++;
			break;
		}
	}if(d>0){
		for(int i=0;i<n;i++){
			if(ktsnt(a[i])==1 && m<a[i]){
				m=a[i];
			}
		}
		cout<<"\nnhap vt chen:";
		cin>>k;
		chenvt(a,n,m,k);
	}else{
		cout<<"\nmang khong co so nguyen to"<<endl;
	}
}
int main(){
	int n;
	int *a=new int[n];
	do{
		cout<<"\nnhap so phan tu cua mag:";
		cin>>n;
	}while(n<=0);
	nhapmang(a,n);
	inmang(a,n);
	chenssntmaxvaodaumang(a,n);
	inmang(a,n);
	return 0;
}
