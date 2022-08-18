#include"stdio.h"
#include"math.h"
void nhapmang(int a[],int &n){
	do{
		printf("\n nhap so phan tu cua mang (>=1) : ");
		scanf("%d",&n);
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
	}while(n<1);
}void inmang(int a[],int n){
	printf("\n mang la ");
	for(int i=0;i<n;i++){
		printf(" %d",a[i]);
	}
}void tinhtongsoleduong(int a[],int n){
	int s=0,d=0;
	float tbc;
	for(int i=0;i<n;i++){
		if(a[i]%2!=0 && a[i]>0){
			s+=a[i];
			d++;
		}
	}if(d>0){
		tbc=(float)s/d;
		printf("\n tbc cac so le duong la %.2f",tbc);
	}else{
		printf("\n mang khong co so le duong");
	}
}int snt(int n){
	if(n<2){
		return 0;
	}for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			return 0;
		}
	}
	return 1;
}
void timminam(int a[],int n){
	int dem=0;
	int min;
	for(int i=0;i<n;i++){
		if(a[i]<0){
			min=a[i];
			if(min>a[i]){
				min=a[i];
			}
			dem++;
		}
	}if(dem>0){
		printf("\n min am la %d",min);
	}else{
		printf("\n mang khong co so am ");
	}
}void demsnt(int a[],int n){
	int demsnt=0;
	for(int i=0;i<n;i++){
		if(snt(a[i])){
			demsnt++;
		}
	}printf("\n mang co %d snt ",demsnt);
}
int main(){
	int a[30],n;
	nhapmang(a,n);
	inmang(a,n);
	tinhtongsoleduong(a,n);
	timminam(a,n);
	demsnt(a,n);
	return 0;
}
