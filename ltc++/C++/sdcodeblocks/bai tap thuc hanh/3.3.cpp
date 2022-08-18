#include<bits/stdc++.h>
using namespace std;
void nhap(float &a,float &b,float &c){
    cout<<"\n nhap ba so thuc a , b va c : ";
    cin>>a>>b>>c;
}
void nhap(float &d,float &e){
    cout<<"\n nhap hai so thuc d va e : ";
    cin>>d>>e;
}
void minmax(float a,float b,float c){
    float min =a ;
    float max = a;
    if(min>b){
        min=b;
    }
    if(min>c){
        min =c;
    }
    if(max<b){
        max=b;
    }
    if(max<c){
        max=c;
    }
    cout<<"\nso nho nhat trong ba so la "<<min<<endl;
    cout<<"\nso lon nhat trong ba so la "<<max<<endl;
}void minmax5(float a,float b,float c,float d,float e){
    float min =a ;
    float max = a;
    if(min>b){
        min=b;
    }
    if(min>c){
        min =c;
    }
    if(min>d){
        min=d;
    }
    if(min>e){
        min=e;
    }
    if(max<b){
        max=b;
    }
    if(max<c){
        max=c;
    }
    if(max<d){
        max=d;
    }
    if(max<e){
        max=e;
    }
    cout<<"\nso nho nhat trong nam so la "<<min<<endl;
    cout<<"\nso lon nhat trong nam so la "<<max<<endl;
}

int main(){
    float a,b,c,d,e;
    nhap(a,b,c);
    minmax(a,b,c);
    cout<<endl;
    nhap(d,e);
    minmax5(a,b,c,d,e);
    return 0;
}
