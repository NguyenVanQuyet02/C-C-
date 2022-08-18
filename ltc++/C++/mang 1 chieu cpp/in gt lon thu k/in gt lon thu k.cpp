#include"iostream"
#include"cstdlib"
#include"ctime"
using namespace std;

void nhapmang(int* a, int n) {
	srand(time(NULL));
	for (int i = 0; i < n; i++) {
		*(a + i) = rand() % 100 + 1;
	}
}
void inmang(int* a, int n) {
	cout << "\nmang la " << endl;
	for (int i = 0; i < n; i++) {
		cout <<"  "<< * (a + i);
	}
}
void sapxep(int* a, int n) {
	int tg;
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (a[i] < a[j]) {
				tg = a[i];
				a[i] = a[j];
				a[j] = tg;
			}
		}
	}
}
void timmaxthuk(int* a, int n) {
	int k;
	do {
		cout << "\nnhap k " << endl;
		cin >> k;
	} while (k > n || k <= 0);
	for (int i = 0; i < n; i++) {
		cout << "gt lon thu " << k << " la " << a[k- 1] << endl;
		break;
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
	sapxep(a, n);
	timmaxthuk(a, n);
	delete[] a;
	return 0;
}
