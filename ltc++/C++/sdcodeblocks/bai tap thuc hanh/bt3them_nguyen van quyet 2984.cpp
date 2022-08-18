#include<bits/stdc++.h>
using namespace std;
void nhapdiem(float &n){
    cout<<"\n nhap diem tong ket ";
    cin>>n;
}
void xeploai(float n){
    if(n>=8.00){
        cout<<"\nxep loai gioi"<<endl;
    }else if(n>=7.00 && n<8.00){
        cout<<"\nxep loai kha"<<endl;
    }
    else if(n>=5.00 && n< 7.00){
        cout<<"\nxep loai trung binh"<<endl;
    }
    else if(n>=3.00 && n<5.00){
        cout<<"\nxep loai yeu"<<endl;
    }else{
        cout<<"\nxep loai kem"<<endl;
    }
}
int main(){
    float n;
    do{
        nhapdiem(n);
    }while(n>10 || n<0);
    xeploai(n);
    return 0;
}
