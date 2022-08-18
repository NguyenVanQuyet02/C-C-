#include"iostream"
#include"cstdio"
#include"math.h"
using namespace std;
void nhap(int &x1,int &x2,int &x3){
	cout<<"nhap 3 toa do vecto : ";
	cin>>x1>>x2>>x3;
}void tichvohuong(int x1,int x2,int x3,int y1,int y2,int y3){
	int s=0;
	s=x1*y1+x2*y2+x3*y3;
	cout<<"tich vo huong T = "<<s<<endl;
}void f(float x,int n){
	cout<<"nhap gt thuc : ";
	cin>>x;
	cout<<"nhap gt nguyen : ";
	cin>>n;
	float s=s=sqrt(exp(x)+n);
	for(int i=1;i<=n;i++){
		s+=x/pow(5,i);
	}
	cout<<"Q = "<<s<<endl;
}int main(){
	int x1,x2,x3,y1,y2,y3;
	nhap(x1,x2,x3);
	nhap(y1,y2,y3);
	tichvohuong(x1,x2,x3,y1,y2,y3);
	float x;
	int n;
	f(x,n);
	return 0;
}
