// bai 1 de 1
#include"stdio.h"
#include"math.h"
int n;
float x;
int nhap(){
	printf("\n nhap gia tri thuc ");
	scanf("%f",&x);
	do{
		printf("\n nhap gia tri nguyen lon hon 0 : ");
		scanf("%d",&n);
	}while(n<=0);
	return x,n;
}void fx(){
	float s=0,f;
	if(n%2==0){
		for(int i=1;i<=n;i++){
			s+=(float)i/pow(2,i);
		}f=s+200*x;
		printf("\n f(y,m) = %.2f",f);
	}else{
		f=sqrt(n*n+1) + fabs(x);
		printf("\n f(y,m) = %.2f",f);
	}
}int main(){
	nhap();
	fx();
	return 0;
}
