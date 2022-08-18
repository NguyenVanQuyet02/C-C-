#include"iostream"
#include"fstream"
using namespace std;
struct phanso {
	int tuso;
	int mauso;
};
struct danhsach {
	phanso dsps[10];
	int n;
};
void doc_phan_so(phanso &ps,ifstream &filein)
 {
	filein >> ps.tuso;
	char x;
	filein >> x;
	filein >> ps.mauso;
}
void doc_danh_sach_phan_so(danhsach &ds,ifstream &filein) {
	filein >> ds.n;
	for (int i = 0; i < ds.n; i++) {
		doc_phan_so(ds.dsps[i],filein);
	}
}
void in_danh_sach(danhsach ds) {
	cout << "so phan so la " << ds.n << endl;
	for (int i = 0; i < ds.n; i++) {
		cout <<"     " << ds.dsps[i].tuso << "/" << ds.dsps[i].mauso << endl;
	}
}
int main()
{
	ifstream filein;
	filein.open("phanso.txt");
	danhsach ds;
	doc_danh_sach_phan_so(ds, filein);
	in_danh_sach(ds);

	filein.close();
	return 0;
}