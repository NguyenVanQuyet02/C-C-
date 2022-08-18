#include<bits/stdc++.h>
using namespace std;
void nhap(float &x,float &y,int &n){
    cout<<"\n nhap hai so thuc x va y : ";
    cin>>x>>y;
    cout<<"\n nhap so nguyen n: ";
    cin>>n;
}
float F(float x,int n){
    return 2*pow(x,2) + n*x + n;
}
int main(){
    float x,y;
    int n;
    nhap(x,y,n);
    cout<<"\nP = "<<F(x,n) + F(y,n) + F(x+y,n)<<endl;
    return 0;
}
