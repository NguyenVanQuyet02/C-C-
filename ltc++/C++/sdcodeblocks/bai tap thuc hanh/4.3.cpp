#include<bits/stdc++.h>
using namespace std;
void nhapvector(int *a,int n){
    for(int i=0;i<n;i++){
        cin>>*(a+i);
    }
}
void intd(int *a,int n){
    for(int i=0;i<n;i++){
        cout<<"\t"<<a[i];
    }
}
void tichvohuong(int *a,int *b,int n){
    float s=0;
    for(int i=0;i<n;i++){
        s +=a[i] * b[i];
    }
    cout<<"\ntich vo huong = "<<s<<endl;
}
int main(){
    int n;
    
    do{
        cout<<"\nnhap so toa do 2 vector ";
        cin>>n;
    }while(n<2);
    int *x=new int[n];
    int *y=new int[n];
    cout<<"\nnhap vector x"<<endl;
    nhapvector(x,n);
    cout<<"\nnhap vector y"<<endl;
    nhapvector(y,n);
    cout<<"\ntoa do vt x"<<endl;
    intd(x,n);
    cout<<"\ntoa do vt y"<<endl;
    intd(y,n);
    tichvohuong(x,y,n);
    delete[] x;
    delete[] y;
    return 0;
}
