#include"iostream"
#include"cstdlib"
#include"ctime"
using namespace std;
void nhapmang(int *a, int n) {
	srand(time(NULL));
	for (int i = 0; i < n; i++) {
		*(a + i) = rand() % 100 + 1;
	}
}
void inmang(int* a, int n) {
	cout << "mang so nguyen la " << endl;
	for (int i = 0; i < n; i++) {
		cout << *(a + i) << "  ";
	}
}
void xoavt(int *&a, int &n) {
	int k;
	do {
		cout << "nhap vt can xoa ";
		cin >> k;
	} while (k < 0 || k >= n);

	for (int i = k; i <n-1; i++) {
		a[i] = a[i + 1];
	}n--;
	// giai phong o nho vua xoa
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
int main() {
	int n;
	do {
		cout << "nhap so phan tu cua mang ";
		cin >> n;
	} while (n <= 0);
	int* a = new int[n];
	nhapmang(a, n);
	inmang(a, n);
	xoavt(a, n);
	inmang(a, n);
	delete[] a;
	system("pause");
	return 0;
}