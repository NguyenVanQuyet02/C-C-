#include<bits/stdc++.h>
using namespace std;
void nhap(int *a,int n){
	srand(time(NULL));
	for(int i=0;i<n;i++){
		*(a+i) = rand()%100+1;
	}
}
void in(int *a,int n){
	cout<<"\nmang la:"<<endl;
	for(int i=0;i<n;i++){
		cout<<"\t"<<*(a+i);
	}
}
//void giaiphongonho(int *&a,int &n){
//	int *temp = new int[n];
//	for(int i=0;i<n;i++){
//		temp[i]=a[i];
//	}
//	delete[] a;
//	a = new int[n-1];
//	for(int i=0;i<n;i++){
//		a[i] = temp[i];
//	}
//	delete[] temp;
//}
void xoavitri(int *&a,int &n,int k){
	for(int i=k;i<n;i++){
		a[i]=a[i+1];
		//giaiphongonho(a,n);
	}
	n--;
}
void xoaduongle(int *a,int &n){
	for(int i=0;i<n;i++){
		if (a[i]>0 && a[i]%2!=0){
			xoavitri(a,n,i);
			i--;
		}
	}
}
int main(){
	int n,k;
	int *a = new int[n];
	do{
		cout<<"\nnhap so phan tu cua mang: ";
		cin>>n;
	}while(n<=0);
	nhap(a,n);
	in(a,n);
	
	xoaduongle(a,n);
	in(a,n);
	delete[] a;
	return 0;
}
