#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    do{
        cout<<"\nnhap so nguyen co it hon 5 chu so ";
        cin>>n;
    }while(n>=10000);
    int d=0;
    int m=n;
    while(m>0){
        m/=10;
        d++;
    }
    int nghin = n/1000%10;
    int tram = n/100%10;
    int chuc=n/10%10;
    int dvi=n%10;
    cout<<endl;
    if(nghin==1){
        cout<<"Mot nghin ";
    }if(nghin==2){
        cout<<"hai nghin ";
    }if(nghin==3){
        cout<<"ba nghin ";
    }if(nghin==4){
        cout<<"bon nghin ";
    }if(nghin==5){
        cout<<"nam nghin ";
    }if(nghin==6){
        cout<<"sau nghin ";
    }if(nghin==7){
        cout<<"bay nghin ";
    }if(nghin==8){
        cout<<"tam nghin ";
    }if(nghin==9){
        cout<<"chin nghin ";
    }
    if(tram==0){
        if(tram==0 && chuc==0 && dvi==0 || nghin==0){
            cout<<"";
        }
        else if(tram!=0 || chuc!=0 || dvi!=0){
            cout<<"khong tram ";
        }
    }if(tram==1){
        cout<<"mot tram ";
    }if(tram==2){
        cout<<"hai tram ";
    }if(tram==3){
        cout<<"ba tram ";
    }if(tram==4){
        cout<<"bon tram ";
    }if(tram==5){
        cout<<"nam tram ";
    }if(tram==6){
        cout<<"sau tram ";
    }if(tram==7){
        cout<<"bay tram ";
    }if(tram==8){
        cout<<"tam tram ";
    }if(tram==9){
        cout<<"chin tram ";
    }if(chuc==0){
    	if(dvi!=0 && nghin!=0){
    		cout<<"linh ";
		}else if(nghin==0 && tram==0 || tram!=0 && dvi==0){
			cout<<"";
		}
    }if(chuc==1){
        cout<<"muoi ";
    }if(chuc==2){
        cout<<"hai muoi ";
    }if(chuc==3){
        cout<<"ba muoi ";
    }if(chuc==4){
        cout<<"bon muoi ";
    }if(chuc==5){
        cout<<"nam muoi ";
    }if(chuc==6){
        cout<<"sau muoi ";
    }if(chuc==7){
        cout<<"bay muoi ";
    }if(chuc==8){
        cout<<"tam muoi ";
    }if(chuc==9){
        cout<<"chin muoi ";
    }
    if(dvi==0){
        cout<<"";
    }if(dvi==1){
        cout<<"mot";
    }if(dvi==2){
        cout<<"hai";
    }if(dvi==3){
        cout<<"ba";
    }if(dvi==4){
        cout<<"bon";
    }if(dvi==5){
        cout<<"lam";
    }if(dvi==6){
        cout<<"sau";
    }if(dvi==7){
        cout<<"bay";
    }if(dvi==8){
        cout<<"tam";
    }if(dvi==9){
        cout<<"chin";
    }
    return 0;
}

