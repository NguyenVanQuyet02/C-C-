#include"stdio.h"
int main(){
	int a[]={1,2,3,4,5};
	printf("\n dia chi mang a la : ");
	for(int i=0;i<5;i++){
		printf(" %p\t",&a[i]);
	}
	int x[5],n=5;
	for(int i=0;i<n;i++){
		scanf("%d",x+i);
	}printf("\n mang la ");
	for(int i=0;i<n;i++){
		printf("%d\t",*(x+i));
	}printf("\n dia chi mang la ");
	for(int i=0;i<n;i++){
		printf("%p\t",x+i);
	}
}
