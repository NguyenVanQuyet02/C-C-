#include<bits/stdc++.h>
using namespace std;
void nhap(int *a,int n){
    for(int i=0;i<n;i++){
        cin>>*(a+i);
    }
}
void in(int *a,int n){
    cout<<"\nmang la"<<endl;
    for(int i=0;i<n;i++){
        cout<<"\t"<<*(a+i);
    }
}
int kttang(int *a,int n){
    int smin=a[0];
    for(int i=0;i<n-1;i++){
        if(smin <= a[i+1]){
            smin=a[i+1];
        }
        else{
            return 0;
        }
    }
    return 1;
}
int kttangngat(int *a,int n){
    int smin=a[0];
    for(int i=0;i<n-1;i++){
        if(smin < a[i+1]){
            smin=a[i+1];
        }
        else{
            return 0;
        }
    }
    return 1;
}
int ktgiam(int *a,int n){
    int smax=a[0];
    for(int i=0;i<n-1;i++){
        if(smax>=a[i+1]){
            smax=a[i+1];
        }else{
            return 0;
        }
    }
    return 1;
}
int ktgiamngat(int *a,int n){
    int smax=a[0];
    for(int i=0;i<n-1;i++){
        if(smax>a[i+1]){
            smax=a[i+1];
        }else{
            return 0;
        }
    }
    return 1;
}
void kiemtratratu(int *a,int n){
    if(kttangngat(a,n)){
        cout<<"\nmang sap xep tang ngat"<<endl;
        exit(0);
    }
    else if(ktgiamngat(a,n)){
        cout<<"\nmang sap xep giam ngat"<<endl;
        exit(0);
    }
    if(kttang(a,n)){
        cout<<"\nmang sap xep tang"<<endl;
    }
    else if(ktgiam(a,n)){
        cout<<"\nmang sap xep giam"<<endl;
    }
    else{
        cout<<"\n mang chua duoc sap xep"<<endl;
    }
}
int main(){
    int n;
    
    do{
        cout<<"\n nhap so phan tu cua mang ";
        cin>>n;
    }while(n<=0);
    int *a=new int[n];
    nhap(a,n);
    in(a,n);
    cout<<endl;
    kiemtratratu(a,n);
    delete[] a;
    return 0;
}
