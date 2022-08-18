#include<bits/stdc++.h>
using namespace std;
void nhap(float *a,int n){
	cout<<"\n Nhap phan tu day: ";
	for(int i=0;i<n;i++){
		cin>>*(a+i);
	}
}
void xuat(float *a,int n){	
	cout<<"\n Day so la: ";
	for(int i=0;i<n;i++){
		cout<<*(a+i)<<"\t";
	}
}
void tbcSoChiaHet3Va5(float *a,int n){
	float d=0;
	float s=0;
	for(int i=0;i<n;i++){
		if(a[i] % 3==0 && a[i] % 5==0){
			s+=a[i];
			d++;
		}
	}
	if(d>0){
		cout<<"\n TBC cac so chia het cho 3 va 5 la: "<<s/d<<endl;
	}
	else{
		cout<<"\n Trong day so khong co phan tu chia het cho 3 va 5"<<endl;
	}
}

int main(){
	int n;
	do{
		cout<<"\n nhap so phan tu cua day: ";
		cin>>n;
	}while(n<=0);
	float *a = new float[n];
	nhap(a,n);
	xuat(a,n);
	tbcSoChiaHet3Va5(a,n);
	delete[] a;
	return 0;
}
