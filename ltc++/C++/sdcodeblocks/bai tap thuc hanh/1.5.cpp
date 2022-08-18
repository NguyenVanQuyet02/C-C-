#include<bits/stdc++.h>
using namespace std;
void nhaptoado(int &x,int &y){
    cout<<"nhap x va y : ";
    cin>>x>>y;
}

void inter(int x1,int y1,int x2,int y2,int x3,int y3,int x,int y){
    cout<<"inter = "<< sqrt((pow((x1 - x),2)) + (pow((y1 - y),2))) + sqrt((pow((x2 - x),2)) + (pow((y2 - y),2))) + sqrt((pow((x3 - x),2)) + (pow((y3 - y),2)));
}

int main(){
    int x1,x2,x3,y1,y2,y3;
    cout<<"nhap toa do A"<<endl;
    nhaptoado(x1,y1);
    cout<<"nhap toa do B"<<endl;
    nhaptoado(x2,y2);
    cout<<"nhap toa do C"<<endl;
    nhaptoado(x3,y3);

    float x,y;
    x = (float)(x1 +x2 +x3)/3;
    y = (float)(y1 +y2 +y3)/3;
    cout<<"\n toa do K = ("<<x<<","<<y<<")"<<endl;

    inter(x1,y1,x2,y2,x3,y3,x,y);
    return 0;

}
