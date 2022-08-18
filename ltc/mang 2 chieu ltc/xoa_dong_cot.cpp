#include"stdio.h"
int a[100][100],m,n;
void nhapmatran(int a[100][100], int &m,int &n){
	do{
		printf("\n nhap so dong va cot cua ma tran ");
	    scanf("%d%d",&m,&n);
	}while(m<=0 || n<=0);
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
}void inmatran(int a[100][100],int m,int n){
	printf("\n mang la\n");
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
}void xoadong(int a[100][100],int &m,int n){
	int x;
	do{
		printf("\n nhap dong can xoa ");
	    scanf("%d",&x);
	}while(x<0 || x>=m);
	for(int i=x;i<m-1;i++){
		for(int j=0;j<n;j++){
			a[i][j]=a[i+1][j];
		}
	}m--;
}void xoacot(int a[100][100],int m,int &n){
	int k;
	do{
		printf("\n nhap cot can xoa ");
		scanf("%d",&k);
	}while(k<0 || k>=n);
	for(int i=0;i<m;i++){
		for(int j=k;j<n-1;j++){
			a[i][j]=a[i][j+1];
		}
	}n--;
}
int main(){
	nhapmatran(a,m,n);
	inmatran(a,m,n);
	xoadong(a,m,n);
	inmatran(a,m,n);
	xoacot(a,m,n);
	inmatran(a,m,n);
	return 0;
}
