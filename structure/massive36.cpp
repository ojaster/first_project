#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int n=10;
    int bg[10];
    int sumb=0,sumg=0;
    int kb=0,kg=0;
    for(int i=0; i<n; i++){
        cin>>bg[i];
    }
    for(int i=0; i<n; i++){
        if(bg[i]<0){
            sumb=sumb+bg[i];
            kb++;
        }
    }
    cout<<"-------"<<endl;
    cout<<"b:"<<endl;
    cout<<sumb<<endl;
    cout<<"-------"<<endl;
     for(int i=0; i<n; i++){
        if(bg[i]>0){
            sumg=sumg+bg[i];
            kg++;
        }   
    }
    cout<<"g:"<<endl;
    cout<<sumg<<endl;
    float avgb = abs(sumb) /(float) kb;
    float avgg = sumg /(float) kg;
    cout<<avgb<<endl;
    cout<<avgg<<endl;
    if(avgg>avgb){
        cout<<"girls WIN"<<endl;
    }else{
        cout<<"boys WIN"<<endl;
    }
    

}