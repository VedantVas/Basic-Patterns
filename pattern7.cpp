#include<iostream>
using namespace std;

void pattern7(int n){
    for(int i =0;i<n;i++){
// Space
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        for(int j =0;j<2*i+1;j++){
            cout<<"*";
        }
        for(int j=0;j<n-i-1;j++){ 
            cout<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    pattern7(n);
    return 0;
}
/*This will print the following pattern if n = 5
    *    
   ***
  *****
 *******
*********
*/