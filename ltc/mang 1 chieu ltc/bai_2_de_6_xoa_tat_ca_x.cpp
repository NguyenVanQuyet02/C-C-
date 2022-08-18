#include"stdio.h"
#include"math.h"
int nhapmang(int a[],int &n){
	do{
		printf("\n nhap so phan tu cua mang ");
		scanf("%d",&n);
	}while(n<1);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
    }
}void inmang(int a[],int n){
	printf("\n mang la ");
	for(int i=0;i<n;i++){
		printf("%d\t",a[i]);
	}
}void tongboicua5(int a[],int n){
	int tong=0,d=0;
	float tbc;
	for(int i=0;i<n;i++){
		if(a[i]%5==0){
			tong+=a[i];
			d++;
		}
	}if(d>0){
		tbc=(float)tong/d;
		printf("\n tbc boi cua 5 la %.2f",tbc);
	}else{
		printf("\n  mang khong co boi cua 5");
	}
}int snt(int n){
	if(n<2){
		return 0;
	}for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			return 0;
		}
	}
	return 1;
}void timsnt(int a[],int n){
	for(int i=0;i<n;i++){
		if(snt(a[i])){
			printf("\n snt dau tien la %d",a[i]);
			break;
		}
	}
}void xoavt(int a[],int &n,int k){
	for(int i=k;i<n-1;i++){
		a[i]=a[i+1];
	}n--;
}void xoax(int a[],int n){
	int x,dem=0;
	printf("\n nhap gt x can xoa ");
	scanf("%d",&x);
	for(int i=n-1;i>=0;i--){
		if(a[i]==x){
			xoavt(a,n,i);
			dem++;
		
		}
	}if(dem>0){
		inmang(a,n);
	}else{
		printf("\n mang khong co x");
	}
}
int main(){
	int a[30], n;
	nhapmang(a,n);
	inmang(a,n);
	//tongboicua5(a,n);
	//timsnt(a,n);
	xoax(a,n);
	return 0;
}

