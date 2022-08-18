#include"stdio.h"
int a[100][100],m,n;
void nhapmatran(int a[100][100], int &m,int &n){
	printf("\n nhap so dong va cot cua ma tran ");
	scanf("%d%d",&m,&n);
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
}void sapxeptang(int a[100][100],int m,int n){
	int k=m*n;
	for(int i=0;i<k-1;i++){
		for(int j=i+1;j<k;j++){
			if(a[i/n][i%n]>a[j/n][j%n]){
				int temp=a[i/n][i%n];
				a[i/n][i%n]=a[j/n][j%n];
				a[j/n][j%n]=temp;
			}
		}
	}
}void sapxepgiam(int a[100][100],int m,int n){
	int k=m*n;
	for(int i=0;i<k-1;i++){
		for(int j=i+1;j<k;j++){
			if(a[i/n][i%n]<a[j/n][j%n]){
				int temp=a[i/n][i%n];
				a[i/n][i%n]=a[j/n][j%n];
				a[j/n][j%n]=temp;
			}
		}
	}
}
int main(){
	nhapmatran(a,m,n);
	inmatran(a,m,n);
	sapxeptang(a,m,n);
	inmatran(a,m,n);
	sapxepgiam(a,m,n);
	inmatran(a,m,n);
	return 0;
}
