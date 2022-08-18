#include"stdio.h"
#include"stdlib.h"
struct ngaysinh{
	int ngay;
	int thang;
	int nam;
};
int main(){
	FILE *f;
	f = fopen("bt_nhiphan.bin","wb");
	ngaysinh n;
	n.ngay = 30;
	n.thang = 7;
	n.nam = 2002;
	fwrite(&n,sizeof(struct ngaysinh),1,f);
	fclose(f);
	return 0;
}
