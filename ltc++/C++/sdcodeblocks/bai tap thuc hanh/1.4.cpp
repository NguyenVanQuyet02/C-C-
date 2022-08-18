#include<bits/stdc++.h>
using namespace std;
void nhaptoado(int &x,int &y){
    cout<<"nhap x va y : ";
    cin>>x>>y;
}
void D(int x1,int y1,int x2,int y2){
    cout<<"\nD = " << sqrt((pow((x2 - x1),2)) + (pow((y2 - y1),2)));
}
void M(int x1,int y1,int x2,int y2){
    cout<<"\nM = "<< fabs(x2 - x1) + fabs(y2 - y1);
}
void C(int x1,int y1,int x2,int y2){
    cout<<"\nC = "<< 1 - ((x1 * x2 + y1 * y2) / (sqrt(pow(x1,2) + pow(y1,2)) * sqrt(pow(x2,2) + pow(y2,2))));
}
int main(){
    int x1,x2,y1,y2;
    cout<<"nhap toa do A"<<endl;
    nhaptoado(x1,y1);
    cout<<"nhap toa do B"<<endl;
    nhaptoado(x2,y2);

    D(x1,y1,x2,y2);
    M(x1,y1,x2,y2);
    C(x1,y1,x2,y2);
    return 0;

}
