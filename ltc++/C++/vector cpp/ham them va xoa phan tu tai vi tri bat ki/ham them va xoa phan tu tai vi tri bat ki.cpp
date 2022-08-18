#include"iostream"
#include"vector"
using namespace std;
void in_mang_vector(vector<int> arr) {
	for (int i = 0; i < arr.size(); i++) {
		cout << arr.at(i) << "   ";
	}
}
int main() {
	vector<int> arr;
	for (int i = 1; i <= 5; i++) {
		arr.push_back(i);
	}
	cout << "mang vector ban dau " << endl;
	in_mang_vector(arr);

	// ham xoa ptu 
	arr.erase(arr.begin()+2);
	cout << "\nmang vector sau khi xoa vt 2 la " << endl;
	in_mang_vector(arr);

	// ham them phan tu 
	arr.insert(arr.begin() + 2, 69);
	cout << "\nmang vecto sau khi them 69 vao vi tri 2 la " << endl;
	in_mang_vector(arr);

	// ham hoan doi phan tu 2 vector
	vector<int> hoandoi;
	for (int i = 6; i < 12; i++) {
		hoandoi.push_back(i);
	}
	arr.swap(hoandoi);
	cout<<"\n 2 mang vector sau khi hoan doi " << endl;
	cout << "mang arr" << endl;
	in_mang_vector(arr);
	cout << "\nmang hoan doi " << endl;
	in_mang_vector(hoandoi);
	// ham xoa tat ca phan tu trong vector
	//arr.clear();
	return 0;
}