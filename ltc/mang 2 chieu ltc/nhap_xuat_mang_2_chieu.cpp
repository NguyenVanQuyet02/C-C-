#include"stdio.h"
int a[100][100],m,n;
void nhapmang(int a[100][100],int &m,int &n){
	do{
		printf("\n nhap m va n : ");
		scanf("%d%d",&m,&n);
	}while(m<=0 || n<=0);
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("\n a[%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
}void inmang(int a[100][100],int m,int n){
	printf("\n mang la : \n");
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
}int main(){
	nhapmang(a,m,n);
	inmang(a,m,n);
	return 0;
}
