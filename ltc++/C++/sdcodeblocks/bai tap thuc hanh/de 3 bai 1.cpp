#include<bits/stdc++.h>
using namespace std;
void nhap(int &n){
    cout<<"\nnhap so bat ki ";
    cin>>n;
}
void docso(int n){
    switch(n){
        case 0:
            cout<<"\nso khong"<<endl;
            break;
        case 1:
            cout<<"\nso mot"<<endl;
            break;
        case 2:
            cout<<"\nso hai"<<endl;
            break;
        case 3:
            cout<<"\nso ba"<<endl;
            break;
        case 4:
            cout<<"\nso bon"<<endl;
            break;
        case 5:
            cout<<"\nso nam"<<endl;
            break;
        case 6:
            cout<<"\nso sau"<<endl;
            break;
        case 7:
            cout<<"\nso bay"<<endl;
            break;
        case 8:
            cout<<"\nso tam"<<endl;
            break;
        case 9:
            cout<<"\nso chin"<<endl;
            break;
        default:
            cout<<"\n khong doc duoc"<<endl;
            break;
    }
}
int main(){
    int n;
    nhap(n);
    docso(n);
    return 0;
}
