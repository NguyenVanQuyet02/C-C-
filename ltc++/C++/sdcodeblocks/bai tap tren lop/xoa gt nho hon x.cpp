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
		cout<<"\t"<<*(a+i);
	}
}
void xoavt(int *a,int &n,int k){
	for(int i=k;i<n-1;i++){
		a[i]=a[i+1];
	}
	n--;
}
void xoalonhonx(int *a,int &n,int x){
	int d=0;
	cout<<"\nnhap gt x:";
	cin>>x;
	for(int i=0;i<n;i++){
		if(a[i]>x){
			xoavt(a,n,i);
			i--;
			d++;
		}
	}
	if(d>0){
		inmang(a,n);
	}else{
		cout<<"\nmang khong co gt lon hon x"<<endl;
	}
}
int main(){
	int n;
	int *a=new int[n];
	do{
		cout<<"\nnhap so phan tu cua mang:";
		cin>>n;
	}while(n<=0);
	nhapmang(a,n);
	inmang(a,n);
    int x;
	xoalonhonx(a,n,x);
	return 0;
}
