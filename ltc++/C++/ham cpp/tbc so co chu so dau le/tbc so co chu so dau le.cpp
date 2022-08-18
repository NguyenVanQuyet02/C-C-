#include"iostream"
#include"cstdlib"
#include"ctime"
using namespace std;
void nhapmang(int* a, int n) {
	srand(time(NULL));
	for (int i = 0; i < n; i++) {
		*(a+i) = rand() % 100 + 1;
	}
}
void inmang(int* a, int n) {
	cout << "mang so nguyen la " << endl;
	for (int i = 0; i < n; i++) {
		cout << *(a + i) << "  ";
	}
}
int kt(int n) {
	while (n >= 10) {
		n /= 10;
	}
	if (n % 2 != 0) {
		return 1;
	}
	return 0;
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
	float tbc = 0;
	int d = 0, s = 0;
	cout << endl;
	for (int i = 0; i < n; i++) {
		if (kt(a[i])) {
			s += a[i];
			d++;
		}
	}if (d > 0) {
		tbc = (float)s / d;
		cout << "tbc cac so co chu so dau le la " << tbc << endl;
	}
	else {
		cout << "mang khong hop le" << endl;
	}
	delete[] a;
	system("pause");
	return 0;
}