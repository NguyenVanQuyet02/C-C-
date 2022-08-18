#include"stdio.h"
#include"stdlib.h"
// ptr=(int*)malloc(n*sizeof(int) : 
// ptr=(int*)calloc(n,sizeof(int) : ham cap phat bo nho dong
// realloc(ptr,x) : ham thay doi kich thuoc mang
// free(ten) : giai phong bo nho dong
int main(){
	int n;
	printf("\n nhap so luong phan tu cua mang ");
	scanf("%d",&n);
	//int *ptr=(int*)malloc(n*sizeof(int));
	int *ptr=(int*)calloc(n,sizeof(int));
	if(ptr==NULL){
		printf("\n khong cap phat duoc vung nho ");
		return 0;
	}for(int i=0;i<n;i++){
		printf("a[%d] = ",i);
		scanf("%d",ptr+i);
	}printf("\n mang la ");
	for(int i=0;i<n;i++){
		printf("%d\t",*(ptr+i));
	}
	int x;
	printf("\n nhap kich thuoc mang can thay doi ");
	scanf("%d",&x);
	realloc(ptr,x);
	for(int i=0;i<x;i++){
		printf("a[%d] = ",i);
		scanf("%d",ptr+i);
	}printf("\n mang la ");
	for(int i=0;i<x;i++){
		printf("%d\t",*(ptr+i));
	}
	free(ptr);
}
