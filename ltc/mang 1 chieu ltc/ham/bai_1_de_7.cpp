#include"stdio.h"
#include"math.h"
float x;
int n;
void nhap(){
	printf("\n nhap gt thuc ");
	scanf("%f",&x);
	printf("\n nhap gt nguyen ");
	scanf("%d",&n);
}float giaithua(int n){
	float s=1;
	for(int i=1;i<=n;i++){
		s*=i;
	}
	return s;
}
float tinhfx(float x,int n){
	float sum=0,tong=0;
	if(n%2==0){
		for(int i=1;i<=n;i++){
			sum+=(x+i)/giaithua(i);
		}
		tong=1+sum;
	}else{
		tong=2*x+exp(x);
	}
	return tong;
}int main(){
	nhap();
	if(n<=0){
		printf("\n so ban nhap khong hop le");
	}else{
		printf("\n f(y,m) = %.2f",tinhfx(x,n));
	}
	return 0;
}

