#include"stdio.h"
int a[100][100], n;
void nhapmatran(int a[100][100],int &n){
	do{
		printf("\n nhap ");
		scanf("%d",&n);
	}while(n<=0);
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
}void inmatran(int a[100][100],int n){
	printf("\n ma tran la \n");
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("%d\t",a[i][j]);
		}printf("\n");
	}
}int ktdoixungcheochinh(int a[100][100],int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(a[i][j]!=a[j][i]){
				return 0;
			}
		}
	}
	return 1;
}int ktdoixungcheophu(int a[100][100],int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(a[i][j]!=a[n-1-j][n-1-i]){
				return 0;
			}
		}
	}return 1;
}
int main(){
	nhapmatran(a,n);
	inmatran(a,n);
	printf("\n %s",(ktdoixungcheochinh(a,n)==1?"mang doi xung qua duong cheo chinh":"mang khong doi xung qua duong cheo chinh"));
	printf("\n %s",(ktdoixungcheophu(a,n)==1?"mang doi xung qua duong cheo phu":"mang khong doi xung qua duong cheo phu")); 	
	return 0;
}
