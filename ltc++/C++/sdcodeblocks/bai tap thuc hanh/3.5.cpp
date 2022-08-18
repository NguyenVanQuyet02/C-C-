/*. H�m gi?i h? phuong tr�nh b?c nh?t
Hu?ng d?n:
aX+bY = c
dX+eY = f
D = ae-db;
Dx = ce-bf;
Dy = af-dc;
n?u D == 0: 
N?u Dx==0 v� Dy==0: V� s? nghi?m ? return 1;
Ngu?c l?i: V� nghi?m ? return 2;
Ngu?c l?i:
 C� nghi?m duy nh?t: x = Dx/D; y = Dy/D; 
? return 3;*/
int GHPTBN(float a, float b, float c, float d, float e, float f, 
float &x, float &y)
{
 float D = a*e-d*b;
 float Dx = c*e-b*f;
 float Dy = a*f-d*c;
 if(D==0) 
 if(Dx==0 && Dy==0) return 1;
 else return 2;
 else
 {
 x = Dx/D; 
 y = Dy/D;
 return 3;
 }
}
int main()
{
 float a, b, c, d, e, f, x, y;
 cout<<"a="; cin>>a; cout<<"b="; cin>>b; cout<<"c="; cin>>c;
 cout<<"d="; cin>>d; cout<<"e="; cin>>e; cout<<"f="; cin>>f;
 int K = GHPTBN(a, b, c, d, e, f, x, y);
 if(K==1)
 cout<<"He Vo so nghiem";
 else if(K==2)
 cout<<"He Vo nghiem";
 else if(K==3)
 cout<<"He co hai nghiem x = "<<x<<" y= "<<y;
 return 0;
}
