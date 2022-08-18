#include<bits/stdc++.h>
using namespace std;
void nhap(float &x,float &y){
    cout<<"\nnhap toa do x va y ";
    cin>>x>>y;
}
void KCE(float x1,float y1,float x2,float y2){
    cout<<"\nkhoang cach Euclidien = "<<sqrt(pow(x2-x1,2) + pow(y2-y1,2))<<endl;
}
void mind(float x1,float y1,float x2,float y2,float x3,float y3){
    float da=sqrt(pow(x1,2) + pow(y1,2));
    float db=sqrt(pow(x2,2) + pow(y2,2));
    float dc=sqrt(pow(x3,2) + pow(y3,2));
    float dmin = da;
    if(dmin>db){
        dmin = db;
    }if(dmin>dc){
        dmin=dc;
    }
    if(dmin==da){
        cout<<"\ndiem gan tam O nhat la A"<<endl;
    }else if(dmin==db){
        cout<<"\ndiem gan tam O nhat la B"<<endl;
    }else if(dmin==dc){
        cout<<"\ndiem gan tam O nhat la C"<<endl;
    }
}
void maxd(float x1,float y1,float x2,float y2,float x3,float y3){
    float da=sqrt(pow(x1,2) + pow(y1,2));
    float db=sqrt(pow(x2,2) + pow(y2,2));
    float dc=sqrt(pow(x3,2) + pow(y3,2));
    float dmax = da;
    if(dmax<db){
        dmax = db;
    }if(dmax<dc){
        dmax=dc;
    }
    if(dmax==da){
        cout<<"\ndiem xa tam O nhat la A"<<endl;
    }else if(dmax==db){
        cout<<"\ndiem xa tam O nhat la B"<<endl;
    }else if(dmax==dc){
        cout<<"\ndiem xa tam O nhat la C"<<endl;
    }
}
int main(){
    float x1,y1,x2,y2,x3,y3;
    cout<<"\nnhap toa do diem A : ";
    nhap(x1,y1);
    cout<<"\nnhap toa do diem B : ";
    nhap(x2,y2);
    cout<<"\nnhap toa do diem C : ";
    nhap(x3,y3);
    KCE(x1,y1,x3,y3);
    mind(x1,y1,x2,y2,x3,y3);
    maxd(x1,y1,x2,y2,x3,y3);
    return 0;
}
