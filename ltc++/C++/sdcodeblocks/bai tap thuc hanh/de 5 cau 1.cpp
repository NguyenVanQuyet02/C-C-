#include<bits/stdc++.h>
using namespace std;
void nhap(float &a,float &b){
    cout<<"\nnhap he so a va b ";
    cin>>a>>b;
}
void giaiptbacnhat(float a,float b){
    if(a==0 && b!=0){
        cout<<"\nphuong trinh vo nghiem "<<endl;

    }
    else if(a!=0 && b ==0){
        cout<<"\nx = 0"<<endl;
    }
    else if(a!=0 && b!=0){
        cout<<"\nx = "<<-b/a<<endl;
    }
    else {
        cout<<"\n pt co vo so nghiem"<<endl;
    }
}
int main(){
    float a,b;
    nhap(a,b);
    giaiptbacnhat(a,b);
    return 0;
}
