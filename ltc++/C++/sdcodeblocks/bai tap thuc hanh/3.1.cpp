#include<bits/stdc++.h>
using namespace std;
long giaithua(int n){
    long s=1;
    for(int i=1;i<=n;i++){
        s*=i;
    }
    return s;
}
void S(int n){
    cout<<"\nS = "<< (float)(giaithua(n) + 1) / giaithua(n+1);
}
int main(){
    int n;
    cout<<"\nnhap so nguyen n ";
    cin>>n;
    S(n);
    return 0;
}
