#include<bits/stdc++.h>
using namespace std;
void nhap(int &n){
    cout<<"\nnhap so tien phai tra ";
    cin>>n;
}
void in(int n){
    if(n>=200000 && n<= 300000){
        cout<<"\ntien khuyen mai la "<<n - n*0.2<<endl;
    }
    else if(n>300000){
        cout<<"\ntien khuyen mai la "<<n - n*0.3<<endl;
    }
    else{
        cout<<"\nkhong duoc khuyen mai"<<endl;
    }
}
int main(){
    int n;
    do{
        nhap(n);
    }while(n<0);
    in(n);
    return 0;
}
