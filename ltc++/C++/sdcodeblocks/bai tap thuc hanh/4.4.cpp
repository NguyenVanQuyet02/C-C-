#include<bits/stdc++.h>
using namespace std;
void nhapmang(int *a,int n){
    srand(time(NULL));
    for(int i=0;i<n;i++){
        *(a+i)=rand()%100+1;
    }
}
void inmang(int *a,int n){
    cout<<"\nmang la "<<endl;
    for(int i=0;i<n;i++){
        cout<<"\t"<<*(a+i);
    }
}
void sapxeptangdan(int *a,int n){
    int tg;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                tg=a[i];
                a[i]=a[j];
                a[j]=tg;
            }
        }
    }
}
int max(int* a, int n) {
	int max = a[0];
	for (int i = 0; i < n; i++) {
		if (max < a[i]) {
			max = a[i];
		}
	}
	return max;
}
int min(int* a, int n) {
	int min = a[0];
	for (int i = 0; i < n; i++) {
		if (min > a[i]) {
			min = a[i];
		}
	}
	return min;
}
void doichominmax(int *a, int n) {
	for (int i = 0; i < n; i++) {
		if (a[i] == max(a, n)) {
			for (int j = i+1; j < n; j++) {
				if (a[j] == min(a, n)) {
					int temp = a[i];
					a[i] = a[j];
					a[j] = temp;
				}
			}
		}else if (a[i] == min(a, n)) {
			for (int j = i + 1; j < n; j++) {
				if (a[j] == max(a, n)) {
					int temp = a[i];
					a[i] = a[j];
					a[j] = temp;
				}
			}

		}
	}
}
int main(){
    int n;
    
    do{
        cout<<"\n nhap so phan tu cua mang ";
        cin>>n;
    }while(n<=0);
    int *a=new int[n];
    nhapmang(a,n);
    inmang(a,n);
    sapxeptangdan(a,n);
    doichominmax(a,n);
    inmang(a,n);
    delete[] a;
    return 0;
}

