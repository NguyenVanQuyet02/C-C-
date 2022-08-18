#include"iostream"
#include"fstream"
using namespace std;
void ham_doc_file(int a[], int& n, ifstream &filein) {
	while (filein.eof() == false) {
		filein >> a[n];
		n++;
	}
}
void in_mang(int* a, int n) {
	cout << "\n mang duoc doc tu file la " << endl;
	for (int i = 0; i < n; i++) {
		cout << "  " << *(a + i);
	}
}
int main() {
	int n = 0;
	int a[50];
	ifstream filein;
	filein.open("filedaysonguyen.txt");
	ham_doc_file(a, n, filein);
	in_mang(a, n);
	filein.close();
	return 0;
}