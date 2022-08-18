#include<bits/stdc++.h>
using namespace std;
void nhap(float &x,int &n){
	cout<<"\nnhap so thuc: ";
	cin>>x;
	cout<<"\nnhap so nguyen: ";
	cin>>n;
}
float tinhP(float x,int n){
	float s = 610*x;
	if(n>=1 && x!=0){
		for(int i=1;i<=n;i++){
			s += (pow(x,i))/(i*pow(x,2));
		}
		return s;
	}else{
		return 610 - fabs(n*pow(x,3));
	}	
}
int main(){
	float y;
	int m;
	nhap(y,m);
	cout<<"\nP(y,m) = "<<tinhP(y,m);
	return 0;
	
}
