#include"iostream"
using namespace std;
void nhapmang(int* a, int n) {
	for (int i = 0; i < n; i++) {
		cin >> *(a + i);
	}
}
void inmang(int* a, int n) {
	cout << "\nmang la" << endl;
	for (int i = 0; i < n; i++) {
		cout <<"    "<< * (a + i);
	}
}
int tim_UCLN(int a, int b) {
	int ucln = 0;
	if (a == 0 || b == 0) {
		ucln = a + b;
	}
	while (a != b) {
		if (a > b) {
			a = a - b;
		}
		else if (a < b) {
			b = b - a;
		}
	}
	ucln = a;
	return ucln;
}
int tim_BCNN(int a, int b) {
	int bcnn;
	if (a == 0 || b == 0) {
		bcnn = a + b;
	}
	for (int i = 1; i <= a * b; i++) {
		if (i % a == 0 && i % b == 0) {
			bcnn = i;
			break;
		}
	}
	return bcnn;
}
int UCLN(int* a, int n) {
	int x = a[0];
	for (int i = 1; i < n; i++) {
		x = tim_UCLN(x, a[i]);
	}
	return x;
}
int BCNN(int* a, int n) {
	int x = a[0];
	for (int i = 1; i < n; i++) {
		x = tim_BCNN(x, a[i]);
	}
	return x;
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
	cout << "\nucln cua mang la " << UCLN(a, n) << endl;
	cout << "\nbcnn cua mang la " << BCNN(a, n) << endl;

	delete[] a;
	return 0;
}