#include<bits/stdc++.h>
using namespace std;
void nhapmang(int *a,int n){
	srand(time(NULL));
	for(int i=0;i<n;i++){
		a[i] = rand()%100+1;
	}
}
void inmang(int *a,int n){
	cout<<"\nmang:"<<endl;
	for(int i=0;i<n;i++){
		cout<<"\t"<<a[i];
	}
}
void tbcduongle(int *a,int n){
	float tong=0;
	int d=0;
	for(int i=0;i<n;i++){
		if(a[i]>0 && a[i]%2!=0){
			tong += a[i];
			d++;
		}
	}
	if (d>0){
		cout<<"\n tbc so le duong la "<< (float)tong/d <<endl;
	}else{
		cout<<"\nmang khong co gt le duong"<<endl;
	}
} 
void tbcchia3chia7(int *a,int n){
	float tong=0;
	int d=0;
	for(int i=0;i<n;i++){
		if(a[i]%3==0 && a[i]%7==0){
			tong += a[i];
			d++;
		}
	}if (d>0){
		cout<<"\n tbc so chia het cho 3 va 7 la "<< (float)tong/d <<endl;
	}else{
		cout<<"\nmang khong co gt chia het cho 3 va 7"<<endl;
	}
}
void tbcduongchan(int *a,int n){
	float tong=0;
	int d=0;
	for(int i=0;i<n;i++){
		if(a[i]>0 && a[i]%2==0){
			tong += a[i];
			d++;
		}
	}
	if (d>0){
		cout<<"\n tbc so chan duong la "<< (float)tong/d <<endl;
	}else{
		cout<<"\nmang khong co gt chan duong"<<endl;
	}
} 
int main(){
	int n;
	int *a = new int[n];
	do{
		cout<<"\nnhap so phan tu cua mang:";
		cin>>n;
	}while(n<=0);
	nhapmang(a,n);
	inmang(a,n);
	tbcduongle(a,n);
	tbcchia3chia7(a,n);
	tbcduongchan(a,n);
	delete[] a;
	return 0;
}
