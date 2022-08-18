#include"stdio.h"
union day1{
	int ngay;
	int thang;
	int nam;
};
int main(){
	day1 n;
	printf("\n -------------------------\n");
	n.ngay = 30;
	printf("%d",n.ngay);
	n.thang = 7;
	printf("/%d",n.thang);
	n.nam = 2002;
	printf("/%d",n.nam);
	return 0;
}
