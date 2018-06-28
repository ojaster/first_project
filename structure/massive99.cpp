#include <iostream>
using namespace std;
int main(){
    const int n=26;
    int k[n];
    int N[n];
    int ole;
    int j=0;
    for(int i = 0; i < n; i++){
        j++;
        cout<<"Portugal"<<" "<<"match"<<j<<" = ";
        cin>>k[i];
    }
    cout<<"       "<<"VS"<<"     "<<endl;
    j=0;
    for(int i = 0; i < n; i++){
        j++;
        cout<<"Germany"<<" "<<"match"<<j<<" = ";
        cin>>N[i];
    }
    int sum=0,sum2=0;
    for(int i = 0; i < n; i++){
        sum+=k[i];
    }
    for(int i = 0; i < n; i++){
        sum2+=N[i];
    }
    ole=sum+sum2;
    cout<<"OLE OLE!!!!! = "<<ole<<endl;
    if(sum>sum2){
        cout<<"WiNER"<<" "<<"is"<<" "<<"Portugal"<<" "<<"with = "<<sum<<"points"<<endl;
    }else{
        cout<<"WiNER"<<" "<<"is"<<" "<<"Germany"<<" "<<"with = " <<sum2<<"points"<<endl;
    }
    j=0;
    for(int i = 0; i < n; i++){
        j++;
        if(k[i]==N[i]){
            cout<<"Draw"<<" "<<"match"<<j<<endl;
        }else if(k[i]>N[i]){
            cout<<"Portugal win"<<" "<<"match"<<j<<endl;
        }else{
            cout<<"Germany win"<<" "<<"match"<<j<<endl;
        }
        
    }
    
}