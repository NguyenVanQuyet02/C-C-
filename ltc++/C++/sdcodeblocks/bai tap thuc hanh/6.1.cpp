#include<bits/stdc++.h>
using namespace std;


void dem(char kytu[],int n){
    int d=0;
    for(int i=0;i<n;i++){
        if(kytu[i]>=97 && kytu[i]<=122){
            d++;
        }
    }
    if(d>0){
        cout<<"\chuoi ky tu co so chu cai thuong la "<<d<<endl;
    }else{
        cout<<"\nchuoi ky tu khong co chu cai thuong"<<endl;
    }
}
void xoavt(char kytu[],int n,int k){
    for(int i=k;i<n;i++){
        kytu[i]=kytu[i+1];
    }
    kytu[strlen(kytu)]='\0';
}
void xoakytua(char kytu[],int &n){
    int d=0;
    for(int i=0;i<n;i++){
        if(kytu[i]==97){
            xoavt(kytu,n,i);
            n--;
            i--;
            d++;
        }
    }
    if(d>0){
        cout<<"\nchuoi sau khi xoa la "<<endl;
        puts(kytu);
    }else{
        cout<<"\nchuoi khong co ky tu a"<<endl;
        cout<<"\nchuoi la"<<endl;
        puts(kytu);
    }
}
int main(){
	char kytu[100];
    cout<<"\nnhap chuoi ky tu: ";
    gets(kytu);
    int n = strlen(kytu);
    cout<<"\nchuoi vua nhap la: ";
    puts(kytu);
    dem(kytu,n);
    xoakytua(kytu,n);
    return 0;
}
