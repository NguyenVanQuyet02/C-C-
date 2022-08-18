#include <bits/stdc++.h>

using namespace std;

void nhap(int *a,int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<"a["<<i<<"] = ";
        cin>>a[i];
    }
}
void xuat(int *a, int n)
{
    for(int i=0;i<n;i++)
        cout<<a[i]<<"\t";
}
//chen x vao vi tri thu k, k =3 thi chen vao a[2]
void Chen(int *a,int &n, int k,int x)
{
    for (int i = n-1; i >= k-1; i--)
			  a[i+1] = a[i];
        a[k-1] = x;
        n++;
}
//chen x vao vi tri k, k=3 thi chen vao a[3]
void Chen2(int *a,int &n, int x,int vt)
{
    for (int i = n; i >vt; i--)
        a[i] = a[i-1];
    a[vt]=x;
    n++;
}
//chen x vao sau so lon nhat trong mang
//tim gia tri lon nhat trong mang, sau do thuc hien chen
int GTLN(int *a, int n){
	int max=a[0];
	for(int i=1; i<n; i++)
		if(a[i]>max)
		max=a[i];
		return max;

}
void ChenSauSLN(int *a, int &n, int x)
{
    int k=GTLN(a,n);
	for(int i=0; i<n; i++)
		if(a[i]==k)
		Chen2(a,n,x,i+1);
}
//Chen x vao vi tri so lon nhat trong mang
int main()
{
    int n,*a,x,vt;
    cout<<"n = ";cin>>n;
    a=new int[n];
    nhap(a,n);
    xuat(a,n);
    cout<<"x = ";cin>>x;
    ChenSauSLN(a,n,x);
    xuat(a,n);
    return 0;
}
