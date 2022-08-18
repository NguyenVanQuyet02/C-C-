#include"stdio.h"
#include"string.h"
int kt(char x[]){
	size_t k=strlen(x);
	for(int i=0;i<k;i++){
		if(x[i]!=x[k-1-i]){
			return 0;
		}
	}
	return 1;
}
void xoaxuongdong(char x[]){
	size_t k=strlen(x);
	if(x[k-1]='\n'){
		x[k-1]='\0';
	}
}
int main(){
	char s[50];
	printf("\n nhap chuoi : ");
	fgets(s,sizeof(s),stdin);
	xoaxuongdong(s);
	if(kt(s)){
		printf("\n chuoi doi xung ");
	}else{
		printf("\n chuoi khong doi xung ");
	}
	return 0;
}
