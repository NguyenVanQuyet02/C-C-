#include<bits/stdc++.h>
using namespace std;
void nhap(int &m,int &y){
    cout<<"\nnhap thang va nam ";
    cin>>m>>y;
}
void inngay(int m,int y){
    if(m==1 || m == 3 || m==5 || m==7 || m==8 || m==10 || m==12){
        cout<<"\nthang "<<m<<" nam "<<y<<" co 31 ngay"<<endl;
    }
    else if(m==4 || m==6 || m==9 || m==11){
        cout<<"\nthang "<<m<<" nam "<<y<<" co 30 ngay"<<endl;
    }
    else if(m==2){
        if(y % 400 == 0 || y % 4 == 0 && y % 100 != 0) {
            cout << "thang 2 co 29 ngay do nam nhuan" << endl;
        }
        else{
            cout << "thang 2 co 28 ngay" << endl;

        }
    }
}
int main(){
    int m,y;
    do{
        nhap(m,y);
    }while(y<=0 || m >12 || m<1);
    inngay(m,y);
    return 0;
}
