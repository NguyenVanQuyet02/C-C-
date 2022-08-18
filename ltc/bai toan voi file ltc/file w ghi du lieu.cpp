#include"stdio.h"
#include"stdlib.h"
int main(){
	FILE *f;
	// tao || mo file
	f = fopen("filew","w");
	if(f== NULL){
		printf("\n khong the tao hoac mo file");
		exit(1);
	}
	// ghi file
	int n;
	printf("\n nhap n : ");
	scanf("%d",&n);
	fprintf(f,"%d",n);
	//dong file
	fclose(f);
	return 0;
}
