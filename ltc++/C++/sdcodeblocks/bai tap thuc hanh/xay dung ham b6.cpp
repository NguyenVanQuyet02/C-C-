#include<bits/stdc++.h>
using namespace std;
void nhap(float &x,int &n){
    cout<<"\nnhap so thuc: ";
    cin>>x;
    cout<<"\nnhap so nguyen duong: ";
    cin>>n;
}
float tinhF(float x,int n){
    float s=0;
    if(n>20){
        for(int i=1;i<=n;i++){
            s += pow(x,i)/(2*n - i);
        }
        return s;
    }
    else if(n>0 && n<20){
        return pow(x,n) + 1;
    }
}
int main(){
    float y;
    int m;
    nhap(y,m);
    cout<<"F(y,m) = "<<tinhF(y,m);
    return 0;
}


