#include"stdio.h"
int main(){
	int tuoi;
	char ten[50];
	printf("\n nhap vao tuoi cua ban ");
	scanf("%d",&tuoi);
	getchar();
	printf("\n nhap ten cua ban ");
	fgets(ten,sizeof(ten),stdin);
	printf("\n ten cua ban la ");
	puts(ten);
	printf("\n tuoi cua ban la %d",tuoi);
	return 0;
}
