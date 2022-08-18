#include<bits/stdc++.h>
using namespace std;
void nhap(int &n){
    cout<<"\nnhap so nguyen n : ";
    cin>>n;
}
int ktsohoanhao(int n){
    int s=0;
    for(int i=1;i<n;i++){
        if(n%i==0){
            s+=i;
        }
    }
    if(s==n){
        return 1;
    }else{
        return 0;
    }
}
int main(){
    int n;
    do{
        nhap(n);
    }while(n<=0);
    if(ktsohoanhao(n)){
        cout<<n<<" la so hoan hao"<<endl;
    }else{
        cout<<n<<" khong la so hoan hao"<<endl;
    }
    return 0;
}
