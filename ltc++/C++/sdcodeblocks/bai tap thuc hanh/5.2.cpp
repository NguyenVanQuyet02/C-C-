#include<bits/stdc++.h>
using namespace std;
float F1(int n){
    float f1=0;
    for(int i=1;i<=n;i++){
        f1+=i;
    }
    return f1;
}
float F2(int n){
    float f2=0;
    for(int i=1;i<=n;i++){
        f2+=pow(i,i);
    }
    return f2;
}
float F3(int n){
    float f3=0;
    for(int i=1;i<=n;i++){
        f3 += 1.0/(2*i + 1);
    }

    return f3;
}
int main(){
    int n;
    do{
        cout<<"\nnhap so nguyen n ";
        cin>>n;
    }while(n<=0);
    cout<<"\nT = "<<F1(n) + F2(n) + F3(n)<<endl;
    return 0;
}
