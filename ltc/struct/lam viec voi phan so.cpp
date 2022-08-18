#include"stdio.h"
#include"math.h"
struct phanso{
	int tuso;
	int mauso;
};
void rutgon(phanso *ps){
	int a= ps->tuso;
	int b=ps->mauso;
	a=fabs(a);
	b=fabs(b);
	int ucln=1;
	if(a==0 || b==0){
		ucln = a+b;
	}else{
		while(a!=b){
			if(a>b){
				a=a-b;
			}else{
				b=b-a;
			}
		}ucln =a;
	}
	ps->tuso/=ucln;
	ps->mauso/=ucln;
}
void nhapphanso(phanso *ps){
	printf("\n nhap tu so : ");
	scanf("%d",&ps->tuso);
	do{
		printf("\n nhap mau so : ");
		scanf("%d",&ps->mauso);
	}while(ps->mauso==0);
}void inphanso(phanso ps){
	if(ps.mauso<0){
		ps.tuso*=-1;
		ps.mauso*=-1;
	}
	rutgon(&ps);
	if(ps.mauso==1){
		printf("%d",ps.tuso);
	}else{
			printf("%d/%d",ps.tuso,ps.mauso);
	}
}
phanso conghaiphanso(phanso ps1,phanso ps2){
	phanso ketqua;
	ketqua.tuso=ps1.tuso*ps2.mauso + ps2.tuso*ps1.mauso;
	ketqua.mauso=ps1.mauso*ps2.mauso;
	return ketqua;
}phanso nhanhaiphanso(phanso ps1,phanso ps2){
	phanso ketqua;
	ketqua.tuso = ps1.tuso * ps2.tuso;
	ketqua.mauso = ps1.mauso * ps2.mauso;
	return ketqua;
}phanso chiahaiphanso(phanso ps1,phanso ps2){
	phanso ketqua;
	ketqua.tuso = ps1.tuso * ps2.mauso;
	ketqua.mauso = ps1.mauso * ps2.tuso;
	return ketqua;
}phanso truhaiphanso(phanso ps1,phanso ps2){
	phanso ketqua;
	ketqua.tuso=ps1.tuso*ps2.mauso - ps2.tuso*ps1.mauso;
	ketqua.mauso=ps1.mauso*ps2.mauso;
	return ketqua;
}
int main(){
	phanso ps1,ps2;
	printf("\n nhap phan so thu nhat : \n");
	nhapphanso(&ps1);
	printf("\n phan so vua nhap la : ");
	inphanso(ps1);
	printf("\n nhap phan so thu hai : \n");
	nhapphanso(&ps2);
	printf("\n phan so vua nhap la : ");
	inphanso(ps2);
	printf("\n");
	inphanso(ps1); printf("  +  ");inphanso(ps2);printf(" = ");inphanso(conghaiphanso(ps1,ps2));
	printf("\n");
	inphanso(ps1); printf("  x  ");inphanso(ps2);printf(" = ");inphanso(nhanhaiphanso(ps1,ps2));
	printf("\n");
	inphanso(ps1); printf("  /  ");inphanso(ps2);printf(" = ");inphanso(chiahaiphanso(ps1,ps2));
	printf("\n");
	inphanso(ps1); printf("  -  ");inphanso(ps2);printf(" = ");inphanso(truhaiphanso(ps1,ps2));

	return 0;
}
