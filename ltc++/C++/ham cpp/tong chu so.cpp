#include"iostream"
using namespace std;
int main(){
	int n;
	cout<<"nhap so duong n ";
	cin>>n;
	int s;
	while(n>0){
		s+=n%10;
		n/=10;
	}
	cout<<"tong cac chu so la "<<s<<endl;
	return 0;
}
