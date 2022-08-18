#include"stdio.h"
#include"string.h"
int main(){
	char ten[50];
	char *x;
	printf("\n nhap ten ");
	fgets(ten,sizeof(ten),stdin);
	printf("\n ten la %s",ten);
	strlwr(ten);
	printf("\n ten chuyen sang chu thuong la %s",ten);
	x = strchr(ten,'q');
	printf("\n ket qua tim kiem la %s",x);
	return 0;
	
}
