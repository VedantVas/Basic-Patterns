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

// it reuses two previous codes of pattern7 and pattern8
void pattern8(int n){
    for(int i =0;i<n;i++){
// Space
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        for(int j =0;j<2*n-(2*i+1);j++){
            cout<<"*";
        }
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}


int main(){
    int n;
    cin>>n;
    pattern7(n);
    pattern8(n);
    return 0;
}
/*this code will print following pattern
here n = 4 
   *   
  ***  
 ***** 
*******
*******
 ***** 
  ***  
   *  
*/