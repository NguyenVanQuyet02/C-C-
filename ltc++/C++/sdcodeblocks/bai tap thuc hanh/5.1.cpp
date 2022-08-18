#include<bits/stdc++.h>
using namespace std;
void A(int n){
    int a=0,d=0;
    for(int i=1;i<=n;i++){
        if(i%2==0){
            a+=i;
            d++;
        }
    }
    if(d>0){
        cout<<"\n tong cac so chan = "<<a<<endl;
    }else{
        cout<<"\nkhong co so chan"<<endl;
    }
}
void B(int n){
    int b=0,d=0;
    for(int i=1;i<=n;i++){
        if(i%3==0){
            b+=i;
            d++;
        }
    }
    if(d>0){
        cout<<"\n tong cac so chia het cho 3 = "<<b<<endl;
    }else{
        cout<<"\nkhong co so chia het cho 3"<<endl;
    }
}
void C(int n){
    int c=0,d=0;
    for(int i=1;i<=n;i++){
        if(i%5==0){
            c+=i;
            d++;
        }
    }
    if(d>0){
        cout<<"\n tong cac so chia het cho 5 = "<<c<<endl;
    }else{
        cout<<"\nkhong co so chia het cho 5"<<endl;
    }
}
int main(){
    int n;
    do{
        cout<<"\nnhap n ";
        cin>>n;
    }while(n<=0);
    A(n);
    B(2*n);
    C(3*n);
    return 0;
}
