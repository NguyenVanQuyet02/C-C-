#include"stdio.h"
int a[100][100],n,m;
void nhapmatran(int a[100][100],int &m,int &n){
	printf("\n nhap m va n ");
	scanf("%d%d",&m,&n);
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
}float tbc(int a[100][100],int m,int n){
	if(m<=0||n<=0){
		return 0;
	}int tong=0;
	float tbc=0;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			tong+=a[i][j];
		}
	}tbc=(float)tong/(m*n);
	return tbc;
}void tbcsochiahetchox(int a[100][100],int m,int n){
	int x;
	int s=0;
	int d=0;
	float tbcx;
	printf("\n nhap x : ");
	scanf("%d",&x);
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(a[i][j]%x==0){
				s+=a[i][j];
				d++;
			}
		}
	}
	if(d>0){
		tbcx=(float)s/d;
		printf("\n tbc so chia het cho x = %.2f",tbcx);
	}else{
		printf("\n mang khong co phan tu chia het cho x");
	}
}
int main(){
	int x,dm=0;
	nhapmatran(a,m,n);
	inmatran(a,m,n);
	printf("\n tbc = %.2f",tbc(a,m,n));
	tbcsochiahetchox(a,m,n);
	return 0;
}
