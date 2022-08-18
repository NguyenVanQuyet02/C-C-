#include"iostream"
#include"math.h"
#define _USE_MATH_DEFINES
using namespace std;
int gt(int n){
	int s=1;
	for(int i=1;i<=n;i++){
		s*=i;
	}
	return s;
}
int main(){
	double c;
	cout<<"nhap c ";
	cin>>c;
	double x;
	cout<<"nhap x ";
	cin>>x;
	double n=0;
	double s=1;
	double temp = fabs(pow(x,n)/gt(n));
	while(temp<=c){
		s+=pow(x,n)/gt(n);
		n++;
		temp = fabs(pow(x,n)/gt(n));
	}
	double ex=0;
	ex = s;
	cout<<"gt ex la "<<ex<<endl;
	return 0;
}
