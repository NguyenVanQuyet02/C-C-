#include<bits/stdc++.h>
using namespace std;
void nhap(float &x,int &n){
    cout<<"\nnhap so thuc: ";
    cin>>x;
    cout<<"\nnhap so nguyen duong: ";
    cin>>n;
}
float tinhF(float x,int n){
    float s=2000;
    if(n>0 && n<20){
        for(int i=1;i<=n;i++){
            s+=(float)pow(x,i)/pow(i,2);
        }
        return s;
    }else{
        return 2019 + pow(x,n);
    }
}
int main(){
    float y;
    int m;
    nhap(y,m);
    cout<<"F(y,m) = "<<tinhF(y,m);
    return 0;
}

