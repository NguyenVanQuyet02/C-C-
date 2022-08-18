#include<bits/stdc++.h>
using namespace std;
void nhap(int &n){
    cout<<"\nnhap n ";
    cin>>n;
}
int tinhS(int n){
    int s=1;
    int i=1;
    while(i<=n){
        s*=i;
        i++;
    }
    return s;
}
int main(){
    int n;
    do{
        nhap(n);
    }while(n<=0);
    cout<<"\nS = "<<tinhS(n)<<endl;
    return 0;
}
