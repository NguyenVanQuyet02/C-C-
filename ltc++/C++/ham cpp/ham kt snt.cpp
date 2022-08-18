#include<iostream>
using namespace std;

int ktsnt(int a){
	if(a<2){
		return 0;
	}for(int i=2;i<a-1;i++){
		if(a%i==0){
			return 0;
		}
	}return 1;
}
int main(){
	int a=8;
	if(ktsnt(a)){
		cout<<"la snt"<<endl;
	}else{
		cout<<"khong la snt"<<endl;
	}
	return 0;
}
