#include<bits/stdc++.h>
using namespace std;
float delta=0,x1=0,x2=0,x=0;
void nhap(int &a,int &b,int &c){
    cout<<"nhap he so a, b, c : ";
    cin>>a>>b>>c;
}
void giaiptbac2(int a,int b,int c){
    if(a==0){
        cout<<"pt khong phai pt bac 2"<<endl;
        exit(0);
    }
    else{
        delta = pow(b,2) - 4*a*c;
        if(delta==0){
            cout<<"pt co nghiem kep x = "<< -b/2/a <<endl;
        }else if(delta>0){
            cout<<"pt co hai nghiem phan biet"<<endl;
            cout<<"x1 = "<< (-b-sqrt(delta))/2/a<<endl;
            cout<<"x2 = "<< (-b+sqrt(delta))/2/a<<endl;
        }else{
            cout<<"phuong trinh vo nghiem"<<endl;
        }
    }
}
int main(){
    int a,b,c;
    nhap(a,b,c);
    giaiptbac2(a,b,c);
    return 0;
}

