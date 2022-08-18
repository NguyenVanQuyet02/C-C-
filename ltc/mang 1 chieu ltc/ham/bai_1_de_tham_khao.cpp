#include"stdio.h"
#include"math.h"
int nhap(int *n,float*a){
	printf("\n nhap so nguyen ");
	scanf("%d",&*n);
	printf("\n nhap so thuc ");
	scanf("%f",&*a);
}void tinh(int n,float a){
	float p;
	if(a==0){
		printf("\n P = 0");
	}else{
		p=((pow(a,2)-pow(n,2))/a)-((a*a*a-pow(n,2))/a)+sqrt(2021);
		printf("\n P = %.2f",p);
	}
}int main(){
	int n;
	float a;
	nhap(&n,&a);
	tinh(n,a);
	return 0;
}
