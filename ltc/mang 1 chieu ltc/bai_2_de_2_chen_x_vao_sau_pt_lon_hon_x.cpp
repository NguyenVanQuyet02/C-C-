// bai 2 de 2 
#include"stdio.h"
int a[100],n;
void nhapmang(int a[],int &n){
	do{
		printf("\n nhap so phan tu cua mang (>=5) : ");
		scanf("%d",&n);
	}while(n<5);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
}void inmang(int a[],int n){
	printf("\n mang la ");
	for(int i=0;i<n;i++){
		printf("%d\t",a[i]);
	}
}void tbc(int a[],int n){
	float tbc;
	int s=0,d=0;
	for(int i=0;i<n;i++){
		if(a[i]%2!=0){
			s+=a[i];
			d++;
		}
	}if(d>0){
		tbc=(float)s/d;
		printf("\n tbc cac so le la %.2f",tbc);
	}else{
		printf("\n mang khong co so le ");
	}
}void timmin(int a[],int n){
	int min;
	min=a[0];
	int dem=0;
	for(int i=0;i<n;i++){
		if(min>a[i]){
			min=a[i];
		}
	}printf("\n min la %d",min);
	for(int i=0;i<n;i++){
		if(a[i]==min){
			dem++;
		}
	}printf("\n mang co %d so do ",dem);
}
void chenx(int a[],int &n){
	int x;
	int k;
	int size=sizeof(a)/sizeof(a[0]);
	if(n==size){
		printf("\n khong the chen them vao mang");
	}printf("\n nhap gt x can chen ");
	scanf("%d",&x);
	int dm=0;
	for(int i=0;i<n;i++){
		if(a[i]>x){
			k=i;
			dm++;
			//break;
		}
	}n++;
	if(dm>0){
		for(int i=n-1;i>k;i--){
			a[i]=a[i-1];
		}a[k+1]=x;
	}else{
		a[n-1]=x;
	}
}
int main(){
	nhapmang(a,n);
	inmang(a,n);
	tbc(a,n);
	timmin(a,n);
	chenx(a,n);
	inmang(a,n);
	return 0;
}
