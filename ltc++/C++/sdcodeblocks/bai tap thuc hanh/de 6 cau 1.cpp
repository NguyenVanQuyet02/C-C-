#include<bits/stdc++.h>
using namespace std;
void nhap(float &a,float &b,float &c){
    cout<<"\nnhap he so ptbac 2: ";
    cin>>a>>b>>c;
}
void giaiptbac2(float a,float b,float c){
    float delta = 0;
    delta = b*b - 4*a*c;
    if(a==0){
        cout<<"\nkhong phai pt bac 2"<<endl;
        exit(0);
    }
    if(delta==0){
        cout<<"\npt co nghiem kep x = "<<-b/2*a<<endl;
    }
    if(delta>0){
        cout<<"\npt co hai nghiem phan biet"<<endl;
        cout<<"x1 = "<<(-b - sqrt(delta))/2*a<<endl;
        cout<<"x2 = "<<(-b + sqrt(delta))/2*a<<endl;

    }
    else{
            cout<<"phuong trinh vo nghiem"<<endl;
    }
}
int main(){
    float a,b,c;
    nhap(a,b,c);
    giaiptbac2(a,b,c);
    return 0;
}
