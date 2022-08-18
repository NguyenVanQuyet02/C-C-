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
}void thaydoigtdong(int a[100][100],int m,int n){
	int c,b;
	do{
		printf("\n nhap 2 dong can thay doi gt  ");
	    scanf("%d%d",&c,&b);
	}while(c>m || b>m);
	for(int i=0;i<n;i++){
		int temp=a[c][i];
		a[c][i]=a[b][i];
		a[b][i]=temp;
	}
}void thaydoigtcot(int a[100][100],int m,int n){
	int c,b;
    printf("\n nhap 2 cot can thay doi gt  ");
	scanf("%d%d",&c,&b);
	for(int i=0;i<m;i++){
		int temp=a[i][c];
		a[i][c]=a[i][b];
		a[i][b]=temp;
	}
}
int main(){
	nhapmatran(a,m,n);
	inmatran(a,m,n);
	thaydoigtdong(a,m,n);
	inmatran(a,m,n);
	thaydoigtcot(a,m,n);
	inmatran(a,m,n);
	return 0;
}
