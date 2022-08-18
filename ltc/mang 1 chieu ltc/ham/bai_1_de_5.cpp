#include"stdio.h"
#include"math.h"
int nhapx(float *x){
	printf("\n nhap gt thuc ");
	scanf("%f",&*x);
}int nhapn(int *n){
	printf("\n nhap gt nguyen (>0) : ");
	scanf("%d",&*n);
}float tinhfx(float x){
	float fx=0;
	if(x>0){
		fx = 2*x + exp(x);
		return fx;
	}else{
		fx = log10(x)/log10(15);
		return fx;
	}
}float tinhfn(int n){
	float s=0;
	for(int i=0;i<=n;i++){
		s+=1.0/pow(3,i);
	}return s;
}int main(){
	float y,tong;
	int m;
	nhapx(&y);
	do{
		nhapn(&m);
	}while(m<=0);
	tong = tinhfx(y) + tinhfn(m);
	printf("\n F(y,m) = %.2f",tong);
	return 0;
}
