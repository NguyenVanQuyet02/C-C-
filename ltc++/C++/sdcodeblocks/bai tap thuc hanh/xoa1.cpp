#include<iostream>
using namespace std;
int a[50], n;
void nhapmang(){
	cout<<"nhap n= ";  cin>>n;
	for(int i=0;i<n;i++){
		cout<<"a["<<i<<"] = ";
		cin>>a[i];
	}
}
void xuatmang(){
	cout<<"mang vua nhap la: ";
	for(int i=0;i<n;i++){
		cout<<a[i]<<"\t";
	}
}
void songuyentonhonhat(){
	int m,d=0;
	for(int i=0;i<n;i++){
		if(a[n-1] % a[i] ==0)
		d++;
	}
	if(d>2) cout<<"khong co so nguyen to";
	else{
	for(int i=1;i<m;i++)
		if(m<a[i]) 
		m=a[i];
		cout<<"so nguyen to lon nhat la: "<<m;
	}
}
int main(){
	int m,d=0;
	nhapmang();
	xuatmang();
	songuyentonhonhat();
}
