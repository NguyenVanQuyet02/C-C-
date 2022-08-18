#include<stdio.h>
int nhap(int n){
	printf("\n nhap so phan tu cua mang ");
	scanf(" %d",&n);
	return n;
}void nhapmang(int a[],int n){
	for(int i=0;i<n;i++){
		printf("\n a[%d] = ",i);
		scanf("%d",&a[i]);
	}
}void inmang(int a[],int n){
	printf("\n mang la ");
	for(int i=0;i<n;i++){
		printf(" %d",a[i]);
	}
}void chendau(int a[],int &n){
	int x;
	int size=sizeof(a)/sizeof(a[0]);
	if(n==size){
		printf("\n mang khong the chen them ");
	}printf("\n nhap phan tu can chen vao dau mang ");
	scanf("%d",&x);
	n++;
	for(int i=n-1;i>0;i--){
		a[i]=a[i-1];
	}a[0]=x;
}void chencuoi(int a[],int &n){
	int x;
	int size=sizeof(a)/sizeof(a[0]);
	if(n==size){
		printf("\n mang khong the chen them ");
	}printf("\n nhap phan tu can chen vao cuoi mang ");
	scanf("%d",&x);
	a[n]=x;
	n++;
}void chenvtk(int a[],int &n){
	int k,x;
	int size=sizeof(a)/sizeof(a[0]);
	/*if(n==size){
		printf("\n mang khong the chen them ");
	}do{
		printf("\n nhap vt chen ");
		scanf("%d",&k);
	}while(k<0||k>n);*/
	cout<<"nhap vt chen ";
	cin>>k;
	cout<<"nhap phan tu can chen vao vt k ";
	cin>>x;
	n++;
	for(int i=n-1;i>=k;i--){
		a[i]=a[i-1];
	}a[k-1]=x;
}
int main(){
	int n,x,a[30];
	n=nhap(n);
	nhapmang(a,n);
	inmang(a,n);
	/*chendau(a,n);
	inmang(a,n);
	chencuoi(a,n);
	inmang(a,n);*/
	chenvtk(a,n);
	inmang(a,n);
	return 0;
}
