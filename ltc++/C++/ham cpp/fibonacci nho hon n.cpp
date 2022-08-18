#include"iostream"
using namespace std;
int f(int n){
	if(n==1 || n==2){
		return 1;
	}else{
		return f(n-1)+f(n-2);
	}
}int main(){
	int n;
	cout<<"nhap n ";
	cin>>n;
	cout<<"cac so fibonacci nho hon "<<n<<"la ";
	for(int i=1;i<n;i++){
		cout<<"\t"<<f(i);
	}
	return 0;
}
