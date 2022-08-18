#include<pch.h>

#include"iostream"
using namespace std;
int main(){
	int a[10] = {1,2,3,4,5,6,7,8,9};
	for(auto &item : a){
		cout<<item<<" ";
	}
	return 0;
}
