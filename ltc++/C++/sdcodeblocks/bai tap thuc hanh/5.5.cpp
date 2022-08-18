#include<bits/stdc++.h>
using namespace std;
void nhap(int &n,int &m){
    cout<<"\nnhap hai gia tri nguyen (n<m): ";
    cin>>n>>m;
}
void tbc(int n,int m){
    cout<<"\ntbc m va n = "<<float(n + m)/2<<endl;
}
void hieu(int n,int m){
    cout<<"\nhieu = "<<n - m<<endl;
}
void tongsole(int n,int m){
    int s=0,d=0;
    for(int i=n;i<=m;i++){
        if(i%2!=0){
            s+=i;
            d++;
        }
    }
    if(d>0){
        cout<<"\ntong so le = "<<s<<endl;
    }else{
        cout<<"\n khong co so le"<<endl;
    }
}
int main(){
    int n,m;
    do{
        nhap(n,m);
    }while(n>m);
    tbc(n,m);
    hieu(n,m);
    tongsole(n,m);
    return 0;
}
