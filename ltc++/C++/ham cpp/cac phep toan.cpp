#include"iostream"
using namespace std;
void nhap(int &a,int &b){
	cout<<"nhap a,b : ";
	cin>>a>>b;
	cout<<endl;
}
void tong(int a,int b){
	cout<<a+b<<endl;
	cout<<a-b<<endl;
	cout<<a*b<<endl;
	cout<<a/b<<endl;
	cout<<a%b<<endl;
}
int main(){
	int a,b;
	nhap(a,b);
	tong(a,b);
	return 0;
}
