#include"stdio.h"
#include"string.h"
// fgets(ten,sizeof(ten),stdin) : ham nhap chuoi
// puts(ten) : ham in chuoi
// getchar()     : ham sua loi nhap chuoi
// strlen(ten) : ham dem ki tu trong chuoi
// strcat(c1,c2) : ham noi 2 chuoi
// strcpy(c1,c2) : ham copy chuoi
// strcmp(c1,c2) : ham so sanh chuoi
// strupr(ten)   : ham chuyen sang chu hoa
// strlwr(ten)   : ham chuyen sang chu thuong
// strrev(ten)   : ham dao nguoc chuoi
// strchr(ten,ki tu) : ham tim kiem ki tu trong chuoi
// strstr(ten,ten)   : ham tim chuoi con (tra ve gt con tro)

int my_strlen(char x[]){
	int d=0;
	while(x[d]!='\0'){
		d++;
	}return d;
	/*
	for(int i=0;;i++){
	   if(x[i]=='\0'){
	       return i;
       }
	*/
}
int xoaxuongdong(char x[]){
	int len=strlen(x);
	if(x[len-1]=='\n'){
		x[len-1]='\0';
	}
}
int main(){
	char ten[50];//="NGUYEN VAN QUYET";
	int tuoi;
	printf("\n nhap tuoi cua ban ");
	scanf("%d",&tuoi);
	getchar();
	printf("\n nhap ten cua ban ");
	fgets(ten,sizeof(ten),stdin);
	xoaxuongdong(ten);
	printf("\n ten ban la ");
	puts(ten);
	printf("\n do dai ten ban la %d",strlen(ten));
	printf("\n my_strlen");
	printf("\n do dai ten ban la %d",my_strlen(ten));
	printf("\n tuoi cua ban la %d",tuoi);
	return 0;
}
