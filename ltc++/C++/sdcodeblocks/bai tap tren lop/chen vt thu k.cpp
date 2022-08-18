#include<bits/stdc++.h>
using namespace std;
void nhapmang(int *a,int n){
	srand(time(NULL));
	for(int i=0;i<n;i++){
		a[i]=rand()%100+1;
	}
}
void inmang(int *a,int n){
	cout<<"\nmang la :"<<endl;
	for(int i=0;i<n;i++){
		cout<<"\t"<<*(a+i);
	}
}
void chen(int *&a,int &n,int x,int k){
	n++;
	for(int i=n-1;i>=k-1;i--){
		a[i+1] = a[i];
	}
	a[k-1] = x;
}

int main(){
	int n,x,k;
	int *a = new int[n];
	do{
		cout<<"\nnhap so phan tu mang:";
		cin>>n;
	}while(n<=0);
	nhapmang(a,n);
	inmang(a,n);
	cout<<"\nnhap gt chen:";
	cin>>x;
	cout<<"\nnhap vt chen:";
	cin>>k;
	chen(a,n,x,k);
	inmang(a,n);
	return 0;
}
