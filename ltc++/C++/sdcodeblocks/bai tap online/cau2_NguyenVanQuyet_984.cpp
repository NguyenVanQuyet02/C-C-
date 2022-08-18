#include<bits/stdc++.h>
#include<fstream>
using namespace std;
ofstream o;
void nhapmang(float *a,int n){
	for(int i=0;i<n;i++){
		cin>>*(a+i);
	}
}
void inmang(float *a,int n){
	cout<<"\nmang la"<<endl;
	for(int i=0;i<n;i++){
		cout<<"\t"<<*(a+i);
	}
}
void inTep(float *a,int n){
	o.open("ABC12.txt",ios_base::out);
	o<<"\nmang la"<<endl;
	for(int i=0;i<n;i++){
		o<<"\t"<<*(a+i);
	}
	o.close();
}
void sapXepGiamDan(float *a,int n){
	o.open("ABC12.txt",ios_base::app);
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(*(a+i)<*(a+j)){
				swap(*(a+i),*(a+j));
			}
		}
	}
	o<<"\nmang sau khi sap xep giam dan la"<<endl;
	for(int i=0;i<n;i++){
		o<<"\t"<<*(a+i);
	}
	o.close();
}
void tongPQ(float *a,int n){
	float s =0,p=0,q=0,sum=0;
	p = *a + *(a+n-1);
	int d=0;
	for(int i=0;i<n;i++){
		if(*(a+i)>0){
			sum +=*(a+i);
			d++;
		}
	}
	q = sum/d;
	cout<<"\n P + Q = "<<p+q<<endl;
}
void chenTruocSoLe(float *a,int &n){
	int d=0;
	float x=0;
	cout<<"\nNhap phan tu x can chen: ";
	cin>>x;
	cout<<"\n do mang  thuc nen khong the kiem tra phan tu le de chen"<<endl;
}
int main(){
	int n;
	do{
		cout<<"\nnhap so phan tu cua mang: ";
		cin>>n;
	}while(n<=0);
	float *a = new float[n];
	nhapmang(a,n);
	inmang(a,n);
	inTep(a,n);
	cout<<"\n Mang sau khi sap xep giam dan la:";
	sapXepGiamDan(a,n);
	inmang(a,n);
	tongPQ(a,n);
	chenTruocSoLe(a,n);
	inmang(a,n);
	delete[] a;
	return 0;
}
