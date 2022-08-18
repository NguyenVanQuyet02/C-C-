#include"iostream"
using namespace std;
void nhap1(int n){
	n = n * 2;
}void nhap2(int &n){
	n=n * 2;
}
void nhap3(int* n){
	*n=*n * 2;
}
void nhap4(const int &n){
	//n = n * 2;
}
int main(){
	int n=100;
	cout<<"trc khi goi 1   "<<n<<endl;
	nhap1(n);
	cout<<"sau khi goi 1   "<<n<<endl;
	cout<<"trc khi goi 2   "<<n<<endl;
	nhap2(n);
	cout<<"sau khi goi 2   "<<n<<endl;
	cout<<"trc khi goi 3   "<<n<<endl;
	nhap3(&n);
	cout<<"sau khi goi 3   "<<n<<endl;;
	cout<<"trc khi goi 4   "<<n<<endl;
	nhap3(&n);
	cout<<"sau khi goi 4   "<<n<<endl;;
	return 0;
}
