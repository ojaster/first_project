#include <iostream>
using namespace std;
int main(){
    const int n=6;
    int k[n][n];
for (int i =0; i<n; i++){
	for (int j =0; j<n; j++){
	         k[i][j] = i+ j +1;
    }
}


for (int i =0; i<n-1; i++){
for (int j =0; j<n - 1; j++){

        cout<<k[i][j]<<"\t";
	}
    cout<<endl;
}
}