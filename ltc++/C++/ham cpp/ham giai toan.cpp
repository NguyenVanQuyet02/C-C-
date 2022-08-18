#include<iostream>
#include<math.h>
using namespace std;
int main(){
	float x;
	cout<<"nhap x ";
	cin>>x;
	float s=0;
	s = (pow(x,2) + exp(fabs(x)) + pow(sin(x),2))/(pow((x*x + 1), 1.0/5));
	cout<<"Fx = "<<s<<endl;
	return 0;
}
