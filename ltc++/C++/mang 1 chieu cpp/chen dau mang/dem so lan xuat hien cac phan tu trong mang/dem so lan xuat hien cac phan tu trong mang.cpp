#include"iostream"
using namespace std;
void nhapmang(int* a, int n) {
	for(int i=0;i<n;i++){
		cin >> *(a + i);
	}
}void inmang(int* a, int n) {
	cout << "mang" << endl;
	for (int i = 0; i < n; i++) {
		cout << *(a + i);
	}
}void dem(int* a, int n) {
	int x=0;
	for (int i = 0; i < n; i++) {
        int d = 0;
		a[i] == x;
		for (int j = i + 1; j < n; j++) {
			if (x == a[j]) {
				d++;
			}
		}
		cout << "so lan xuat hien cua " << a[i] << "trong mang la " << d << endl;

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
	dem(a, n);

	delete[] a;
	system("pause");
	return 0;
}