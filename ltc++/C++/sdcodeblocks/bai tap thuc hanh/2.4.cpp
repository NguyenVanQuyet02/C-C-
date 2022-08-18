#include<bits/stdc++.h>
using namespace std;
void nhap(int &n){
    cout<<"\n nhap so nguyen n ";
    cin>>n;
}
int ktsnt(int n){
    if(n<2){
        return 0;
    }for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return 0;
        }
    }return 1;
}
void tongsnt(int n){
    int s=0,d=0;
    for(int i=1;i<=n;i++){
        if(ktsnt(i)){
            d++;
            s+=i;
        }
    }
    if(d>0){
        cout<<"\nco "<<d<<"snt thuoc doan [1,"<<n<<"]"<<endl;
        cout<<"tong la "<<s<<endl;
    }
    else{
        cout<<"khong co snt thuoc doan [1,"<<n<<"]"<<endl;
    }
}
int main(){
    int n;
    nhap(n);
    tongsnt(n);
    return 0;
}
