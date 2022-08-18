#include<bits/stdc++.h>
using namespace std;
void nhapdiem(int &n){
    cout<<"\nnhap diem: ";
    cin>>n;
}
void hocluc(int n){
    if(n==0 || n==1 || n==2 || n==3 || n==4){
        cout<<"\nhoc luc yeu";
    }
    else if(n==5 || n==6){
        cout<<"\nhoc luc trung binh";
    }else if(n==7 || n==8){
        cout<<"\nhoc luc kha";
    }
    else if(n==9 || n==10){
        cout<<"\nhoc luc gioi";
    }
}
int main(){
    int n;
    do{
        nhapdiem(n);
    }while(n<0 || n>10);
    hocluc(n);
    return 0;
}
