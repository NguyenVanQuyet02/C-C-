#include"stdio.h"
#include"string.h"
int main(){
	char x1[50];
	char x2[50];
	printf("\n nhap x1 ");
	fgets(x1,sizeof(x1),stdin);
	printf("\n nhap x2 ");
	fgets(x2,sizeof(x2),stdin);
	
	printf("\n x1 la %s",x1);
	printf("\n x2 la %s",x2);
	printf("\n so sanh x1 va x2 la %d",strcmp(x1,x2));
	return 0;
}
