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
}// xoa x cuoi
void xoavt(int a[],int &n,int k){
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
}int main(){
	int a[30],n;
	nhapmang(a,n);
	inmang(a,n);
	xoax(a,n);
	return 0;
}
