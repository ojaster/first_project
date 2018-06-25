#include <iostream>
using namespace std;
int main(){
const int n=3;

    int k[n]= {2,3,4};
    int a[n]= {5,6,7};
    cout<<"--------"<<endl;
    for(int i=0; i<3; i++){
        if(a[i]>k[i]){
            int temp=k[i]; 
            k[i]=a[i];
            a[i]=temp;
            
        }
        cout<<k[i]<<endl;
        
    }
    for(int i=0; i<3; i++){
        cout<<a[i]<<endl;
    }
    cout<<"------"<<endl;     
    for(int i=0; i<3; i++){
        cout<<k[i]<<endl;
    }
    

}