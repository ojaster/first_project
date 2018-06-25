#include <iostream>
using namespace std;
int main(){
    int x,sum=0,sum2=0;
    cin>>x;
    while(x!=0){
        sum2++;
        if(sum<256){
            sum=sum+x;
        }
        cin>>x;
        
            
        
    }
    cout<<sum2<<"<--"<<endl;
    cout<<sum;
}