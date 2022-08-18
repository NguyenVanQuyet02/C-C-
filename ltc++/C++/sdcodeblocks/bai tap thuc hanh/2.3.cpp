#include<bits/stdc++.h>
using namespace std;
int n;
float x;
void nhap(int &n,float &x){
    cout<<"nhap so thuc x : ";
    cin>>x;
    cout<<"nhap so nguyen n: ";
    cin>>n;
}
void S(int n, float x){
    float s=0;
    if(n%2==0){
        for(int i=2;i<=n;i++){
            s += pow(x,i)/pow(3,i-1);
        }
        cout<<"\n S = "<<2016*x + s<<endl;
    }else{
        cout<<"\n S = 0"<<endl;
    }
}
int main(){
    nhap(n,x);
    S(n,x);
    return 0;

}
