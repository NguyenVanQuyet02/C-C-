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
void capphatonho(int *&a,int &n){
	
}
void chen(int *&a,int &n,int x,int k){
	n++;
	for(int i=n-1;i>=k;i--){
		a[i+1]=a[i];
	}
	a[k]=x;
}
int main(){
	int n,x,k;
	int *a = new int[n];
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
	cout<<"size"<<sizeof(a);
	delete[] a;
	return 0;
}
