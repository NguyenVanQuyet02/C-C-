#include<bits/stdc++.h>
using namespace std;
void nhapdiem(int &n){
    cout<<"\nnhap diem: ";
    cin>>n;
}
void hocluc(int n){
    switch(n){
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
            cout<<"\nhoc luc yeu";
            break;
        case 5:
        case 6:
            cout<<"\nhoc luc trung binh";
            break;
        case 7:
        case 8:
            cout<<"\nhoc luc kha";
            break;
        case 9:
        case 10:
            cout<<"\nhoc luc gioi";
            break;
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
