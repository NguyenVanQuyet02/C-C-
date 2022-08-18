#include<stdio.h>
struct Date{
	int day;
	int month;
	int year;
};
void nhap( Date &s){
	printf("\n nhap vao ngay : ");
	scanf("%d",&s.day);
	printf("\n nhap vao thang : ");
	scanf("%d",&s.month);
	printf("\n nhap vao nam : ");
	scanf("%d",&s.year);
}void in(struct Date s){
	printf("\n %d/%d/%d",s.day,s.month,s.year);
}int main(){
	struct Date mydate;
	nhap(mydate);
	in(mydate);
}
