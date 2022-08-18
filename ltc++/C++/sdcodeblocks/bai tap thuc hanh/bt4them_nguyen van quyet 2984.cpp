#include<bits/stdc++.h>
using namespace std;
void nhap(float &a,float &b){
    cout<<"\nnhap hai he so a b cua pt bac nhat ";
    cin>>a>>b;
}
void giaipt(float a,float b){
    if(a==0 && b!=0){
        cout<<"pt vo nghiem"<<endl;
    }
    if (a==0 && b==0){
        cout<<"\npt co nghiem voi moi x "<<endl;
    }
    if(a!=0 && b==0){
        cout<<"\nx = 0"<<endl;
    }if(a!=0 && b != 0){
        cout<<"\nx = "<<-b/a<<endl;
    }
}
int main(){
    float a,b;
    nhap(a,b);
    giaipt(a,b);
    return 0;
}
