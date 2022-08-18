#include"iostream"

using namespace std;

void inmang(int *ptr){
	//cout<<ptr<<endl;//in dia chi
	cout<<*ptr<<endl;// in gt
}
int main(){
	int a[4]= {1,2,3,4};
	cout<<"mang la "<<endl;
	for(int *ptr = a;ptr<a+4;ptr++){
		//cout<<*ptr<<endl;
		inmang(ptr);
	}
	return 0;
}
