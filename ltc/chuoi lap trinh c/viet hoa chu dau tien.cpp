#include"stdio.h"
#include"string.h"
void chuyendoi(char x[]){
	for(int i=0;i<strlen(x);i++){
		if(i==0 || (i>0 && x[i-1]==32)){
			if(x[i]>=97 && x[i]<= 122)
			x[i]=x[i]-32;
		}else if(x[i]>= 65 && x[i]<=90){
			x[i]=x[i]+32;
		}
	}
}
int main(){
	char ten[50]="";
	printf("\n nhap ten : ");
	fgets(ten,sizeof(ten),stdin);
	printf("\n ten la : %s",ten);
	chuyendoi(ten);
	printf("\n ten da sua la : %s",ten);
	
}
