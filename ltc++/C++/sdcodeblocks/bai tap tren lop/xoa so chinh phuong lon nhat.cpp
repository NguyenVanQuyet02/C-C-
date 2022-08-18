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
int ktsochinhphuong(int n){
	int k=0;
	k = sqrt(n);
	if(pow(k,2)==n){
		return 1;
	}else{
		return 0;
	}
}
void xoasochinhphuonglonnhat(int *a,int &n){
	int max,d=0;
	for(int i=0;i<n;i++){
		if(ktsochinhphuong(a[i])){
			max = a[i];
			d++;
			break;
		}
	}
	if(d>0){
		for(int i=0;i<n;i++){
			if(ktsochinhphuong(a[i]) && max < a[i]){
				max = a[i];
			}
	    }
	    for(int i=0;i<n;){
			if(a[i]==max){
				xoavt(a,n,i);
			}
			else i++;
		}
	}
	else{
		cout<<"\nmang khong co so chinh phuong"<<endl;
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
	xoasochinhphuonglonnhat(a,n);
	inmang(a,n);
	return 0;
}
