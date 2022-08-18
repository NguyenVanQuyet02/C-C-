#include<bits/stdc++.h>
using namespace std;
void nhap(int &a,int &b,float &x,float &y){
    cout<<"\nnhap hai so nguyen : ";
    cin>>a>>b;
    cout<<"\nnhap hai so thuc: ";
    cin>>x>>y;
}
void tinhS(int a,int b,float x,float y){
    float s=0;
    s= 5*cos(3*x + 2) - log(pow(x,2) + 2) + (float)sqrt(pow(a,2) + pow(b,2)) - ((fabs(x - y))/(float)(pow(a,6) + 1));
    cout<<"\nS = "<<s<<endl;
}
int main(){
    int a,b;
    float x,y;
    nhap(a,b,x,y);
    tinhS(a,b,x,y);
    return 0;
}
