#include<bits/stdc++.h>
using namespace std;
void nhap(int &n){
    cout<<"\nnhap so nguyen n: ";
    cin>>n;
}
int ktsnt(int n){
    if(n<2){
        return 0;
    }
    for(int i=2;i<=sqrt(n);i++){

        if(n%i==0){
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n;
    do{
        nhap(n);
    }while(n<=0);
    if(ktsnt(n)){
        cout<<n<<" la snt";
    }else{
        cout<<n<<" khong la snt";
    }
    return 0;
}
