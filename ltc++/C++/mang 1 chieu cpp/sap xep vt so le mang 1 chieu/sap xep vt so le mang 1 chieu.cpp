#include"iostream"
using namespace std;
void nhapmang(int *a, int n) {
	for (int i = 0; i < n; i++) {
		cin>>*(a+i);
	}
}
void inmang(int* a, int n) {
	cout << "mang" << endl;
	for (int i = 0; i < n; i++) {
		cout << *(a + i) << "   ";
	}
}
void sapxepsole(int a[], int n) {
	int temp = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] % 2 != 0) {
			for (int j = i + 1; j < n; j++) {
				if (a[j] % 2 != 0) {
					if (a[i] > a[j]) {
						temp = a[i];
						a[i] = a[j];
						a[j] = temp;
					}
				}
			}
		}
	}
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
	sapxepsole(a, n);
	inmang(a, n);

	delete[] a;
	system("pause");
	return 0;
}