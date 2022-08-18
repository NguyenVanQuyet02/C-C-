#include"stdio.h"
#include"string.h"
#include"conio.h"
// ham xoa ki tu trong chuoi
void xoa_ki_tu_tai_vi_tri(char s[],int vt){
	int n=strlen(s);
	for(int i = vt ; i <n ; i++){
		s[i] = s[i+1];
	}
	s[strlen(s)] = '\0';
}
void them(char s[],int vitrithem,char kituthem){
	int n=strlen(s);
	for(int i=n-1;i>=vitrithem;i--){
		s[i+1]=s[i];
	}s[vitrithem] = kituthem;
	s[n + 1]='\0';
}
int main() {
	char ten[50];
	printf("\n nhap ten: ");
	fflush(stdin);
	gets(ten);
	printf("\n ten ban vua nhap la : %s", ten);
	//xoa_ki_tu_tai_vi_tri(ten,2);
	//printf("\n ten ban vua xoa ki tu la : %s", ten);
	them(ten,2,'u');
	printf("\n ten ban vua them ki tu la : %s", ten);
	getch();
	return 0;
}
