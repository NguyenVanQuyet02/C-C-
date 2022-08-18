#include"iostream"
#include"cstring"
using namespace std;
void nhapxau(string &str){
	do{
		cout<<"nhap xau ki tu khong qua 50 ki tu : ";
		getline(str);
	}while(strlen(str)<=50);
}
int main(){
	string ten[50];
	nhapxau(ten);
	return 0;
}
