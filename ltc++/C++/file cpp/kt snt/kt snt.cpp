#include"thuviencuatoi.h"
#include"fstream"
int main() {
	int n;
	ifstream file;
	file.open("filesonguyen.txt");
	file >> n;
	cout << n << endl;
	int kt=kiem_tra_snt(n);
	
	file.close();
	ofstream file1;
	file1.open("ktsnt.txt");
	if (kt == 1) {
		file1 << n << " la snt" << endl;
	}
	else {
		file1 << n << " khong la snt" << endl;
	}
	file1.close();
	return 0;
}