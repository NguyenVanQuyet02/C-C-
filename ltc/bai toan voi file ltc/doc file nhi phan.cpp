#include"stdio.h"
#include"stdlib.h"
struct ngaysinh{
	int ngay ;
	int thang;
	int nam;
};
int main(){
	FILE *f;
	f = fopen("bt_nhiphan.bin","rb");
	ngaysinh n;
	fread(&n,sizeof(struct ngaysinh),1,f);
	printf("\n ngay sinh %d/%d/%d",n.ngay,n.thang,n.nam);
	fclose(f);
	return 0;
}
