#include"stdio.h"
void nhapmang(int a[],int &n){
	do{
		printf("\n nhap so phan tu cua mang (>=1) : ");
		scanf("%d",&n);
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
	}while(n<1);
}void inmang(int a[],int n){
	printf("\n mang la ");
	for(int i=0;i<n;i++){
		printf(" %d",a[i]);
	}
}void sapxep(int a[],int n){
	int gd;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]<a[j]){
				gd=a[i];
				a[i]=a[j];
				a[j]=gd;
			}
		}
	}
}minduong(int a[],int n){
	int min;
	for(int i=0;i<n;i++){
		if(a[i]>0){
			min=a[i];
			if(min>a[i]){
				min=a[i];
			}
		}
	}printf("\n min duong la %d",min);
}void chenx(int a[],int &n){
	int x,k,dem=0;
	int size=sizeof(a)/sizeof(a[0]);
	if(n==size){
		printf("\n khong the chen them phan tu vao mang ");
	}
	printf("\n nhap gt x can chen ");
	scanf("%d",&x);
	n++;
	for(int i=0;i<n;i++){
		if(a[i]<0){
			k=i;
			dem++;
			break;
		}
	}if(dem>0){
	    for(int i=n-1;i>k;i--){
		    a[i]=a[i-1];
	    }a[k]=x;	
	}else{
		for(int i=n-1;i>0;i--){
			a[i]=a[i-1];
		}a[0]=x;
	}
}
int main(){
	int a[30],n;
	nhapmang(a,n);
	inmang(a,n);
	sapxep(a,n);
	inmang(a,n);
	minduong(a,n);
	chenx(a,n);
	inmang(a,n);
	return 0;
}
