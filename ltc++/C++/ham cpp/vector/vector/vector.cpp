#include"iostream"
#include"vector"
using namespace std;
// in vector
void in(const vector<int> arr) {
	for (const auto& item : arr) {
		cout << "\t" << item;
	}
}
int main() {
	vector<int> arr;
	arr = { 1,2,3,4,5,6,7 };
	in(arr);
	cout << endl;
	// size
	cout <<"size vector  "<< arr.size() << endl;
	//cout << "capacity : " << arr.capacity() << endl;
	arr.push_back(5);// them 1 phan tu vao cuoi vector
	in(arr);
	cout << endl;
	cout << "size vector  " << arr.size() << endl;
	//cout << "capacity : " << arr.capacity() << endl;
	//cout << arr << endl;
	arr.pop_back();// xoa 1 phan tu o cuoi vector
	in(arr);
	cout << endl;
	cout << "size vector  " << arr.size() << endl;
	//cout << "capacity : " << arr.capacity() << endl;
	return 0;
}