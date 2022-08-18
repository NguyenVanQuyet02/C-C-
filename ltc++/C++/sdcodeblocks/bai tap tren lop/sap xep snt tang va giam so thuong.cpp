#include<bits/stdc++.h>
using namespace std;
void nhap(int *a,int n){
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
}
void inmang(int *a,int n){
	cout<<"\nmang la"<<endl;
	for(int i=0;i<n;i++){
		cout<<"\t"<<*(a+i);
	}
}
int ktsnt(int n){
	if(n<2){
		return 0;
	}for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			return 0;
		}
	}return 1;
}
void sapxeptangsntvagiamsokonguyento(int *a,int n){
	int tg,gd,d=0;
	for(int i=0;i<n;i++){
		if(ktsnt(a[i])){
			d++;
			break;
		}
	}
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(ktsnt(a[i]) && ktsnt(a[j]) && a[i]>a[j]){
				tg =a[i];
				a[i]=a[j];
				a[j]=tg;
			}
		}
	}
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(ktsnt(a[i])==0 && ktsnt(a[j])==0 && a[i]<a[j]){
				gd =a[i];
				a[i]=a[j];
				a[j]=gd;
			}
		}
	}
	
	if(d>0){
		inmang(a,n);
	}else{
		cout<<"\nmang khong co snt"<<endl;
		inmang(a,n);
	}
}

int main(){
	int n;
	int *a=new int[n];
	do{
		cout<<"\nnhap so phan tu cua mang:";
		cin>>n;
	}while(n<=0);
	nhap(a,n);
	inmang(a,n);
	sapxeptangsntvagiamsokonguyento(a,n);
	return 0;
}
