#include"iostream"
using namespace std;
#include"vector"// khai bao thu vien de sd cac ham trong vector
void in_mang_vector(vector<int> arr) {
	cout << "mang vector la " << endl;
	for (int i = 0; i < arr.size(); i++) {//ham size() tra ve kich thuoc hien tai cua vector
		cout << arr.at(i) << "   ";//<=> arr[i], ham at() truy xuat phan tu co chi so trong vector
	}// at(index);
}
int main() {
	vector<int> arr;// khai bao mot mang so nguyen
	for (int i = 1; i <= 5; i++) {
		// ham dua phan tu vao cuoi vector
		arr.push_back(i);// them phan tu vao cuoi mang vector
	}
	in_mang_vector(arr);
	cout << endl;
	cout << "kich thuoc that cua vector " << arr.capacity() << endl;
	cout << "so phan tu toi da vector co the luu tru " << arr.max_size() << endl;
	// ham xoa 1 phan tu cuoi mang
	arr.pop_back();
	in_mang_vector(arr);
	// ham in phan tu cuoi mang
	cout << "\n phan tu cuoi mang la "<< arr.back() << endl;
	// ham in phan tu dau mang
	cout << "\n phan tu dau mang la " << arr.front() << endl;

	return 0;
}