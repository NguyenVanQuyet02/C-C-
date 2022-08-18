#include<bits/stdc++.h>
using namespace std;
void nhap(int *a,int n){
    for(int i=0;i<n;i++){
        cin>>*(a+i);
    }
}
void in(int *a,int n){
    cout<<"\nvector"<<endl;
    for(int i=0;i<n;i++){
        cout<<"\t"<<*(a+i);
    }
}
void chuan1(int *a,int n){
    int s=0;
    for(int i=0;i<n;i++){
        s+= fabs(a[i]);
    }
    cout<<"\nchuan 1 = "<<s<<endl;
}
void chuan2(int *a,int n){
    float s=0;
    for(int i=0;i<n;i++){
        s+=pow(a[i],2);
    }
    cout<<"\nchuan 2 = "<<sqrt(s)<<endl;
}
void chuanvocung(int *a,int n){
    int smax=a[0];
    for(int i=0;i<n;i++){
        if(smax<a[i]){
            smax=a[i];
        }
    }
    cout<<"\nchuan vo cung = "<<smax<<endl;
}
void chuan0(int *a,int n){
    int d=0;
    for(int i=0;i<n;i++){
        if(a[i]!=0){
            d++;
        }
    }
    cout<<"\nchuan 0 = "<<d<<endl;
}
int main(){
    int n;
    
    do{
        cout<<"\n nhap toa do vector ";
        cin>>n;
    }while(n<=0);
    int *a=new int[n];
    nhap(a,n);
    in(a,n);
    cout<<endl;
    chuan1(a,n);
    chuan2(a,n);
    chuanvocung(a,n);
    chuan0(a,n);
    delete[] a;
    return 0;
}
