#include"iostream"
using namespace std;
//ham tra ve gia tri nen sd khi tra ve gia tri la bien khai bao trong ham hoac doi so ham duoc truyen theo gia tri 
int kq(int x,int y){
	return x+y;
} 
// ham tra ve dia chi 
int* diachi(int size){
	return new int[size];
}
//ham tra ve tham chieu nen sd khi gt tra ve la mang hoac 1 con tro
int& max(int &a,int&b){
	return a>b ? a:b;// tra ve tham chieu cua bien lon hon
}
int main(){
	int a=2;
	int b=3;
	// ham tra ve gia tri
	cout<<"ket qua ham tra ve gia tri la "<<kq(a,b)<<endl;// 
	cout<<endl;
	
	// ham tra ve dia chi
	int *arr = diachi(10);
	
	// ham tra ve tham chieu
	max(a,b)=30;// sau do thay doi a hoac b duoc tra ve = 30
	// ham tra ve gt nao thi dia chi nao thi gt dia chi do se bi thay doi
	cout<<"ket qua ham tra ve dia chi a = "<<a<<endl;
	cout<<"ket qua ham tra ve dia chi b = "<<b<<endl;

	
}
