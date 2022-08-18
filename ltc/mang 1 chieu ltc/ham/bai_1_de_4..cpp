#include"stdio.h"
#include"math.h"
int nhap(float *x,int *n){
	printf("\n nhap gt thuc ");
	scanf("%f",&*x);
	printf("\n nhap gt nguyen (>0) : ");
	scanf("%d",&*n);
}void tinh(float x,int n){
	float s,tong;
	s=0;
	tong=0;
	if(n>1){
		for(int i=1;i<=n;i++){
			s+= (x-i)/(n+i);
		}tong = s +1;
	}else{
		tong = sqrt(n) + 2016*x;
	}printf("\n f(y,m) = %.2f",tong);
}int main(){
	float y;
	int m;
	nhap(&y,&m);
	do{
		tinh(y,m);	
	}while(m<=0);
	return 0;
}
