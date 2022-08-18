#include"stdio.h"
int a[100][100],m,n,x;
void nhapmang(int a[100][100],int &m,int &n){
	do{
		printf("\n nhap m va n : ");
		scanf("%d%d",&m,&n);
	}while(m<=0 || n<=0);
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
}void inmang(int a[100][100],int m,int n){
	printf("\n ma tran la \n");
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf(" %d\t",a[i][j]);
		}printf("\n");
	}
}int kt(int a[100][100],int m,int n,int x){
	int kq=0;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(a[i][j]==x){
				kq=1;
			}
		}
	}
	return kq;
}void timx(int a[100][100],int m,int n){
	int x;
	printf("\n nhap gt can tim ");
	scanf("%d",&x);
	int ktx ;
	ktx = kt(a,m,n,x);
	if(ktx){
		printf("\n tim thay x trong ma tran ");
	}else{
		printf("\n khong tim thay x trong ma tran ");
	}
}
int main(){
	nhapmang(a,m,n);
	inmang(a,m,n);
	timx(a,m,n);
	return 0;
}
