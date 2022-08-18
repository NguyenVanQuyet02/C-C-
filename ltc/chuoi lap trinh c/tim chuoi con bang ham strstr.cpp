#include"stdio.h"
#include"string.h"
void xoaxuongdong(char x[]){
	size_t k = strlen(x);
	if(x[k-1]='\n'){
		x[k-1]='\0';
	}
}
int main(){
	char s1[50];
	char s2[50];
	printf("\n nhap s1 : ");
	fgets(s1,sizeof(s1),stdin);
	xoaxuongdong(s1);
	printf("\n nhap chuoi can tim : ");
	fgets(s2,sizeof(s2),stdin);
	xoaxuongdong(s2);
	char *kq = strstr(s1,s2);
	if(kq!= NULL){
		printf("\n tim thay chuoi ");
	}else{
		printf("\n khong tim thay chuoi ");
	}
	return 0;
}
