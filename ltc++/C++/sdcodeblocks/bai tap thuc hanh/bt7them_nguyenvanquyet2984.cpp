#include<bits/stdc++.h>
using namespace std;
void nhapquangduong(int &n){
    cout<<"\nnhap quang duong ";
    cin>>n;
}
void inthoigian(int n){
    if(n<=3000){
        cout<<"\nthoi gia di la "<<n<<"s"<<endl;
    }
    else if(n>3000 && n <=5000){
        cout<<"\nthoi gian di la "<<3000 + (n-3000)*2<<"s"<<endl;
    }
    else if(n>5000 && n<=6000){
        cout<<"\nthoi gian di la "<<3000 + 2000*2 + (n-5000)*3<<"s"<<endl;
    }
    else{
        cout<<"\nthoi gian di la "<<3000 + 2000*2 + 1000*3 + (n-6000)*5<<"s"<<endl;

    }
}
int main(){
    int n;
    do{
        nhapquangduong(n);
    }while(n<0);
    inthoigian(n);
    return 0;

}
