#include"stdio.h"
#include"math.h"
int nhap(float *x,int *n,int *m){
	printf("\n nhap gt thuc ");
	scanf("%f",&*x);
	do{
		printf("\n nhap 2 gt nguyen (>0) : ");
		scanf("%d%d",&*n,&*m);
	}while(n<=0 || m<=0);
}void tinhfx(float x,int n,int m){
	float s,tong;
	s=0;
	tong=0;
	if(x>0){
		for(int i=0;i<=n;i++){
			s+=pow(x,i);
		}tong=(float)s+pow(sin(m),2);
	}else{
		for(int i=1;i<=m;i++){
			s+=pow(i,2);
		}tong=(float)210*x+1.0/s;
	}printf("\n f(y,p,q) = %.2f",tong);
}int main(){
	float y;
	int p,q;
	nhap(&y,&p,&q);
	if(p>0 && q>0){
		tinhfx(y,p,q);
	}else{
		printf("\n so ban nhap  khong hop le");
	}
	
	return 0;
}
