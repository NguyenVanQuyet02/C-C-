#include<bits/stdc++.h>
using namespace std;
int main(){
    float a,b,c,min=0,max=0;
    cout<<"\nnhap 3 so thuc ";
    cin>>a>>b>>c;
    min=a<b?a:b;
    min=min<c?min:c;
    cout<<"\nmin = "<<min;
    max=a>b?a:b;
    max=max>c?max:c;
    cout<<"\nmax = "<<max;
    return 0;
}
