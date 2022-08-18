#include<bits/stdc++.h>
using namespace std;
void nhapmang(int *a,int n){
    srand(time(NULL));
    for(int i=0;i<n;i++){
        a[i]=rand()%99+1;
    }
}
void inmang(int *a,int n){
    cout<<"\n mang la"<<endl;
    for(int i=0;i<n;i++){
        cout<<"\t"<<*(a+i);
    }
}
void timmax(int *a,int n){
    int max=a[0];
    for(int i=0;i<n;i++){
        if(max<a[i]){
            max=a[i];
        }
    }
    cout<<"\ngia tri lon nhat la "<<max<<endl;
}
void timmin(int *a,int n){
    int min=a[0];
    for(int i=0;i<n;i++){
        if(min>a[i]){
            min=a[i];
        }
    }
    cout<<"gia tri nho nhat la "<<min<<endl;
}

int main(){
    int n;
    do{
        cout<<"\n nhap so phan tu cua mang ";
        cin>>n;
    }while(n<=0);
    int *a = new int[n];
    nhapmang(a,n);
    inmang(a,n);
    timmax(a,n);
    timmin(a,n);
    delete[] a;
    return 0;
}
