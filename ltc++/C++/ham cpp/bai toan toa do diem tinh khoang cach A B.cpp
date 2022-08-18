#include<iostream>
#include"math.h"
using namespace std;
void nhapvt(int &x1,int &y1){
	cout<<"nhap toa do ";
	cin>>x1>>y1;
}
void euclidean(int x1,int y1,int x2,int y2){
	float s=0;
	s=sqrt(pow(x2 - x1,2) + pow(y2 - y1,2));
	cout<<"khoang cach A ,B theo ct euclidean la "<<s<<endl;
}
void manhattan(int x1,int y1,int x2,int y2){
	float s=0;
	s=fabs(x2 - x1) + fabs( y2 - y1);
	cout<<"khoang cach A ,B theo ct manhattan la "<<s<<endl;
}
void cosin(int x1,int y1,int x2,int y2){
	float s = 0;
	float kq =0;
	s = (x1*x2 + y1*y2)/(sqrt(pow(x1,2) + pow(y1,2)) * sqrt(pow(x2,2) + pow(y2,2)));
	kq = 1 - s;
	cout<<"khoang cach A ,B theo ct cosin la "<<kq<<endl;
}
int main(){
	int x1,x2,y1,y2;
	cout<<"nhap toa do A ";
	nhapvt(x1,y1);
	cout<<"nhap toa do B ";
	nhapvt(x2,y2);
	euclidean(x1,y1,x2,y2);
	manhattan(x1,y1,x2,y2);
	cosin(x1,y1,x2,y2);
	return 0;
}
