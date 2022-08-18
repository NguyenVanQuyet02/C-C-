#include<bits/stdc++.h>
using namespace std;
int tongsochan(int n,int m){
    int s=0,d=0;
    for(int i=n;i<=m;i++){
        if(i%2==0){
            s+=i;
            d++;
        }
    }
    if(d>0){
        return s;
    }else{
    return 0;
    }
}

float tbc(int n,int m){
    float s=0,d=0,tbc=0;
    for(int i=n;i<=m;i++){
        if(i%3==0){
            s+=i;
            d++;
        }
    }
    if(d>0){
        return s/d;
    }else{
        return 0;
    }
}
int main(){
    int n,m;
    do{
        do{
            cout<<"\nnhap n va m (n<=m) : ";
            cin>>n>>m;
        }while(n<0 || m<0 );
    }while(m-n<=0);
    cout<<"\ntong cac so chan = "<<tongsochan(n,2*m)<<endl;
    cout<<"\ntbc cac so chia het cho 3 = "<<tbc(n,n+m)<<endl;
    return 0;
}

