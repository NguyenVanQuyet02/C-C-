#include"stdio.h"
int x;
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
}// chen x trc ptu am dau tien 
void chentrcsoam(int a[],int &n){
	int k,d=0;
	int x;
	printf("\n nhap gt x can chen ");
	scanf("%d",&x);
	for(int i=0;i<n;i++){
		if(a[i]<0){
			k=i;
			d++;
			break;
		}
	}n++;
	if(d>0){
		for(int i=n-1;i>k;i--){
			a[i]=a[i-1];
		}a[k]=x;
	}else{
		for(int i=n-1;i>0;i--){
			a[i]=a[i-1];
		}a[0]=x;
	}
}int main(){
	int a[30],n;
	nhapmang(a,n);
	inmang(a,n);
	chentrcsoam(a,n);
	inmang(a,n);
	return 0;
}
