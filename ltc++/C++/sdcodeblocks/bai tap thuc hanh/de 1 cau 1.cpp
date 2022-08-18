#include<bits/stdc++.h>
using namespace std;
void nhap(int &a,int &b,int &c){
    cout<<"\nnhap 3 so nguyen ";
    cin>>a>>b>>c;
}
void timmax(int a,int b,int c){
    int max = a;
    if(max<b){
        max=b;
    }
    if(max<c){
        max=c;
    }
    cout<<"\nso lon nhat la "<<max<<endl;
}
int main(){
    int a,b,c;
    nhap(a,b,c);
    timmax(a,b,c);
    return 0;
}
