#include"iostream"
using namespace std;
int f(int a){
	if(a==0){
		return 0;
	}if(a==1){
		return 1;
	}else{
		return f(a - 1)+f(a - 2);
	}
}int main(){
	int n;
	cout<<"nhap n : ";
	cin>>n;
	cout<<"so fibonacci la "<<f(n)<<endl;
	return 0;
}
