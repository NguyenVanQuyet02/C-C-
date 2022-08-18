#include<bits/stdc++.h>
using namespace std;
void nhap(float &x,int &n){
    cout<<"\nnhap so thuc: ";
    cin>>x;
    cout<<"\nnhap so nguyen duong: ";
    cin>>n;
}
float tinhF(float x,int n){
    float s=2008;
    if(n>0){
        for(int i=1;i<=n;i++){
            s+=pow(-1,i+1)*pow(x,i);
        }
        return s;
    }else{
        return (float)(fabs(n) + pow(sin(x),2));
    }
}
int main(){
    float y;
    int m;
    nhap(y,m);
    cout<<"F(y,m) = "<<tinhF(y,m);
    return 0;
}
