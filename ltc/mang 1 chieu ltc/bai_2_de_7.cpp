#include"stdio.h"
void nhapmang(int a[],int &n){
	do{
		printf("\n nhap so phan tu cua mang ");
	    scanf("%d",&n);
	}while(n<1 || n>30);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
}void inmang(int a[],int n){
	printf("\n mang la ");
	for(int i=0;i<n;i++){
		printf("%d\t",a[i]);
	}
}void tbc(int a[],int n){
	int x;
	printf("\n nhap so nguyen x ");
	scanf("%d",&x);
	int s=0,d=0;
	float tbc;
	for(int i=0;i<n;i++){
		if(a[i]<x && a[i]%2==0 && a[i]>0){
			s+=a[i];
			d++;
		}
	}if(d>0){
		tbc=(float)s/d;
		printf("\n tbc phan tu chan duong la %.2f",tbc);
	}else{
		printf("\n mang khong co phan tu chan duong nho hon x ");
	}
}void xoavt(int a[],int &n,int k){
	for(int i=k;i<n-1;i++){
		a[i]=a[i+1];
	}n--;
}void xoax(int a[],int n){
	int x,d=0;
	printf("\n nhap gt x can xoa ");
	scanf("%d",&x);
	for(int i=n-1;i>=0;i--){
		if(a[i]==x){
			xoavt(a,n,i);
			d++;
			break;
		}
	}if(d>0){
		inmang(a,n);
	}else{
		printf("\n mang khong co phan tu bang x ");
	}
}
int main(){
	int a[30], n;
	nhapmang(a,n);
	inmang(a,n);
	tbc(a,n);
	xoax(a,n);
	return 0;
}
