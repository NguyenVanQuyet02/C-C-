#include"stdio.h"
int nhap(int x){
	printf("\n nhap so phan tu cua mang ");
	scanf("%d",&x);
	return x;
}
void nhapmang(int a[],int n){
	for(int i=0;i<n;i++){
		printf("\n a[%d] = ",i);
		scanf("%d",&a[i]);
	}
}void inmang(int a[],int n){
	printf("\n mang la ");
	for(int i=0;i<n;i++){
		printf(" %d",a[i]);
	}
}void sapxep(int a[],int n){
	int tg;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]>a[j]){
				tg=a[i];
				a[i]=a[j];
				a[j]=tg;
			}
		}
	}
}void tronmang(int a[],int n1,int b[],int n2,int c[],int &n3){
	n3=n1+n2;
	int i1=0,i2=0,i3=0;
	while(i3<n3){
		if(i1>=n1){
			c[i3]=b[i2];
			i2++;
		}else if(i2>=n2){
			c[i3]=a[i1];
			i1++;
		}else if(a[i1]<b[i2]){
			c[i3]=a[i1];
			i1++;
		}else if(a[i1]>b[i2]){
			c[i3]=b[i2];
			i2++;
		}
		i3++;
	}
}int main(){
	int a[30],b[30],c[100];
	int n1,n2,n3;
	printf("\n mang A");
	n1=nhap(n1);
	nhapmang(a,n1);
	inmang(a,n1);
	sapxep(a,n1);
	inmang(a,n1);
	printf("\n mang B");
	n2=nhap(n2);
	nhapmang(b,n2);
	inmang(b,n2);
	sapxep(b,n2);
	inmang(b,n2);
	tronmang(a,n1, b,n2, c,n3);
	inmang(c,n3);
	return 0;
}
