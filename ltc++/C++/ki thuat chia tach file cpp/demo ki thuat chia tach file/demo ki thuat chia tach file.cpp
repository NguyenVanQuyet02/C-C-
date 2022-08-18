#include"thuviencuatoi.h"
int main() {
	int n;
	cout << "nhap so nguyen n ";
	cin >> n;
	int kt = kiem_tra_snt(n);
	if (kt == 1) {
		cout << "\n" << n << " la snt" << endl;
	}
	else {
		cout << n << " khong la snt";
	}
	int ktshh = kiem_tra_so_hoan_hao(n);
	if (ktshh == 1) {
		cout << "\n" << n << " la so hoan hao" << endl;
	}
	else {
		cout << n << " khong la so hoan hao"<<endl;
	}
	int a = 6, b = 2;
	cout << "tong 2 so la " << tinh_tong(a, b);
	return 0;
}