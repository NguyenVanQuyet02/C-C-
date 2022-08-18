#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cout<<"nhap so tien khach phai tra ";
    cin>>x;
    if(x>= 200 && x<300){
        cout<<"\ntien khuyen mai 20% = "<<x - x*0.2<<endl;
    }else if(x>=300){
        cout<<"\ntien khuyen mai 30% = "<<x - x*0.3<<endl;
    }
    else{
        cout<<"\nkhong duoc khuyen mai"<<endl;
    }
    return 0;
}
