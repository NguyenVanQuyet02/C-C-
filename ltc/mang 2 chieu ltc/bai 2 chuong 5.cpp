#include"stdio.h"
#include"math.h"
float a[100][100];
int m,n;
void nhap(float a[100][100],int &m,int &n){
	printf("\n nhap 2 so nguyen duong m,n (1<=m,n<=10) : ");
	scanf("%d%d",&m,&n);
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("\n a[%d][%d] = ",i,j);
			scanf("%f",&a[i][j]);
		}
	}
}void in(float a[100][100],int m,int n){
	printf("\n ma tran la \n");
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("%.3f\t",a[i][j]);
		}printf("\n");
	}
}void tongcb2(float a[100][100],int m,int n){
	float s=0;
	int d=0;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(a[i][j] > 3 || a[i][j] <= -1){
				s += sqrt(fabs(a[i][j]));
				d++;
			}
		}
	}if(d>0){
		printf("\n tong = %.3f",s);
	}else{
		printf("\n ma tran khong hop le");
	}
}void tong(float a[100][100],int m,int n){
	int tong=0,dem=0;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(fabs(a[i][j])>1){
				tong+=a[i][j];
				dem++;
			}
		}
	}if(dem>0){
		printf("\n tong = %d",tong);
	}else{
		printf("\n ma tran ban nhap khong hop le ");
	}
}
int main(){
	do{
		nhap(a,m,n);
	}while(m<1 || n>10);
	in(a,m,n);
	tongcb2(a,m,n);
	tong(a,m,n);
	return 0;
}
