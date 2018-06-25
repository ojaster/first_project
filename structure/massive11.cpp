#include <iostream>
using namespace std;
int main(){
    int k[6];
    int s,p;
    for(int i=0; i<6; i++){
        cin>>k[i];
    }
    cout<<"s=";
    cin>>s;
    if(s>=0 && s< 6 && k[s]>0){
        cout<<"yes"<<endl;
    }else{
        cout<<"no"<<endl;
    }
    cout<<"p=";
    cin>>p;
    if(p<6 && p>=0 && k[p]%2==0){
        cout<<"yes"<<endl;
    }else{
        cout<<"no"<<endl;
    }
    if(k[s]<k[p]){
        cout<<"p WINS"<<endl;
    }else{
        cout<<"s WINS"<<endl;
    }
    

}