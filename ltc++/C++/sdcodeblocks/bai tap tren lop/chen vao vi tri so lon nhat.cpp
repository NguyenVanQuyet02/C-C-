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
int timmax(int *a,int n){
	int max = a[0];
	for(int i=0;i<n;i++){
		if(max<a[i]){
			max = a[i];
		}
	}
	return max;
}
void chenvt(int *&a,int &n,int x,int k){
	for(int i=n;i>k;i--){
		a[i] = a[i-1];
	}a[k] = x;
	n++;
}
void chenvaovitrisolonnhat(int *&a,int &n){
	int x;
	cout<<"\nnhap gt can chen:";
	cin>>x;
	int max = timmax(a,n);
	for(int i=0;i<n;i++){
		if(max==a[i]){
			chenvt(a,n,x,i);
			break;
		}
	}
}
int main(){
	int n;
	int *a = new int[n];
	do{
		cout<<"\nnhap so phan tu mang:";
		cin>>n;
	}while(n<=0);
	nhapmang(a,n);
	inmang(a,n);
	chenvaovitrisolonnhat(a,n);
	inmang(a,n);
	return 0;
}
