#include"stdio.h"
int a[100],b[100],n,k;
void nhapmang(int a[],int &n){
	printf("\n nhap so luong phan tu ");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
}void inmang(int a[],int n){
	printf("\n mang la ");
	for(int i=0;i<n;i++){
		printf(" %d",a[i]);
	}
}int timmax(int a[],int n){
	int max;
	max=a[0];
	for(int i=0;i<n;i++){
		if(max<a[i]){
			max=a[i];
		}
	}return max;
}void timmangconkhongtang(int a[],int n){
	for(int i=0;i<n;i++){
		b[i]=1;
	}for(int i=n-1;i>0;i--){
		if(a[i]<=a[i-1]){
			b[i-1]=b[i]+1;
		}
	}
	k=timmax(b,n);
	for(int i=0;i<n;i++){
		if(b[i]==k){
			printf("\n mang con khong tang dai nhat la ");
			for(int j=i;j<=k;j++){
				printf(" %d",a[j]);
			}
		}
	}
}int main(){
	nhapmang(a,n);
	inmang(a,n);
	timmangconkhongtang(a,n);
	return 0;
}
