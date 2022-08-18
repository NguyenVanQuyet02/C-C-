#include"stdio.h"
#include"string.h"
void xoaxuongdong(char x[]){
	int k=strlen(x);
	if(x[k-1]='\n'){
		x[k-1]='\0';
	}
}void daonguoc(char x[]){
	int k=strlen(x);
	int temp;
	for(int i=0;i<k;i++){
		temp = x[i];
		x[i] = x[k-1-i];
		x[k-1-i]=temp;
	}
}
int main(){
	char s[50];
	printf("\n nhap ");
	fgets(s,sizeof(s),stdin);
	xoaxuongdong(s);
	printf("\n s = %s",s);
	strrev(s);
	printf("\n s = %s",s);
	daonguoc(s);
	printf("\n s = %s",s);
	return 0;
	
}
