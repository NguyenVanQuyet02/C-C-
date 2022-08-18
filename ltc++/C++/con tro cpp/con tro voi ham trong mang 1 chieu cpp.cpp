#include"iostream"
using namespace std;
void thaydoimang(int *ptr){
	*ptr = 6;
	ptr[1]=7;
}int main(){
	int a[]={1,2,3,4,5};
	cout<<"a[0] = "<<a[0]<<endl;
	cout<<"a[1] = "<<a[1]<<endl;
	thaydoimang(a);
	cout<<endl;
	cout<<"a[0] = "<<a[0]<<endl;
	cout<<"a[1] = "<<a[1]<<endl;
	return 0;
}
