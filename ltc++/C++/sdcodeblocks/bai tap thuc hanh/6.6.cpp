#include<bits/stdc++.h>
using namespace std;
void nhapmang(int *a,int n){
    for(int i=0;i<n;i++){
        cin>>*(a+i);
    }
}
void inmang(int *a,int n){
    cout<<"\nmang la"<<endl;
    for(int i=0;i<n;i++){
        cout<<"\t"<<*(a+i);
    }
}
void xoavt(int *a,int n,int k){
    for(int i=k;i<n-1;i++){
        a[i]=a[i+1];
    }
}
void xoaptchan(int*& a,int &n){
    for(int i=0;i<n;i++){
        if(a[i]%2==0){
            xoavt(a,n,i);
            i--;
            n--;
            //giai phong o nho
            int *temp = new int[n];
            for(int i=0;i<n;i++){
                temp[i]=a[i];
            }
            delete[] a;
            a=new int[n];
            for(int i=0;i<n;i++){
                a[i]=temp[i];
            }
            delete[] temp;
        }
    }
}
int main(){
    int n;
    int *a=new int[n];
    do{
        cout<<"\nnhap so phan tu cua mang ";
        cin>>n;
    }while(n<=0);
    nhapmang(a,n);
    inmang(a,n);
    xoaptchan(a,n);
    inmang(a,n);
    delete[] a;
    return 0;
}
