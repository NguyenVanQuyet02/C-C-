#include"iostream"
using namespace std;
int main(){
	int n;
	cout<< "nhap so nguyen duong ";
	cin>>n;
	int temp=n;
	int dao=0;
	while(n>0){
		dao=dao*10+n%10;
		n/=10;
	}
	if(temp==dao){
		cout<<temp<<" la so thuan nghich"<<endl;
	}else{
		cout<<temp<<" khong la so thuan nghich"<<endl;
	}
	return 0;
}
