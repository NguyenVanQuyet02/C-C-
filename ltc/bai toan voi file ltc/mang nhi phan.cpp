#include"stdio.h"
#include"stdlib.h"
void nhapmang(int a[],int &n){
	do{
		printf("\n nhap so phan tu cua mang : ");
		scanf("%d",&n);
	}while(n<=0);
	for(int i=0;i<n;i++){
		printf("\n a[%d] = ",i);
		scanf("%d",&a[i]);
	}
}void inmang(int a[],int n){
	for(int i=0;i<n;i++){
		printf("\n%d",a[i]);
	}
}void xuatfile(int a[],int n,char file[20]){
	FILE *f;
	f = fopen(file,"wb");
	if(f==NULL){
		printf("\n loi mo hoac tao file ");
		return;
	}
	fwrite(&n,sizeof(a[0]),1,f);
	for(int i=0;i<n;i++){
		fwrite(&a[i],sizeof(a[0]),1,f);
	}
	fclose(f);
}void nhapfile(int a[],int &n,char file[20]){
	FILE *f;
	f = fopen(file,"rb");
	if(f==NULL){
		printf("\n loi mo hoac tao file ");
		return;
	}
	fread(&n,sizeof(a[0]),1,f);
	printf("%d\n",n);
	for(int i=0;i<n;i++){
		fread(&a[i],sizeof(a[0]),1,f);
	}
	fclose(f);
}
int main(){
	int a[30],n;
	//nhapmang(a,n);
	//inmang(a,n);
	//xuatfile(a,n,"mangnhiphan.bin");
	nhapfile(a,n,"mangnhiphan.bin");
	inmang(a,n);
	return 0;
}
