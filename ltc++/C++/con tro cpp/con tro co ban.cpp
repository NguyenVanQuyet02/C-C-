#include"iostream"
using namespace std;
int main(){
	int n=10;
	cout<<"gia tri n = "<<n<<endl;
	cout<<"dia chi n = "<<&n<<endl;
	int *ptr;// cach khai bao 1 con tro
	ptr = &n;// con tro chua dia chi bien
	cout<<"dia chi con tro tro den = "<<ptr<<endl;//con tro luu dia chi cua bien
	cout<<"gia tri cua con tro = "<<*ptr<<endl;// in gia tri cua dia chi ma con tro tro den
	*ptr =20;// con tro tro den dia chi bien va thay doi gia tri
	cout<<"gia tri bien sau khi bi con tro thay doi gt la "<<n<<endl;// in bien da bi con tro thay doi gia tri
	// con tro null(chuyen sang vscode chay)
	//int *ptr=nullptr;// nen khoi tao con tro null khi con tro chua tro den dia chi nao
	// sd con tro cap phat dong cpp
	int *ptr1 = new int ;//cap phat bo nho dong cho con tro
	delete ptr1;// giai phong trao lai vung nho cho he dieu hanh
	//ptr1= nullptr;// sau khi xoa thi chuyen con tro thanh con tro null
	// khong nen cap phat nhieu lan 1 con tro ,vung cap phat trc se bi mat,se bi ro ri bo nho
	return 0;
}
