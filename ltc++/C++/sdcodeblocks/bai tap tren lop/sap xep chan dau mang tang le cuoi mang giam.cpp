
#include<bits/stdc++.h>
using namespace std;
void nhapmang(int *a,int n){
	for(int i=0;i<n;i++){
		cin>>*(a+i);
	}
}
void inmang(int *a,int n){
	cout<<"\nmang la:"<<endl;
	for(int i=0;i<n;i++){
		cout<<"\t"<<*(a+i);
	}
}
void hoanvi(int &a,int &b){
	int tg =a;
	a=b;
	b=tg;
}
void chandaumangtanglecuoimanggiam(int *a,int n){
	int d=0;
	for(int i=0;i<n-1;i++){
		for(int j=n-1;j>=i;j--){
			if(a[i]%2!=0 && a[j]%2==0){
				hoanvi(a[i],a[j]);
				d++;
			}
		}
	}
	for(int i=0;i<n;i++){
		for(int j=i+i;j<n;j++){
			if(a[i]%2==0 && a[j]%2==0 &&a[i]>a[j]){
				hoanvi(a[i],a[j]);
			}
			else if(a[i]%2!=0 && a[j]%2!=0 &&a[i]<a[j]){
				hoanvi(a[i],a[j]);
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
	chandaumangtanglecuoimanggiam(a,n);
	inmang(a,n);
	delete[] a;
	return 0;
}
