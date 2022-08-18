#include<bits/stdc++.h>
using namespace std;
void nhap(int &n){
    cout<<"\nnhap thang ";
    cin>>n;
}
void inngaycuathang(int n){
    switch(n){
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            cout<<"\nthang "<<n<<" co 31 ngay"<<endl;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            cout<<"\nthang "<<n<<" co 30 ngay"<<endl;
            break;
        case 2:
            cout<<"\nthang 2 co 28 ngay"<<endl;
            break;
    }
}
int main(){
    int n;
    do{
        nhap(n);
    }while(n<1 || n>12);
    inngaycuathang(n);
    return 0;
}
