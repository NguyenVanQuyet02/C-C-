#include<bits/stdc++.h>
using namespace std;
void nhap(int &n){
    cout<<"\nnhap n ";
    cin>>n;
}
void tinhS(int n){
    int s=0;
    for(int i=1;i<=n;i++){
        s+= pow(i,2);
    }
    cout<<"\nS = "<<s<<endl;
}
int main(){
    int n;
    nhap(n);
    tinhS(n);
    return 0;
}
