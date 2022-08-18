#include<bits/stdc++.h>
using namespace std;
void tinhtien(int n){
    if(n<=100){
        cout<<"\ntien phai tra la "<<100*750<<endl;
    }
    if(n>100 && n<=200){
        cout<<"\ntien phai tra la "<<100*750 + (n-100)*1250<<endl;
    }if(n>=201 && n<=300){
        cout<<"\ntien phai tra la "<<100*750 + (n-100)*1250 + (n-200)*1750<<endl;
    }if(n>=301){
        cout<<"\ntien phai tra la "<<100*750 + (n-100)*1250 + (n-200)*1750 + (n-300)*3000<<endl;
    }
}
int main(){
    int n;
    do{
        cout<<"\nnhap so kwh dien tieu thu trong mot thang ";
        cin>>n;
    }while(n<=0);
    tinhtien(n);
    return 0;
}
