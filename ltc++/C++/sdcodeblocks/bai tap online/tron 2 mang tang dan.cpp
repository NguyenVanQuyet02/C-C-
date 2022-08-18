#include<bits/stdc++.h>
using namespace std;
void nhapMang(int *a,int n){
	cout<<"\n nhap mang: ";
	for(int i=0;i<n;i++){
		cin>>*(a+i);
	}
}
void inMang(int *a,int n){
	cout<<"\n mang la: ";
	for(int i=0;i<n;i++){
		cout<<*(a+i)<<"\t";
	}
}
void sapXepTangDan(int *a,int n){
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(*(a+i)>*(a+j)){
				swap(*(a+i),*(a+j));
			}
		}
	}
}
void tronHaiMang(int *a,int n,int *b,int m,int *c,int s){
	int i1=0,i2=0,i3=0;
	while(i3<s){
		if(i1>=n){
			c[i3]=b[i2];
			i2++;
		}else if(i2>=m){
			c[i3]=a[i1];
			i1++;
		}else if(a[i1]<b[i2]){
			c[i3]=a[i1];
			i1++;
		}else {
			c[i3]=b[i2];
			i2++;
		}
		i3++;
	}
}
int main(){
	int n;
	do{
		cout<<"\n nhap so phan tu cua mang: ";
		cin>>n;
	}while(n<1 || n>100);
	int *a= new int[n];
	nhapMang(a,n);
	inMang(a,n);
	int m;
	do{
		cout<<"\n nhap so phan tu cua mang thu 2: ";
		cin>>m;
	}while(m<=0);
	int *b= new int[m];
	nhapMang(b,m);
	int s=m+n;
	int *c = new int[s];
	sapXepTangDan(a,n);
	sapXepTangDan(b,m);
	tronHaiMang(a,n,b,m,c,s);
	cout<<"\nmang sau khi tron la: ";
	inMang(c,s);
	delete[] a;
	delete[] b;
	delete[] c;
	return 0;
}
