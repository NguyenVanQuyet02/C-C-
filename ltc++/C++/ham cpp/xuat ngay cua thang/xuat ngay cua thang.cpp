#include"iostream"
using namespace std;
int main() {
	int m, y;
	do {
		cout << "nhap thang va nam : ";
		cin >> m >> y;
	} while (m <= 0 || m > 12 || y <= 0);
	switch (m) {
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			 cout << "thang " << m << " co 31 ngay" << endl;
			 break;
		case 4 :
		case 6:
		case 9:
		case 11:
			cout << "thang " << m << " co 30 ngay" << endl;
			break;
		case 2 :
			if(y % 400 == 0 || y % 4 == 0 && y % 100 != 0) {
				cout << "thang 2 co 29 ngay do nam nhuan" << endl;
				break;
			}else{
				cout << "thang 2 co 28 ngay" << endl;
			    break;
			}
		default :
			cout << "khong hop le" << endl;
			break;
	}
	return 0;
}