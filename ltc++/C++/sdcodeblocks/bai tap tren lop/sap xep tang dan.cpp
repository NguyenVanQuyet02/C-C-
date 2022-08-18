// sap xep tang dan
#include<bits/stdc++.h>
using namespace std;
void nhapmang(int *a,int n){
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
void sapxeptangdan(int *a,int n){
	int tg=0;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]>a[j]){
				tg = a[i];
				a[i] = a[j];
				a[j]=tg;
			}
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
	sapxeptangdan(a,n);
	inmang(a,n);
	delete[] a;
	return 0;
}
