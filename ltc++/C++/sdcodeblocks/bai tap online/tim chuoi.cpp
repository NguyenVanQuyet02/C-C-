#include<bits/stdc++.h>
using namespace std;
void nhapchuoi(char *a,char *b){
	cout<<"\nnhap ten hs ht1:";
	gets(a);
	cout<<"\nnhap ten hs ht2:";
	gets(b);
}
void ssphanbiethoathuong(char *a,char *b){
	cout<<"\n ht1 va ht2 ";
	if(strcmp(a,b)==0){
		cout<<"";
	}else{
		cout<<"khong ";
	}
	cout<<"giong nhau neu phan biet chu hoa va chu thuong"<<endl;
}
void sskophanbietchuhoathuong(char *a,char *b){
	cout<<"\n ht1 va ht2 ";
	if(strcmpi(a,b)==0){
		cout<<"";
	}else{
		cout<<"khong ";
	}
	cout<<"giong nhau neu khong phan biet chu hoa va chu thuong"<<endl;
}
void kt3kytudau(char *a,char *b){
	int d=0;
	cout<<"\n ht1 va ht2 ";
	for(int i=0;i<((strlen(a)>strlen(b))?strlen(a):strlen(b));i++){
		if(i==3){
			break;
		}else if(a[i]==b[i]){
			d++;
		}else{
			cout<<"khong ";
			break;
		}
	}
	if(d>0){
		cout<<"";
	}
	cout<<"giong nhau neu chi tinh 3 ky tu dau tien"<<endl;
}
void timchuoi(char *a,char *b){
	cout<<"\nchuoi ht1 ";
	if(strstr(b,a)>0){
		cout<<"";
	}else{
		cout<<"khong ";
	}
	cout<<"xuat hien trong chuoi ht2"<<endl;
}
int main(){
	char ht1[40],ht2[40];
	nhapchuoi(ht1,ht2);
	ssphanbiethoathuong(ht1,ht2);
	sskophanbietchuhoathuong(ht1,ht2);
	kt3kytudau(ht1,ht2);
	timchuoi(ht1,ht2);
	return 0;
}
