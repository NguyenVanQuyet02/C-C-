#include<iostream>
using namespace std;
int main(){
	cout<< setw(20) << left << "ten";
	cout<< setw(10) << left <<"tuoi";
	cout<< setw(10) << right <<"gioi tinh";
	cout<<setfill('-');
	cout<<setw(50)<<"-"<<endl;
	cout<<setw(20)<<left<<"NGUYEN VAN QUYET";
	cout<<setw(10)<<left<<19;
	cout<<setw(10)<<right<<"nam";
	return 0;
}
