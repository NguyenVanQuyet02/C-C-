#include<bits/stdc++.h>
using namespace std;

void kthl(char kytu[],int n){ 
    int d=0;
    for(int i=0;i<n;i++){
        if(kytu[i]==32 && kytu[i+1]==32){
            cout<<"\chuoi khong hop le"<<endl;
            exit(0);
        }
    }
    for(int i=0;i<n;i++){
        if(kytu[i]==32){
            d++;
        }
    }
    if(d<0 || d>=10){
        cout<<"\chuoi khong hop le"<<endl;
        return;
    }
    else if(d>=0 && d<10){
        cout<<"\chuoi hop le"<<endl;
    }
}
int main(){
	char kytu[100];
    do{
        cout<<"\nnhap mot su ky tu khong qua 50 ky tu : ";
        gets(kytu);
    }while(strlen(kytu)>=50);
    int n = strlen(kytu);
    kthl(kytu,n);
    return 0;
}
