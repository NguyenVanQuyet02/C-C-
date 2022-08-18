#include<bits/stdc++.h>
using namespace std;
void nhap(int &n){
    cout<<"\nnhap n: ";
    cin>>n;
}
void intamgiac(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*\t";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    do{
        nhap(n);
    }while(n<5 || n>10);
    intamgiac(n);
    return 0;
}
