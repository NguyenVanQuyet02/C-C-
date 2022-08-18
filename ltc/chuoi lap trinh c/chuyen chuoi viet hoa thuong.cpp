#include"stdio.h"
#include"string.h"
int main(){
	char x[50];
	printf("\n nhap ");
	fgets(x,sizeof(x),stdin);
	printf("x = %s",x);
	strupr(x);
	printf("\n chuyen sang viet hoa %s",x);
	strlwr(x);
	printf("\n chuyen sang viet thuong %s",x);
	return 0;
}
