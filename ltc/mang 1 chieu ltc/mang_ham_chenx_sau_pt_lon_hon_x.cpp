// chen x ko lam thay doi thu tu tang dan cua mang
#include"stdio.h"
int nhap(int n){
	do{
		printf("\n nhap so phan tu cua mang ");
		scanf("%d",&n);
	}while(n<0 || n>30);
	return n;
}void nhapmang(int a[],int n){
	for(int i=0;i<n;i++){
		printf("\n a[%d] = ",i);
		scanf("%d",&a[i]);
	}
}void inmang(int a[],int n){
	printf("\n mang la ");
	for(int i=0;i<n;i++){
		printf(" %d",a[i]);
	}
}void chencuoimang(int a[],int n,int x){
	a[n]=x;
	n++;
}
void chen(int a[],int &n){
	int k,x,d=0;
	int size=sizeof(a)/sizeof(a[0]);
	if(n==size){
		printf("\n mang khong the chen them phan tu ");
	}printf("\n nhap gia tri chen ");
	scanf("%d",&x);
	n++; 
	for(int i=0;i<n;i++){
		if(a[i]>x){
			k=i;
			d++;
			break;
		}
	}if(d>0){
		for(int i=n-1;i>k;i--){
			a[i]=a[i-1];
		}a[k+1]=x;
		inmang(a,n);
	}else{
		chencuoimang(a,n,x);
		inmang(a,n);
	}
}int main(){
	int n,a[30],k,x;
	n=nhap(n);
	nhapmang(a,n);
	inmang(a,n);
	chen(a,n);
	return 0;
	
}
