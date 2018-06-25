 #include <iostream>
 using namespace std;
 int main(){
 int const n=3;
 int k[n];
 int index2=-1;
    for(int i=0; i<n; i++){
     cin>>k[i];
    }
    for(int i = 0; i < n; i++){
        if(k[i]%2==0){
            index2 = i;
        }
    }
    if(index2>0){
        int indexdelete2 = index2;
        for(int i = indexdelete2; i < n - 1; i++){
            k[i] = k[i+1];  
        }
        k[n-1] = 0;

        for(int i=0; i<n; i++){
            cout<<k[i]<<endl;
        }
    }else{
        cout<<"Нет четных элементов!"<<endl;
    }
 }