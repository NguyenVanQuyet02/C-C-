#include"stdio.h"
#include"math.h"
int nhapx(float *x){
	printf("\n nhap gt thuc ");
	scanf("%f",&*x);
}int nhapn(int *n){
	printf("\n nhap gt nguyen (>0) : ");
	scanf("%d",&*n);
}
float tinhfx(float x){
	float fx;
	if(x>0){
		fx=2*x +1;
	}else{
		fx=log10(x)/log10(15);
	}
	return fx;
}float tinhfn(int n){
	float s;
	s=0;
	for(int i=0;i<=n;i++){
		s+= pow(3,i);
	}return s;
}int main(){
	int m;
	float tong;
	float y;
	nhapx(&y);
	nhapn(&m);
	tong = tinhfx(y)+tinhfn(m);
	printf("\n f(y,m) = %.2f",tong);
	return 0;
}
