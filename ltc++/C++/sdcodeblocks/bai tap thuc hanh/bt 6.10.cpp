#include<bits/stdc++>
using namespace std;
void nhap(float &x,int &n){
    cout<<"\nnhap so thuc(>0): ";
    cin>>x;
    cout<<"\nnhap so nguyen duong (>=2): ";
    cin>>n;
}
float P(float x,int n){
    if(n>=2 && x>0){
        float s=610*x;
        for(int i=2;i<=n;i++){
            s+= (sqrt(x))/(2*i);
        }
        return s;

    }else{
        return (6102021*x + abs(pow(n,3)));
    }
}
int main(){
    float y;
    int m;
    do{
        nhap(y,m);
    }while(n<2 || x<=0);
    cout<<"\nP(y,m) = "<<P(y,m)<<endl;
    return 0;
}
