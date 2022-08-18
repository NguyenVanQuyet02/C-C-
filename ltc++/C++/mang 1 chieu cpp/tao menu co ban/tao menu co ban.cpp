#include"iostream"
using namespace std;
int main() {
	int k;
	float a, b;
	cout << "nhap a va b : ";
	cin >> a >> b;
	while (true) {
		system("cls");
		cout << "hai so la " << a << "  " << b << endl;
		cout << "\t======== MENU ========" << endl;
		cout << "1 - tinh tong 2 so" << endl;
		cout << "2 - tinh hieu 2 so " << endl;
		cout << "3 - tinh tich 2 so" << endl;
		cout << "4 - tinh thuong 2 so" << endl;
		cout << "0 - ket thuc" << endl;
		cout << "\t========= END =========" << endl;
		cout << "nhap lua chon cua ban ";
		cin >> k;
		if (k == 1) {
			cout << "tong " << a + b << endl;
			system("pause");
		}
		else if (k == 2) {
			cout << "hieu " << a - b << endl;			
			system("pause");
		}
		else if (k == 3) {
			cout << "tich " << a * b << endl;
			system("pause");
		}
		else if (k == 4) {
			cout << "thuong " << a / b << endl;
			system("pause");
		}
		else if (k == 0) {
			break;
		}
	}
	return 0;
}