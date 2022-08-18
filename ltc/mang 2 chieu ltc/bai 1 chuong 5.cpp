#include"stdio.h"
int m,n,a[100][100];
void nhapmatran(int a[100][100],int &m,int &n){
	printf("\n nhap m va n : ");
	scanf("%d%d",&m,&n);
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("\n a[%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
}void inmatran(int a[100][100],int m,int n){
	printf("\n ma tran la \n");
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf(" %d\t",a[i][j]);
		}printf("\n");
	}
}
void tongduongam(int a[100][100],int m,int n){
	int d=0,da=0;
	printf("\n tong duong cua moi cot la ");
	for(int j=0;j<n;j++){
		int tongd=0;
	    for(int i=0;i<m;i++){
		    if(a[i][j]>0){
			    tongd+=a[i][j];
		    }
	    }printf(" %d\t",tongd);
	}
	printf("\n tong am cua moi cot la ");
	for(int j=0;j<n;j++){
		int tonga=0;
		for(int i=0;i<m;i++){
			if(a[i][j]<0){
				tonga+=a[i][j];
				da++;
			}
		}printf(" %d\t",tonga);
	}
}
int main(){
	do{
		nhapmatran(a,m,n);
	}while(m<1 || n>10);
	inmatran(a,m,n);
	tongduongam(a,m,n);
	return 0;

}

