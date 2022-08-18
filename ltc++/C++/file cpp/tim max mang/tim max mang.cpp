//#include"iostream"
//#include"fstream"
#include<bits/stdc++.h>
using namespace std;
int main() {
	int a[20], n;
	ifstream file;
	file.open("INPUT.TXT");
	file >> n;
	cout << n << endl;
	for (int i = 0; i < n; i++) {
		file >> a[i];
	}
	for (int i = 0; i < n; i++) {
		cout << a[i]<<"  ";
	}
	int max = a[0];
	for (int i = 0; i < n; i++) {
		if (max < a[i]) {
			max = a[i];
		}
	}
	cout << "\ngt max la " << max << endl;
	file.close();
	// ghi vao file KETQUA.TXT
	ofstream file1;
	file1.open("KETQUA.TXT");
	file1 <<"gt max la "<< max<<endl;
	file1.close();
	system("pause");
	return 0;
}
