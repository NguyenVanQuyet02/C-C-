#include<bits/stdc++.h>
using namespace std;
void nhap(float &x,int &n){
    cout<<"\nnhap so thuc(>0): ";
    cin>>x;
    cout<<"\nnhap so nguyen duong (>=2): ";
    cin>>n;
}
float P(float x,int n){
    float s= 610*x;
    if(n>=2 && x>0){
        for(int i=2;i<=n;i++){
            s+= (sqrt(x))/(2*i);
        }
        return s;

    }else{
        return (6102021*x + abs(pow(n,3)));
    }
}
int main(){
    float y;
    int m;
    nhap(y,m);
    cout<<"\nP(y,m) = "<<P(y,m)<<endl;
    return 0;
}

