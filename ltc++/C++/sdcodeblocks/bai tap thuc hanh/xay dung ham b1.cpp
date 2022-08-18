#include<bits/stdc++.h>
using namespace std;
void nhap(float &x,int &n){
    cout<<"\nnhap so thuc: ";
    cin>>x;
    cout<<"\nnhap so nguyen duong: ";
    cin>>n;
}
float tong(int n){
    float s=0;
    for(int i=1;i<=n;i++){
        s+=i;
    }
    return s;
}
float tinhF(float x,int n){
    float s=0;
    if(n<20){
        for(int i=1;i<=n;i++){
        s+=(float)(x-i)/tong(i);
        }
    }else{
        s = (float)sqrt(n) + x;
    }
    return s;
}
int main(){
    float y;
    int m;
    do{
        nhap(y,m);
    }while(m<0);
    cout<<"F(y,m) = "<<tinhF(y,m);
    return 0;
}
