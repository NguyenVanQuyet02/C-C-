#include<bits/stdc++.h>
using namespace std;
void nhap(int &n){
    cout<<"\nnhap n ";
    cin>>n;
}
void tinhS(int n){
    int i=1;
    int s=0;
    do{
        s+=pow(i,2);
        i++;
    }while(i<=n);
    cout<<"\nS = "<<s<<endl;
}
int main(){
    int n;
    do{
        nhap(n);
    }while(n<0);
    tinhS(n);
    return 0;
}
