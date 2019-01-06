#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
    const int n=22;
    const int m=2;
    int k[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            k[i][j]=rand()%10;
            cout<<k[i][j]<<"\t";
        }
        cout<<endl;
    }
    int h=0,d=0,g=0,j=0;
     cout<<"left=home"<<endl;
    for(int i=0; i<n; i++){
        h++;
        if(k[0+h][0]>k[0+h][1]){
            cout<<"home win"<<endl;
            d++;
        }else if(k[0+h][0]==k[0+h][1]){   
           cout<<"draw"<<endl;
           j++;
        }else{
            g++;
            cout<<"other win"<<endl;
        }
        
    }
    cout<<"wins"<<endl;
    cout<<"home"<<d<<endl;
    cout<<"other"<<g<<endl;
    cout<<"loss"<<endl;
    cout<<"home"<<g<<endl;
    cout<<"other"<<d<<endl;
    cout<<"home"<<endl;
    cout<<d*3+j<<endl;
    cout<<d<<endl;
    cout<<g<<endl;
    cout<<j<<endl;
    cout<<"other"<<endl;
    cout<<g*3+j<<endl;
    cout<<g<<endl;
    cout<<d<<endl;
    cout<<j<<endl;

}