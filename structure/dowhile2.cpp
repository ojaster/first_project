#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int n, s, a, d, dmax = 0;
    cout<<"n:";
    cin>>n;
    for(int i=0;i < n;i++){
        cout<<"s:";
        cin>>s;

        a=sqrt(s);
        d=sqrt(2)*a;
        if (d>dmax){
            dmax=d;
        }
    }
    cout<<dmax;
}