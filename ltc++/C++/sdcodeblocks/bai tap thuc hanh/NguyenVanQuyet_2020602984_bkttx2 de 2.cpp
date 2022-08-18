#include<bits/stdc++.h>
#include<fstream>
using namespace std;
ofstream o;
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
void xuatFile(float *a,int n){
	o.open("CAU202.TXT",ios_base::out);
	o<<"\n Day so la: ";
	for(int i=0;i<n;i++){
		o<<*(a+i)<<"\t";
	}
	o.close();
}
void duongvedauamvecuoi(float *a,int n){
	o.open("CAU202.TXT",ios_base::app);
	for(int i=0;i<n-1;i++){
		for(int j=n-1;j>=i;j--){
			if(a[i]<0 && a[j]>0){
				swap(a[i],a[j]);
			}
		}
	}
	o<<"\n Day so sau khi sap xep duong ve dau am ve cuoi mang la: ";
	for(int i=0;i<n;i++){
		o<<*(a+i)<<"\t";
	}
	o.close();
}
void timMaxDuong(float *a,int n){
	float max =0;
	int d=0,dem=0;
	for(int i=0;i<n;i++){
		if(*(a+i)>0){
			max = *(a+i);
			d++;
			break;
		}
	}
	if(d>0){
		
		for(int i=0;i<n;i++){
			if(max<*(a+i)){
				max = *(a+i);
			}
		}
		for(int i=0;i<n;i++){
			if(*(a+i)==max){
				dem++;
			}
		}
		if(dem==n){
			cout<<"\n Khong tim duoc phan tu duong lon nhat"<<endl;
			return;
		}else{
			cout<<"\n Phan tu duong lon nhat trong day la: "<<max<<endl;
			cout<<"\n Phan tu duong lon nhat xuat hien so lan la: "<<dem<<endl;
		}
	}else{
		cout<<"\n Mang khong co phan tu duong"<<endl;
	}
}
void chenvt(float *a,int &n,int k,int x){
	for(int i=n;i>k;i--){
		a[i]=a[i-1];
	}
	a[k]=x;
	n++;
}
void chenSauPhanTuNhoHon(float *a,int &n){
	float x;
	int d=0;
	cout<<"\n Nhap gt chen: ";
	cin>>x;
	for(int i=0;i<n;i++){
		if(*(a+i)<x){
			chenvt(a,n,i+1,x);
			d++;
			break;
		}
	}
	if(d>0){
		cout<<"\n Mang sau khi chen : ";
		xuat(a,n);
	}else{
		cout<<"\n Mang khong co phan tu nho hon "<<x<<endl;
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
	xuatFile(a,n);
	cout<<"\n Day so sau khi sap xep duong ve dau mang am ve cuoi mang la:"<<endl;
	duongvedauamvecuoi(a,n);
	xuat(a,n);
	timMaxDuong(a,n);
	chenSauPhanTuNhoHon(a,n);
	delete[] a;
	return 0;
}
