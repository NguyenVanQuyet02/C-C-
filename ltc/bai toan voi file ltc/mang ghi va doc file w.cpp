#include"stdio.h"
#include"stdlib.h"
void nhapmang(int a[],int &n){
	do{
		printf("\n nhap so phan tu cua mang : ");
		scanf("%d",&n);
	}while(n<=0);
	for(int i=0;i<n;i++){
		scanf("\n%d",&a[i]);
	}
}void inmang(int a[],int n){
	printf("\n");
	for(int i=0;i<n;i++){
		printf("\n%d",a[i]);
	}
}
void xuatfile(int a[],int n,char file[20]){
	FILE *f;
	f = fopen(file,"w");
	if(f == NULL){
		printf("\n loi khong tao hoac mo duoc file");
		return;
	}
	fprintf(f,"%d\n",n);
	for(int i=0;i<n;i++){
		fprintf(f,"%d\n",a[i]);
	}
	fclose(f);
}void nhapfile(int a[],int &n,char file[20]){
	FILE *f;
	f =fopen(file,"r");
	if(f==NULL){
		printf("\n loi mo hoac tao file");
		return;
	}fscanf(f,"%d",&n);
	printf("\n%d",n);
	for(int i=0;i<n;i++){
		fscanf(f,"%d\n",&a[i]);
	}
	fclose(f);
}void nhapfile2(int a[],int &n,char file[20]){
	FILE *f;
	f = fopen(file,"r");
	if(f==NULL){
		printf("\n loi tao hoac mo file");
		return;
	}
	int i=0;
	while(!feof(f)){
		fscanf(f,"%d\n",&a[i]);
		i++;
	}
	n=i;
}
int main(){
	int a[10],n;
	//nhapmang(a,n);
	//inmang(a,n);
	//xuatfile(a,n,"filemang.out");
	nhapfile2(a,n,"filemang.out");
	inmang(a,n);
	return 0;
}
