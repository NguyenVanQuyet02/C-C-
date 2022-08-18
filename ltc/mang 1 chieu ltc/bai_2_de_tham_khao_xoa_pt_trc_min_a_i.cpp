#include"stdio.h"
void nhapmang(int a[],int &n){
	do{
		printf("\n nhap so nguyen duong n ");
		scanf("%d",&n);
	}while(n<=0);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
}void inmang(int a[],int n){
	printf("\n mang la ");
	for(int i=0;i<n;i++){
		printf("%d\t",a[i]);
	}
}void tbc(int a[],int n){
	int y;
	int s=0,d=0;
	float tbc;
	do{
		printf("\n nhap so nguyen duong y : ");
		scanf("%d",&y);
	}while(y<=0);
	printf("\n uoc cua %d la ",y);
	for(int i=0;i<n;i++){
		if(y%a[i]==0){
			printf(" %d",a[i]);
			s+=a[i];
			d++;
		}
	}if(d>0){
		tbc=(float)s/d;
		printf("\n tbc uoc cua %d la %.2f",y,tbc);
	}else{
		printf("\n mang khong co uoc cua %d",y);
	}
}void xoavt(int a[],int n,int k){
	for(int i=k-1;i<n-1;i++){
		a[i]=a[i+1];
	}
}
void xoa(int a[],int &n){
	int min,k;
	min=a[0];
	for(int i=0;i<n;i++){
		if(min>a[i]){
			min=a[i];
		}
	}for(int i=0;i<n;i++){
		if(min==a[i]){
			if(min!=a[0]){
				xoavt(a,n,i);
				n--;
				inmang(a,n);
			}else{
				printf("\n mang khong co phan tu de xoa ");
			}
		}
	}
}
int main(){
	int a[30],n;
	nhapmang(a,n);
	inmang(a,n);
	tbc(a,n);
	xoa(a,n);
	return 0;
}
