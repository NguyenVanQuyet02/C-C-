#include<bits/stdc++.h>
using namespace std;
void nhap(int &a,int &b,int &c){
    cout<<"\nnhap 3 canh cua tam giac: ";
    cin>>a>>b>>c;
}
int kttamgiac(int a,int b,int c){
    if(a + b > c && a + c > b && b + c > a && a!=0 && b!=0 && c!=0){
        return 1;
    }
    return 0;
}
int tinhchuvitamgiac(int a,int b,int c){
    return a + b + c;
}
int main(){
    int a,b,c;
    nhap(a,b,c);
    if(kttamgiac(a,b,c)){
        cout<<"\n3 canh la 3 canh cua tam giac"<<endl;
        cout<<"\nchu vi tam giac la "<<tinhchuvitamgiac(a,b,c)<<endl;
    }
    else{
        cout<<"\nday khong phai tam giac"<<endl;
    }
    return 0;
}
