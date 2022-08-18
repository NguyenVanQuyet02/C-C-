#include"iostream"

using namespace std;

int func(int a){
	return a;
}
void temp(int &a,int &b){
	int temp=a;
	a=b;b=temp;
}
int func1();
int main(){
	cout<<func<<endl;// in dia chi ham trong bo nho
	cout<<func(5)<<endl;// di den dia chi ham va thuc thi ham
	
	// cau truc khai bao 1 con tro ham
	/*int(*ptr)(int//tham so ham);
	void(*ptr)(int ,int );*/
	//vd
	//int(*ptr)() = func; // phai cung kieu du lieu, cung tham so ham
	
	// goi ham bang con tro ham
	void(*ptra)(int &,int &) = temp;
	int a=3,b=7;
	cout<<"before     "<<a<<"\t"<<b<<endl;
	// goi ham tuong minh
	(*ptra)(a,b);
	cout<<"after      "<<a<<"\t"<<b<<endl;
	// goi ham ngam dinh
	ptra(a,b);                            // nen dung kieu goi nay
	cout<<"after2     "<<a<<"\t"<<b<<endl;
	// gan dia chi cua con tro ham cho ham
	return 0;
}
