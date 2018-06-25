#include <iostream>
using namespace std;
int main(){
    int k[30];
    int n,a,b;
    cout<<"n:";
    cin>>n;
    cout<<"a:";
    cin>>a;
    cout<<"b:";
    cin>>b;
    for(int i=0; i<n; i++){
        cin>>k[i];
    }
    for(int i=0; i<n; i++){
        if(k[i]%10==4){
            k[i]=k[i]/2;
        }
        //34/2=17.
        //24/2=12.
    }
       for(int i=0;i<n;i++){
          if(k[i]%2==0){
              k[i]=k[i]*k[i];
                
            }
            
        }
        
        //12*12=144.
        for(int i=0; i<n;i++){
            if(k[i]%2!=0){
                k[i]=k[i]*k[i];
            }
        }
        //17*17=289.
        
        for(int i=0;i<n;i++){
          if(k[i]%2==0){
              k[i]=k[i]+a;
                
            }
        }//a=4.
        //144+a = 148.
        cout<<"-------"<<endl;
         for(int i=0;i<n;i++){
          if(k[i]%2!=0){
              k[i]=k[i]-b;
                
            }
            cout<<k[i]<<endl;
        }
        //b=1.
        //289-b=288.
        
        
         
    
       
    
}