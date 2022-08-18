#include"stdio.h"
int main(){
	int var;
	printf("\n var = ");
	scanf("%d",&var);
	printf("\n gt cua var la %d",var);
	printf("\n dia chi cua var la %p",&var);
	int *pc,c;
	c=5;
	pc=&c;
	printf("\n gt cua c la %d",*pc);
	printf("\n gt cua c la %d",c);
	printf("\n dia chi cua c la %p",pc);
	*pc=2;
	printf("\n gt cua c la %d",c);
	printf("\n dia chi cua c la %p",pc);
	return 0;
}
