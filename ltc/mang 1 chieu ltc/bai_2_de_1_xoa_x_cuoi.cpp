// cau 2 de 1
#include"stdio.h"
int a[30],n,x;
void nhapmang(int a[],int &n){
	do{
		printf("\n nhap so phan tu cua mang (0<=n<=30) : ");
		scanf("%d",&n);
	}while(n<=0 || n>30);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
}void inmang(int a[],int n){
	printf("\n mang la ");
	for(int i=0;i<n;i++){
		printf(" %d\t",a[i]);
	}
}void timmax(int a[],int n){
	int max;
	max=a[0];
	for(int i=0;i<n;i++){
		if(max<a[i]){
			max=a[i];
		}
	}printf("\n max la %d",max);
	printf("\n max o nhung vi tri la ");
	for(int i=0;i<n;i++){
		if(a[i]==max){
			printf(" %d",i+1);
		}
	}
}void sapxeptangdan(int a[],int n){
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
}void xoavt(int a[],int n,int k){
	for(int i=k;i<n-1;i++){
		a[i]=a[i+1];
	}
}void xoax(int a[],int &n){
	int d=0,k;
	printf("\n nhap gt x can xoa ");
	scanf("%d",&x);
	for(int i=0;i<n;i++){
		if(a[i]==x){
			k=i;
			xoavt(a,n,i);
			d++;
		}
	}n--;
	if(d>0){
		inmang(a,n);
	}else{
		printf("\n mang khong co gia tri bang x ");
	}
}
int main(){
	nhapmang(a,n);
	inmang(a,n);
	timmax(a,n);
	sapxeptangdan(a,n);
	inmang(a,n);
	xoax(a,n);
	return 0;
}
