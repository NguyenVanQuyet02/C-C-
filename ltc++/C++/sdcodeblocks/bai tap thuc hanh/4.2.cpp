#include<bits/stdc++.h>
using namespace std;
void nhapmang(int *a,int n){
    srand(time(NULL));
    for(int i=0;i<n;i++){
        a[i]=rand()%100+1;
    }
}
void inmang(int *a,int n){
    cout<<"\nmang la "<<endl;
    for(int i=0;i<n;i++){
        cout<<"\t"<<*(a+i);
    }
}
void sapxeptangdan(int *a,int n){
    int tg;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                tg=a[i];
                a[i]=a[j];
                a[j]=tg;
            }
        }
    }
}
int main(){
    int n;
    
    do{
        cout<<"\n nhap so phan tu cua mang ";
        cin>>n;
    }while(n<=0);
    int *a=new int[n];
    nhapmang(a,n);
    inmang(a,n);
    cout<<"\nmang sau khi duoc sap xep tang dan la"<<endl;
    sapxeptangdan(a,n);
    inmang(a,n);

    delete[] a;
    return 0;
}
