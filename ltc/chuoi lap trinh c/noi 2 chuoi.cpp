#include"stdio.h"
#include"string.h"
int main(){
	char x1[50]= "Xin Chao ";
	char x2[50]="Nguyen Van Quyet";
	printf("\n x1 = %s",x1);
	printf("\n x2 = %s",x2);
	strcat(x1,x2);
	printf(" \n %s",x1);
	printf("\n copy chuoi");
	strcpy(x1,x2);
	printf("\n %s",x2);
	return 0;
}
