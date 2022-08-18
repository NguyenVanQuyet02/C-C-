#include<bits/stdc++.h>
using namespace std;
void chenvt(char s[],int &n,int k, char c){
    n++;
    for(int i=n;i>=k;i--){
        s[i]=s[i-1];
    }
    s[k]=c;
    s[n]='\0';
    puts(s);
}
int main(){
    int k;
    char s[100];
    char c;
    do{
        cout<<"\nnhap xau khong qua 80 ki tu: ";
        gets(s);
    }while(strlen(s)>80);
    int n = strlen(s);
    cout<<"\n nhap mot ky tu ";
    fflush(stdin);
    c=getchar();
    fflush(stdin);
    do{
    	cout<<"\nnhap vt chen ";
    	cin>>k;
	}while(k<1 || k>n+1);
	cout<<"\nxau sau khi chen la: ";
    chenvt(s,n,k,c);
}
