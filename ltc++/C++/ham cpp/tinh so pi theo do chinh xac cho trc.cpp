#include"iostream"
#include"math.h"
using namespace std;
int main(){
	float c;
	cout<<"nhap c ";
	cin>>c;
	long n=0;
	int ex=-1;
	double temp=1/(2.0 * n+1);
	double s=0;
	while(temp>=c){
		s += ex*temp*-1;
		ex*=-1;
		n++;
		temp=1.0/(2.0*n+1);
	}
	double pi=0;
	pi =4*s;
	cout<<"PI = "<<pi<<endl;
	return 0;
}
