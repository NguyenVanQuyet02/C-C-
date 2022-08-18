#include"stdio.h"
#include"string.h"
#include"time.h"
struct date{
	int day;
	int month;
	int year;
};
struct sinhvien{
	int id;
	char ten[50];
	char gt[5];
	date ngaysinh;
	int tuoi;
	float diemmon1;
	float diemmon2;
	float diemmon3;
	float diemtb;
	char hocluc[10];
	char malop[30];
};
void xoaxuongdong(char x[]){
	size_t k = strlen(x);
	if(x[k-1]=='\n'){
		x[k-1]='\0';
	}
}
void nhapsv(sinhvien &sv){
	printf("\n nhap ID : ");
	scanf("%d",&sv.id);
	printf("\n nhap ten sv : ");fflush(stdin);fgets(sv.ten,sizeof(sv.ten),stdin);
	xoaxuongdong(sv.ten);
	printf("\n nhap gioi tinh : ");fflush(stdin);fgets(sv.gt,sizeof(sv.gt),stdin);
	xoaxuongdong(sv.gt);
	printf("\n nhap ngay thang nam sinh : ");
	scanf("%d%d%d",&sv.ngaysinh.day,&sv.ngaysinh.month,&sv.ngaysinh.year);
	printf(" nhap diem mon 1 : ");
	scanf("%f",&sv.diemmon1);
	printf("\n nhap diem mon 2 : ");
	scanf("%f",&sv.diemmon2);
	printf("\n nhap diem mon 3 : ");
	scanf("%f",&sv.diemmon3);
	printf("\n nhap ma lop : ");fflush(stdin);fgets(sv.malop,sizeof(sv.malop),stdin);
	xoaxuongdong(sv.malop);	
}
void tinhtuoi(sinhvien &sv){
	time_t Time = time(0);
	tm* now = localtime(&Time);
	int namhientai = now->tm_year+1900;
	sv.tuoi = namhientai - sv.ngaysinh.year;
}
void insv(sinhvien sv){
	printf("%5d \t %20s \t %10s \t %2d/%d/%d \t %10d \t %6.2f \t %6.2f \t %6.2f \t %6.2f \t %5s \t %10s",sv.id,sv.ten,sv.gt,sv.ngaysinh.day,sv.ngaysinh.month,sv.ngaysinh.year,sv.tuoi,sv.diemmon1,sv.diemmon2,sv.diemmon3,sv.diemtb,sv.hocluc,sv.malop);
}
void diemtb(sinhvien *sv){
	sv->diemtb = (sv->diemmon1+sv->diemmon2+sv->diemmon3)/3;
}
void xeploai(sinhvien *sv){
	if(sv->diemtb>=8){
		strcpy(sv->hocluc,"gioi");
	}else if(sv->diemtb >= 7){
		strcpy(sv->hocluc,"kha");
	}else{
		strcpy(sv->hocluc,"trung binh");
	}
}
void capnhatsv(sinhvien &sv){
	nhapsv(sv);
	tinhtuoi(sv);
	diemtb(&sv);
	xeploai(&sv);
}
void nhapdanhsachsinhvien(sinhvien ds[],int &n){
	printf("\n nhap so sinh vien : ");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		capnhatsv(ds[i]);
	}
}void indanhsachsinhvien(sinhvien ds[],int n){
	printf("%5s \t %20s \t %10s \t %10s \t %10s \t %6s \t %6s \t %6s \t %6s \t %5s \t %10s ","ID","ten","gioi tinh","ngay thang nam sinh","tuoi","diem mon 1","diem mon 2","diem mon 3","diem trung binh","hoc luc","ma lop ");
	printf("\n");
	for(int i=0;i<n;i++){
		printf("\n");
		insv(ds[i]);
		printf("\n");
	}
}
float timmaxdtb(sinhvien ds[],int n){
	float max = ds[0].diemtb;
	for(int i=0;i<n;i++){
		if(max<ds[i].diemtb){
			max=ds[i].diemtb;
		}
	}
	return max;
}
int timmintuoi(sinhvien ds[],int n){
	int min=ds[0].tuoi;
	for(int i=0;i<n;i++){
		if(min>ds[i].tuoi){
			min=ds[i].tuoi;
		}
	}
	return min;
}
int main(){
	sinhvien ds[50];
	sinhvien sv;
	int n;
	nhapdanhsachsinhvien(ds,n);
	indanhsachsinhvien(ds,n);
	printf("\n max dtb = %.2f",timmaxdtb(ds,n));
	printf("\n min tuoi = %d",timmintuoi(ds,n));
	return 0;
}
