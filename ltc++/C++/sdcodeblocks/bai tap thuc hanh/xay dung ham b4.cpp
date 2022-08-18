#include<bits/stdc++.h>
using namespace std;
void nhap(float &x,int &n){
    cout<<"\nnhap so thuc: ";
    cin>>x;
    cout<<"\nnhap so nguyen duong: ";
    cin>>n;
}
float gt(int n){
    float s=1;
    for(int i=1;i<=n;i++){
        s*=i;
    }
    return s;
}
float tinhF(float x,int n){
    if(n>0){
        float s=2000;

        for(int i=1;i<=n;i++){
            s+=pow(-1,i)*((pow(x,i))/(gt(i)));
        }
        return s;
    }
    else{
        return pow(sin(x),abs(n));
    }
}
int main(){
    float y;
    int m;
    nhap(y,m);
    cout<<"F(y,m) = "<<tinhF(y,m);
    return 0;
}


