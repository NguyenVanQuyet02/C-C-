#include<bits/stdc++.h>
using namespace std;
void NhapXau(char *a){
	cout<<"\nnhap xau ky tu: ";
	gets(a);
}
void InXau(char *a){
	cout<<"\nxau vua nhap la: ";
	puts(a);
}
void KtxauChuaTu(char *a,int n) {
	int d=0;
	for(int i=0;i<n;i++){
		if(*(a+i)=='B' && *(a+i+1)=='I' && *(a+i+2)=='S'){
			d++;
		}
	}
	if(d>0){
		cout<<"\n chuoi co chua tu BIS "<<endl;
	}else{
		cout<<"\n chuoi khong chua tu BIS "<<endl;
	}
}
void xoavitri(char *a,int &n,int k){
	for(int i=k;i<n-1;i++){
		*(a+i)=*(a+i+1);
	}
	
}
void XoaKyTu(char *a,int &n){
	char c;
	cout<<"nhap ky tu can xoa: ";
	fflush(stdin);
	c=getchar();
	int d=0;
	for(int i=0;i<n;i++){
		if(*(a+i)==c){
			d++;
		}
	}
	if(d>0){
		for(int i=0;i<n;i++){
			if(*(a+i)==c){
				xoavitri(a,n,i);
				i--;
			}
		}
		puts(a);
	}else{
		cout<<"\nxau khong co ky tu can xoa"<<endl;
		puts(a);
	}
}
void ChenKyTu(char *a,int &n){
	int k;
	do{
		cout<<"\n nhap vi tri chen: ";
		cin>>k;
	}while(k<0 || k>n);
	char t;
	cout<<"\n nhap ky tu chen: ";
	fflush(stdin);
	t = getchar();
	for(int i=n;i>k;i--){
		*(a+i)=*(a+i-1);
	}*(a+k)=t;
	n++;
}

int main(){
	char a[100];
	NhapXau(a);
	int n = strlen(a);
	InXau(a);
	KtxauChuaTu(a,n);
	XoaKyTu(a,n);
	ChenKyTu(a,n);
	puts(a);
	return 0;
}
