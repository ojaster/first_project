#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"n=";
    cin>>n;
    if(n%10==1 && n!=11){ // последняя цифра числа
        cout<<"corova"<<endl;
    }else{
        if((n%10==2 && n!=12)|| (n%10==3 && n!=13)||(n%10==4 && n!=14)){
            cout<<"corovy"<<endl;
        }else{
            cout<<"corov"<<endl;
        }
    } 
    // 2,3,4 - коровы
    // 1,21,31,41 - корова
    // 5-20 коров
 //   switch(n){
  //      case 1:
   //     cout<<n<<" "<<"corova"<<endl;
   //     break;
   //      case 2:
    //    cout<<n<<" "<<"corovy"<<endl;
    //    break;
    //     case 5:
   //     cout<<n<<" "<<"corov"<<endl;
 //       break;
//    }
}