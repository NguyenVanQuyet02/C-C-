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
}void timmaxcot(int a[100][100],int m,int n){
	int x;
	do{
		printf("\n nhap cot can tim max ");
	    scanf("%d",&x);
	}while(x>=n);
	int max;
	max=a[0][x];
	for(int i=0;i<m;i++){
		if(max<a[i][x]){
			max=a[i][x];
		}
	}printf("\n max cot %d la %d",x,max);
}void timmindong(int a[100][100],int m,int n){
	int x;
	do{
		printf("\n nhap dong can tim min ");
	    scanf("%d",&x);
	}while(x>=m);
	int min;
	min=a[x][0];
	for(int j=0;j<n;j++){
		if(min>a[x][j]){
			min=a[x][j];
		}
	}printf("\n min cot %d la %d",x,min);
}
int main(){
	nhapmatran(a,m,n);
	inmatran(a,m,n);
	timmaxcot(a,m,n);
	timmindong(a,m,n);
	return 0;
}
