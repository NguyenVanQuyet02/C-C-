#include"iostream"
#include"cmath"
using namespace std;
void nhapmang(int *a,int n) {
	for (int i = 0; i < n; i++) {
		cin >> *(a + i);
	}
}
void inmang(int *a,int n) {
	cout << "mang la" << endl;
	for (int i = 0; i < n; i++) {
		cout << *(a+i) << "  ";
	}
}
int ktsnt(int n) {
	if (n < 2) {
		return 1;
	}for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) {
			return 1;
		}
	}
	return 0;
}
int ktssnt(int n) {
	while (n != 0) {
		if (ktsnt(n)) {
			return 0;
		}
		n /= 10;
	}
	return 1;
}
void xoavt(int* a, int n,int k) {
	for (int i = k; i < n - 1; i++) {
		a[i] = a[i + 1];
	}
}
void xoasosieunguyento(int*& a, int &n) {
	int d = 0;
	for (int i = 0; i < n; i++) {
		if (ktssnt(a[i])) {
			xoavt(a, n, i);
			d++;
			n--;
		}
	}if (d > 0) {
		int* temp = new int[n];
		for (int i = 0; i < n; i++) {
			temp[i] = a[i];
		}
		delete[] a;
		a = new int[n];
		for (int i = 0; i < n; i++) {
			a[i] = temp[i];
		}
		cout << "\nmang sau khi xoa so sieu nguyen to la " << endl;
		inmang(a, n);
	}
	else {
		cout << "mang khong co so sieu nguyen to" << endl;
	}
}
int main() {
	int n;
	do {
		cout << "nhap so phan tu mang : ";
		cin >> n;
	} while (n <= 0);
	int* a = new int[n];
	nhapmang(a, n);
	inmang(a, n);
	xoasosieunguyento(a, n);
	delete[] a;
	system("pause");
	return 0;
}