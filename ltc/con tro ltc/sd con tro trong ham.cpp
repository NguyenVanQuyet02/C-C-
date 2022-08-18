#include"stdio.h"
void swap(int *a,int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}int main(){
	int a=5,b=10;
	printf("\n trc swap a = %d , b = %d",a,b);
	swap(&a,&b);
	printf("\n sau swap a = %d , b = %d",a,b);
	return 0;
}
