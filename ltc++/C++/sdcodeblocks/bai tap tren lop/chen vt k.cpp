#include<bits/stdc++.h>
using namespace std;
void nhap(int *a,int n){
	srand(time(NULL));
	for(int i=0;i<n;i++){
		*(a+i) = rand()%100+1;
	}
}
void inmang(int *a,int n){
	cout<<"\nmang la:"<<endl;
	for(int i=0;i<n;i++){
		cout<<"\t"<<*(a+i);
	}
}
void chen(int *a,int &n,int x,int k){
	
	for(int i=n;i>k;i--){
		a[i]=a[i-1];
	}
	a[k]=x;
	n++;
}
int main(){
	int a[30],n,x,k;
	do{
		cout<<"\nnhap so phan tu cua mang: ";
		cin>>n;
	}while(n<=0);
	nhap(a,n);
	inmang(a,n);
	cout<<"\nnhap gt can chen:";
	cin>>x;
	do{
		cout<<"\nnhap vi tri chen:";
		cin>>k;
	}while(k<0 || k>n-1);
	chen(a,n,x,k);
	inmang(a,n);
	return 0;
}
