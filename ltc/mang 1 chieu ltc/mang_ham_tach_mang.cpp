#include"stdio.h"
int nhap(int x){
	printf("\n nhap so phan tu cua mang ");
	scanf("%d",&x);
	return x;
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
}void tach(int a[],int n,int b[],int &n1,int c[],int &n2){
	int i1=0,i2=0;
	n1=0;
	n2=0;
	for(int i=0;i<n;i++){
		if(a[i]%2==0){
			b[i1]=a[i];
			i1++;
			n1++;
		}else{
			c[i2]=a[i];
			i2++;
			n2++;
		}
	}
}int main(){
	int a[100], b[50],c[50],n,n1,n2;
	n=nhap(n);
	nhapmang(a,n);
	inmang(a,n);
	tach(a,n,b,n1,c,n2);
	inmang(b,n1);
	inmang(c,n2);
	return 0;
}
