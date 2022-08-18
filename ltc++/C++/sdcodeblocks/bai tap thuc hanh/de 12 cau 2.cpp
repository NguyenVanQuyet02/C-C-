#include<bits/stdc++.h>
using namespace std;
void nhap(int &n){
    cout<<"\nnhap so nguyen n: ";
    cin>>n;
}
int ktsnt(int n){
    if(n<2){
        return 0;
    }
    for(int i=2;i<=sqrt(n);i++){

        if(n%i==0){
            return 0;
        }
    }
    return 1;
}
int tongsnt(int n){
    int s=0;
    for(int i=2;i<n;i++){
        if(ktsnt(i)){
            s+=i;
        }
    }
    return s;
}
int main()
{
    int n;
    do{
        nhap(n);
    }while(n<=0);
    if(tongsnt(n)>0){
        cout<<"\ntong snt nho hon n la "<<tongsnt(n)<<endl;;
    }else{
        cout<<"\nkhong co snt";
    }
    return 0;
}
