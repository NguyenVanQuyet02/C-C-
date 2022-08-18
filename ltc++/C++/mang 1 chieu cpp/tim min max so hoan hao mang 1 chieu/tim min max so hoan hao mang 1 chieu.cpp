#include"iostream"
using namespace std;
void nhapmang(int* a, int n) {
	for (int i = 0; i < n; i++) {
		cin>>*(a + i);
	}
}
void inmang(int* a, int n) {
	cout << "mang" << endl;
	for (int i = 0; i < n; i++) {
		cout << *(a + i)<<"   ";
	}
}
int ktsohoanhao(int n) {
	int tong = 1;
	for (int i = 2; i < n; i++) {
		if (n % i == 0) {
			tong += i;
		}
	}if (tong == n) {
		return 1;
	}
	return 0;
}
void xuatsohoanhao(int* a, int n) {
	cout << "\ncac so hoan hao trong mang la ";
	for (int i = 0; i < n; i++) {
		if (ktsohoanhao(a[i])) {
			cout << a[i] << "  ";
		}
	}
}
void timsohoanhaonhonhat(int* a, int n) {
	int min = 0;
	for (int i = 0; i < n; i++) {
		if (ktsohoanhao(a[i])) {
			min = a[i];
			if (min > a[i]) {
				min = a[i];
			}
		}
	}cout << "\nso hoan hao nho nhat la " << min << endl;
}
int main() {
	int n;
	do {
		cout << "nhap so phan tu mang ";
		cin >> n;
	} while (n <= 0);
	int* a = new int[n];
	nhapmang(a, n);
	inmang(a, n);
	xuatsohoanhao(a, n);
	timsohoanhaonhonhat(a, n);
	delete[] a;
	system("pause");
	return 0;
}