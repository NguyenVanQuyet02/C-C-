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
}void timmin(int a[],int n){
	int min,d=0;
	min=a[0];
	for(int i=0;i<n;i++){
		if(min>a[i]){
			min=a[i];
		}
	}printf("\n min la %d",min);
	for(int i=0;i<n;i++){
		if(a[i]==min){
			d++;
		}
	}printf("\n co %d min trong mang ",d);
}void sapxep(int a[],int n){
	int tg;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]>a[j]){
				tg=a[i];
				a[i]=a[j];
				a[j]=tg;
			}
		}
	}
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
		if(a[i]>=x){
			k=i;
			dem++;
			break;
		}
	}if(dem>0){
		for(int i=n-1;i>k;i--){
		a[i]=a[i-1];
	    }a[k]=x;
	}else{
		a[n]=x;
	}
	
}
int main(){
	int a[30],n;
	nhapmang(a,n);
	inmang(a,n);
	timmin(a,n);
	sapxep(a,n);
	inmang(a,n);
	chenx(a,n);
	inmang(a,n);
	return 0;
}
