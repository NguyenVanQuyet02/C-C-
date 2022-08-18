#include<bits/stdc++.h>
using namespace std;
int main(){
	char vanban[2000];
	cout<<"\nnhap van ban:";
	gets(vanban);
	cout<<"\nvan ban vua nhap la:";
	puts(vanban);
	int d=0;
	for(int i=0;i<strlen(vanban);i++){
		if(vanban[i]>=65 && vanban[i]<=90 || vanban[i]>=97 && vanban[i]<=122 && vanban[i+1]==32 ){
			d++;
		}
		
		if(vanban[i+1]=='\0' && vanban[i]!=32 ){
			d++;
		}
	}
	cout<<"\nso tu cua van ban la: "<<d<<endl;;
}
