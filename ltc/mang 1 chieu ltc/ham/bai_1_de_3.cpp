#include"stdio.h"
#include"math.h"
int n,m;
float x;
int nhap(int *n,int *m){
	do{
		printf("\n nhap 2 gia tri nguyen ");
		scanf("%d%d",&*n,&*m);
	}while(n<=0||m<=0);
	
}int nhapx(float *x){
	printf("\n nhap gt thuc ");
	scanf("%f",&*x);
	
}
float tinhf(float x,int n,int m){
	float s,tong;
	s=0;
	if(x>0){
		for(int i=0;i<=n;i++){
			s+=pow(x,i);
		}tong=s+pow(sin(m),2);
		return tong;
	}else{
		for(int i=1;i<=n;i++){
			s+=pow(i,2);
		}tong=210*x+1.0/s;
		return tong;
	}
}int main(){
	int q,p;
	float y;
	nhap(&p,&q);
	nhapx(&y);
	printf("\n f(y,p,q)=%.2f",tinhf(y,p,q));
	return 0;
	
}
