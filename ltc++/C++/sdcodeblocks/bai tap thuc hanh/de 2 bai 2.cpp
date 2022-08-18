#include<bits/stdc++.h>
using namespace std;
void nhap(int &n){
    cout<<"\nnhap n ";
    cin>>n;
}
void tinhS(int n){
    int s=0;
    int i =1;
    while(i<=n){
        s+= pow(i,2);
        i++;
    }
    cout<<"\nS = "<<s<<endl;
}
int main(){
    int n;
    nhap(n);
    tinhS(n);
}
