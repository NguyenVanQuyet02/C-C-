#include<bits/stdc++.h>
using namespace std;
void nhapmang(int *a,int n){
	for(int i=0;i<n;i++){
		cin>>*(a+i);
	}
}
void inmang(int *a,int n){
	cout<<"\nmang la"<<endl;
	for(int i=0;i<n;i++){
		cout<<"\t"<<*(a+i);
	}
}
void tachMangChanLe(int *a,int n,int *b,int &m,int *c,int &k){
	m = k =0;
	for(int i=0;i<n;i++){
		if(*(a+i)%2==0){
			b[m]=*(a+i);
			m++;
		}else{
			c[k]=*(a+i);
			k++;
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
	int m=0,k=0;
	int *b = new int[m];
	int *c = new int[k];
	tachMangChanLe(a,n,b,m,c,k);
	inmang(b,m);
	inmang(c,k);
	delete[] a;
	return 0;
}
