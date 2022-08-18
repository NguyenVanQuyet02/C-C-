#include<bits/stdc++.h>
using namespace std;
void nhapmang(int *a,int n){
	srand(time(NULL));
	for(int i=0;i<n;i++){
		*(a+i)=rand()%99+1;
	}
}
void inmang(int *a,int n){
	cout<<"\nmang la"<<endl;
	for(int i=0;i<n;i++){
		cout<<"\t"<<*(a+i);
	}
}
void chencuoimang(int *a,int &n,int x){
	//n++;
	a[n-1]=x;
}
void sclecuoimang(int *a,int &n){
	n++;
	for(int i=0;i<n;i++){
		if(a[i]%2!=0){
			//chencuoimang(a,n,a[i]);
			//n++;
			a[n-1]=a[i];
			
		}
	}
}
int main(){
	int n;
	do{
		cout<<"\nnhap so phan tu cua mang: ";
		cin>>n;
	}while(n<=0);
	int *a = new int[n];
	nhapmang(a,n);
	inmang(a,n);
	sclecuoimang(a,n);
	inmang(a,n);
	return 0;
	
}
