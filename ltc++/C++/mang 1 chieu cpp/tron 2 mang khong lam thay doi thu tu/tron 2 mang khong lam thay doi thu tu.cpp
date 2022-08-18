#include"iostream"

using namespace std;
void nhapmang(int a[], int &n) {
	do {
		cout << "nhap so phan tu cua mang : ";
		cin >> n;
	} while (n <= 0);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
}
void inmang(int a[], int n) {
	cout << "\nmang la " << endl;
	for (int i = 0; i < n; i++) {
		cout <<"  "<< a[i];
	}
}
void tronmang(int a[], int b[], int c[], int n, int m, int& k) {
	k = n + m;
	int i = 0;
	int j = 0;
	while (i<n && j<m) {
		if (a[i] < b[j]) {
			c[k] = a[i];
			i++;
		}
		else if (a[i] >= b[j]) {
			c[k] = b[j];
			j++;
			
		}
		k++;
	}
	for (; i < n; i++) {
		c[k] = a[i];
		k++;
	}
	for (; j < m; j++) {
		c[k] = b[j];
		k++;
	}
}

int main() {
	int n, m,k;
	int a[20] ;
    int b[20] ;
	int c[50];
	nhapmang(a, n);
	inmang(a, n);
	cout << endl;
	nhapmang(b, m);
	inmang(b, m);
	tronmang(a, b, c, m, n, k);
	inmang(c, k);

	return 0;
}