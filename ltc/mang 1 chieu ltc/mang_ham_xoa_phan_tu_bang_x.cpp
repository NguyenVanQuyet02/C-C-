#include"stdio.h"
int nhap(int n){
	do{
		printf("\n nhap so phan tu cua mang ");
		scanf(" %d",&n);
	}while(n<0 || n>30);
}
void nhapmang(int a[],int n){
	for(int i=0;i<n;i++){
		printf("\n a[%d] = ",i);
		scanf("%d",&a[i]);
	}
}void inmang(int a[],int n){
	printf("\n mang la ");
	for(int i=0;i<n;i++){
		printf(" %d",a[i]);
	}
}void xoavtk(int a[],int &n,int k){
	for(int i=k;i<n-1;i++){
		a[i]=a[i+1];
	}
	n--;
}void xoabangx(int a[],int n,int x){
	int d=0;
	printf("\n nhap gia tri can xoa ");
	scanf("%d",&x);
	for(int i=0;i<n;i++){
		if(a[i]==x){
			xoavtk(a,n,i);
			d++;
		}
	}
	if(d>0){
		printf("\n mang vua xoa la ");
	    for(int i=0;i<n;i++){
		printf(" %d",a[i]);
	    }
	}else{
		printf("\n mang khong co phan tu bang x");
	}
}int main(){
	int a[30],n,x,k;
	n=nhap(n);
	nhapmang(a,n);
	inmang(a,n);
	xoabangx(a,n,x);
	return 0;
}
