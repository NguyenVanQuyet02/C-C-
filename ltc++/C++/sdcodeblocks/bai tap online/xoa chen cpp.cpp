#include<bits/stdc++.h>
using namespace std;
void nhapmang(int *a,int n){
	srand(time(NULL));
	for(int i=0;i<n;i++){
		*(a+i)=rand()%99+1;
	}
}
void inmang(int *a,int n){
	cout<<"\nmang la"<<endl;
	for(int i=0;i<n;i++){
		cout<<"\t"<<*(a+i);
	}
}
void xoavitrik(int *a,int &n){
	int k=0;
	do{
		cout<<"\nnhap vi tri xoa: ";
		cin>>k;
	}while(k<0 || k>n-1);
	for(int i=k;i<n-1;i++){
		*(a+i)=*(a+i+1);
	}
	n--;
}
void xoavitrithuk(int *a,int &n){
	int k=0;
	do{
		cout<<"\nnhap thu vi tri xoa: ";
		cin>>k;
	}while(k<0 || k>n-1);
	for(int i=k-1;i<n-1;i++){
		*(a+i)=*(a+i+1);
	}
	n--;
}
int ktsnt(int n){
	if(n<2){
		return 0;
	}for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			return 0;
		}
	}
	return 1;
}
void xoavt(int *a,int &n,int k){
	for(int i=k;i<n-1;i++){
		*(a+i)=*(a+i+1);
	}
	n--;
}
void xoasnt(int *a,int &n){
	int d=0;
	for(int i=0;i<n;i++){
		if(ktsnt(*(a+i))){
			xoavt(a,n,i);
			i--;
			d++;
		}
	}
	if(d>0){
		cout<<"\nmang sau khi xoa snt la:"<<endl;
		inmang(a,n);
	}else{
		cout<<"\nmang khong co snt"<<endl;
		inmang(a,n);
	}
}
void chendaumang(int *a,int &n){
	int x;
	cout<<"\nnhap gt chen vao dau mang: ";
	cin>>x;
	n++;
	for(int i=n;i>0;i--){
		*(a+i)=*(a+i-1);
	}
	*a=x;
}
void chencuoimang(int *a,int &n){
	int x;
	cout<<"\nnhap gt chen vao cuoi mang: ";
	cin>>x;
	*(a+n)=x;
	n++;
}
void chenvitrik(int *a,int &n){
	int k=0,x=0;
	do{
		cout<<"\nnhap vi tri chen: ";
		cin>>k;
	}while(k<0 || k>n+1);
	cout<<"\nnhap gt chen: ";
	cin>>x;
	n++;
	for(int i=n;i>k;i--){
		*(a+i)=*(a+i-1);
	}
	*(a+k)=x;
}
void chenvitrithuk(int *a,int &n){
	int k=0,x=0;
	do{
		cout<<"\nnhap thu vi tri chen: ";
		cin>>k;
	}while(k<0 || k>n+1);
	cout<<"\nnhap gt chen: ";
	cin>>x;
	n++;
	for(int i=n-1;i>=k-1;i--){
		*(a+i)=*(a+i-1);
	}
	*(a+k-1)=x;

}
// chen vao sau cac so chan
void chenVt(int *a,int &n,int x,int k){
	for(int i= n;i>k;i--){
		*(a+i) = *(a+i-1);
	}
	*(a+k+1)=x;
	n++;
}
void chenSauSoChan(int *a,int &n){
	int d=0;
	for(int i=0;i<n;i++){
		if(*(a+i)%2==0){
			d++;
			break;
		}
	}
	int x =0;
	cout<<"\n Nhap gia tri can chen sau so chan: ";
	cin>>x;
	if(d>0){
		for(int i=0;i<n;i++){
			if(*(a+i)%2==0){
				chenVt(a,n,x,i);
				i++;
			}
		}
	}else{
		cout<<"\n Mang khong co gia tri chan de chen"<<endl;
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
//	xoavitrik(a,n);
//	inmang(a,n);
//	xoavitrithuk(a,n);
//	inmang(a,n);
//	xoasnt(a,n);
//	chendaumang(a,n);
//	inmang(a,n);
//	chencuoimang(a,n);
//	inmang(a,n);
//	chenvitrik(a,n);
//	inmang(a,n);
//	chenvitrithuk(a,n);
//	inmang(a,n);
	chenSauSoChan(a,n);
	inmang(a,n);
	delete[] a;
	return 0;
}

