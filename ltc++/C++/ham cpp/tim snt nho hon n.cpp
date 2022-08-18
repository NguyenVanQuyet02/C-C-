#include"iostream"
#include"math.h"
using namespace std;
int ktsnt(int n){
	if(n<2){
		return 0;
	}for(int i=2;i<n-1;i++){
		if(n%i==0){
			return 0;
		}
	}
	return 1;
}
int main(){
	int n;
	cout<<"nhap so nguyen duong n : ";
	cin>>n;
	cout<<"cac snt la ";
	for(int i=2;i<n;i++){
		if(ktsnt(i)==1){
			cout<<"\t"<<i;
		}
	}
	return 0;
}
