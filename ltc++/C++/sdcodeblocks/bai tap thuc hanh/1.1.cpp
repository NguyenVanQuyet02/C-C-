/*Bài 1.1. Nhập hai số nguyên a,b; tính tổng, hiệu, tích, thương, đồng dư (phép chia dư %) và in
chúng ra màn hình*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cout<<"nhap a va b : ";
    cin>>a>>b;
    cout<<"tong = "<< a + b <<endl;
    cout<<"hieu = "<< a - b <<endl;
    cout<<"tich = "<< a * b <<endl;
    cout<<"thuong = "<<(float)a / b <<endl;
    cout<<"du = "<< a % b <<endl;
    return 0;
}
