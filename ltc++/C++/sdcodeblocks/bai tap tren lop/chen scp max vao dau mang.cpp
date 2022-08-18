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
int ktscp(int n){
	int k = sqrt(n);
	if(pow(k,2)==n){
		return 1;
	}
	return 0;
}
void chenvt(int *a,int &n,int x,int k){
	for(int i=n;i>k;i--){
		a[i] = a[i-1];
	}a[k]=x;
	n++;
}
void chenscpmaxvaodaumang(int *a,int &n){
	int scpmax=0,d=0,k=0;
	for(int i=0;i<n;i++){
		if(ktscp(a[i])){
			scpmax=a[i];
			d++;
			break;
		}
	}if(d>0){
		for(int i=0;i<n;i++){
			if(ktscp(a[i])==1 && scpmax<a[i]){
				scpmax=a[i];
			}
		}
		cout<<"\nnhap vt chen:";
		cin>>k;
		chenvt(a,n,scpmax,k);
	}else{
		cout<<"\nmang khong co so chinh phuong"<<endl;
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
	chenscpmaxvaodaumang(a,n);
	inmang(a,n);
	return 0;
}
