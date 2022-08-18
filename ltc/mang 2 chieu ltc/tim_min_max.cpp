#include"stdio.h"
int a[100][100],m, n;
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
}void timmax(int a[100][100],int m,int n){
	int max;
	max=a[0][0];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(max<a[i][j]){
				max=a[i][j];
			}
		}
	}printf("\n max = %d",max);
}void timmin(int a[100][100],int m,int n){
	int min;
	min=a[0][0];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(min>a[i][j]){
				min=a[i][j];
			}
		}
	}printf("\n min = %d",min);
}int main(){
	nhapmatran(a,m,n);
	inmatran(a,n,n);
	timmax(a,m,n);
	timmin(a,m,n);
	return 0;
}
