#include<bits/stdc++.h>
using namespace std;
void timKyTu(char *a,int n){
	char c;
	cout<<"\nNhap ky tu can tim: ";
	cin>>c;
	int d=0;
	for(int i=0;i<n;i++){
		if(*(a+i)==c){
			d++;
		}
	}
	if(d>0){
		cout<<"\n xau co so ky tu can tim la: "<<d<<endl;
	}else{
		cout<<"\n xau khong co ky tu can tim"<<endl;
	}
}
void xoaVt(char *a,int &n,int k){
	for(int i=k;i<n;i++){
		*(a+i)=*(a+i+1);
	}
	n--;
}
void xoaKyTu(char *a,int &n){
	char c;
	cout<<"\nNhap ky tu can xoa: ";
	cin>>c;
	int d=0;
	for(int i=0;i<n;i++){
		if(*(a+i)==c){
			d++;
			break;
		}
	}
	if(d>0){
		for(int i=0;i<n;i++){
			if(*(a+i)==c){
				xoaVt(a,n,i);
				i--;
			}
		}
	}else{
		cout<<"\n xau khong co ky tu can xoa"<<endl;
	}
}
void chenVt(char *a,int &n,int k){
	char c;
	for(int i=n-1;i>=k;i--){
		*(a+i)=*(a+i-1);
	}
	*(a+k)=c;
}
void chenVaoSauKyTuA(char *a,int &n){
	int d=0;
	for(int i=0;i<n;i++){
		if(*(a+i)=='a'){
			d++;
			break;
		}
	}
	if(d>0){
		char c;
		cout<<"\nNhap ky tu can chen: ";
		cin>>c;
		for(int i=0;i<n;i++){
			if(*(a+i)=='a'){
				chenVt(a,n,i);
				i++;
			}
		}
	}else{
		cout<<"\n xau khong co ky tu a"<<endl;
	}
}
int main(){
	char a[100];
	cout<<"\n Nhap xau: ";
	fflush(stdin);
	gets(a);
	int n = strlen(a);
	cout<<"\n xau vua nhap la: ";
	puts(a);
	timKyTu(a,n);
	xoaKyTu(a,n);
	cout<<"\n xau vua xoa la: ";
	puts(a);
	chenVaoSauKyTuA(a,n);
	cout<<"\n xau vua chen la: ";
	puts(a);
	return 0;
}
