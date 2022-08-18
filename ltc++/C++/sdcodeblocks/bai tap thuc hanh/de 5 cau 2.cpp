#include<bits/stdc++.h>
using namespace std;
void nhap(int &n){
    cout<<"\nnhap n ";
    cin>>n;
}

void tinhS(int n){
    int i=1;
    float s=0;
    while(i<=n){
        s+=1.0/i;
        i++;
    }
    cout<<"\nS = "<<s<<endl;
}
int main(){
    int n;
    do{
        nhap(n);
    }while(n<=0);
    tinhS(n);
    return 0;
}
