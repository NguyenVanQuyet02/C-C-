#include"stdio.h"
#include"stdlib.h"
int main(){
	FILE *f;
	// mo file
	f = fopen("filew","r");
	if(f==NULL){
		printf("\n khong the mo hoac tao file");
		exit(1);
	}
	// doc hoac ghi du lieu
	int n;
	fscanf(f,"%d",&n);
	printf("\n gia tri cua n la : %d",n);
	// dong file
	fclose(f);
	return 0;
}
