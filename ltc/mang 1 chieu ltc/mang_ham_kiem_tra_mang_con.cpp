#include"stdio.h"
void nhapmang(int a[],int &n){
	printf("\n nhap so phan tu cua mang ");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
}void inmang(int a[],int n){
	printf("\n mang la ");
	for(int i=0;i<n;i++){
		printf(" %d",a[i]);
	}
}int ktmangcon(int a[],int n1,int b[],int n2){
	int kq=0;
	if(n2<=n1){
		for(int i=0;i<n1;i++){
			if(a[i]==b[0]){
				int j=0;
				for(;j<n2;j++){
					if(a[i+j]!=b[j]){
						break;
					}
				}
				if(j==n2){
					kq=1;
				}
			}
		}
	}
	return kq;
}
int main(){
	int a[50],b[50],n,n1,n2;
	printf("\n mang A ");
	nhapmang(a,n1);
	inmang(a,n1);
	printf("\n mang B");
	nhapmang(b,n2);
	inmang(b,n2);
	int kt=ktmangcon(a,n1,b,n2);
	if(kt){
		printf("\n mang B la mang con cua mang A");
	}else{
		printf("\n mang B khong la mang con cua mang A");
	}
	return 0;
}
