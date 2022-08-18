#include<bits/stdc++.h>
using namespace std;
void nhap(int &n){
    cout<<"\nnhap n: ";
    cin>>n;
}
void luachon(int n,char k){
    if(k=='a' || k=='A'){
        cout<<"\nket qua = "<<n*10<<endl;
    }
    else if(k=='b' || k=='B'){
        cout<<"\nket qua = "<<n*100<<endl;
    }
}
int main(){
    int n;
    char k;
    nhap(n);
    cout<<"Nhap lua chon: ";
    cin>>k;
    luachon(n,k);
    return 0;
}
