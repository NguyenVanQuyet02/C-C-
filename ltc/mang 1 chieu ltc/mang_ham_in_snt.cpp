#include<stdio.h>
#include<math.h>
int nhap(int n){
	printf("\n nhap so phan tu cua mang ");
	scanf("%d",&n);
	return n;
}void nhapmang(int a[],int n){
	for(int i=0;i<n;i++){
		printf("\n a[%d] = ",i);
		scanf("%d",&a[i]);
	}
}void inmang(int a[],int n){
	printf("\n mang la ");
	for(int i=0;i<n;i++){
		printf(" %d",a[i]);
	}
}int dk(int n){
	if(n<1){
		return 0;
	}for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			return 0;
		}
	}return 1;
}
void xuatsnt(int a[],int n){
	printf("\n snt trong mang la ");
	for(int i=0;i<n;i++){
		if(dk(a[i])){
			printf(" %d",a[i]);
		}
	}
}int main(){
	int a[30],n;
	n=nhap(n);
	nhapmang(a,n);
	inmang(a,n);
	xuatsnt(a,n);
	return 0;
}
