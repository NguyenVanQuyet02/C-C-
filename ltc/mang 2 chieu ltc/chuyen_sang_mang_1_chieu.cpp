#include"stdio.h"
int a[100][100],b[10000],m,n,k;
void nhapmatran(int a[100][100],int &m,int &n){
	do{
		printf("\n nhap m va n ");
		scanf("%d%d",&m,&n);
	}while(m<=0||n<=0);
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
}void inmatran(int a[100][100],int m,int n){
	printf("\n ma tran la \n");
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("%d \t",a[i][j]);
		}printf("\n");
	}
}void chuyenmatranthanhmang1chieu(int a[100][100],int m,int n,int b[10000],int &k){
	k=m*n;
	int index=0;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			b[index]=a[i][j];
			index++;
		}
	}
}void inmang(int b[],int k){
	printf("\n mang 1 chieu la ");
	for(int i=0;i<k;i++){
		printf(" %d",b[i]);
	}
}int main(){
	nhapmatran(a,m,n);
	inmatran(a,m,n);
	chuyenmatranthanhmang1chieu(a,m,n,b,k);
	inmang(b,k);
	return 0;
}
