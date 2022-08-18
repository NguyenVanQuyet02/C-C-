#include<stdio.h>
int nhap(int n){
	printf("\n nhap so phan tu cua mang ");
	scanf(" %d",&n);
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
}// chen vao truoc phan tu am dau tien cua mang
void chendaumang(int a[],int &n,int x){
	for(int i=n-1;i>0;i--){
		a[i]=a[i-1];
	}a[0]=x;
}
void chentrcsoam(int a[],int &n){
	int d=0;
	int x;
	printf("\n nhap gia tri can chen ");
	scanf("%d",&x);
	int size=sizeof(a)/sizeof(a[0]);
	if(n==size){
		printf("\n mang khong the chen them ");
	}n++;
	int k;
	for(int i=0;i<n;i++){
		if(a[i]<0){
			k=i;
			d++;
			break;
		}
	}if(d>0){
		for(int i=n-1;i>k;i--){
			a[i]=a[i-1];
		}a[k]=x;
		printf("\n mang vua chen la ");
		for(int i=0;i<n;i++){
			printf(" %d",a[i]);
		}
	}else{
		chendaumang(a,n,x);
		inmang(a,n);
	}
}int main(){
	int a[30],n,k,x;
	n=nhap(n);
	nhapmang(a,n);
	inmang(a,n);
	chentrcsoam(a,n);
	return 0;
}
