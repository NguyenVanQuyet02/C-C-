#include"iostream"
using namespace std;
void nhapmang(int* a, int n) {
	for (int i = 0; i < n; i++) {
		cin >> *(a + i);
	}
}
void inmang(int* a, int n) {
	cout << "\nmang la " << endl;
	for (int i = 0; i < n; i++) {
		cout << "  " << *(a + i);
	}
}
void xoavt(int* a, int n, int k) {
	for (int i = k; i < n - 1; i++) {
		a[i] = a[i + 1];
	}
}
void xoatrungnhau(int*& a, int& n) {
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (a[i] == a[j]) {
				xoavt(a, n, j);
				n--;
				j--;
				int* temp = new int[n];
				for (int i = 0; i < n; i++) {
					temp[i] = a[i];
				}
				delete[] a;
				a = new int[n];
				for (int i = 0; i < n; i++) {
					a[i] = temp[i];
				}
			}
		}
	}
}
int main(){
	int n;
	do {
		cout << "nhap so phan tu cua mang ";
		cin >> n;
	} while (n <= 0);
	int* a = new int[n];
	nhapmang(a, n);
	inmang(a, n);
	cout <<"\nmang sau khi xoa phan tu trung nhau la " << endl;
	xoatrungnhau(a, n);
	inmang(a, n);
	delete[] a;
	system("pause");
	return 0;
}