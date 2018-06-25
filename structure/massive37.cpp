#include <iostream>
#include <math.h>
using namespace std;
int main(){
     int n=5;
    int bg[n];
    int sumb=0,sumg=0;
    int kb=0,kg=0; 
    for(int i=0;i<n; i++){
        cin>>bg[i];
    }
    for(int i=0;i<n;i++){
        if(bg[i]<0){
            sumb=sumb+bg[i];
            kb++;
        }
    }
    for(int i=0;i<n;i++){
        if(bg[i]>0){
            sumg=sumg+bg[i];
            kg++;
        }
    }
    float avgb = abs(sumb) /(float) kb;
    float avgg = sumg /(float) kg;
     cout<<"b:";
     cout<<avgb<<endl;
     cout<<"g:";
     cout<<avgg<<endl;
     if(avgb>avgg+10){
         cout<<"yes"<<endl;
     }else{
         cout<<"no"<<endl;
     }


}