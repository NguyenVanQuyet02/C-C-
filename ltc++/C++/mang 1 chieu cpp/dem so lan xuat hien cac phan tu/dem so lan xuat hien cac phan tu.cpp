#include"iostream"
using namespace std;
void nhap(int* a, int n) {
	for (int i = 0; i < n; i++) {
		cin >> *(a + i);
	}
}
void in(int* a, int n) {
	cout << "\n mang la" << endl;
	for (int i = 0; i < n; i++) {
		cout <<"  "<< * (a + i);
	}
}
void dem(int* a, int n) {
	for (int i = 0; i < n; i++) {
		int d = 1;
		for (int j = i + 1; j < n; j++) {
			if (a[i] == a[j]) {
				d++;
			}
		}
	    cout <<" \n "<< a[i] << " xuat hien " << d << " lan trong mang" << endl;
	}
}
int main() {
	int n;
	do {
		cout << "nhap so phan tu cua mang ";
		cin >> n;
	} while (n <= 0);
	int* a = new int[n];
	nhap(a, n);
	in(a, n);
	dem(a, n);
	delete[] a;
	system("pause");
	return 0;
}