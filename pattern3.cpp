#include<iostream>
using namespace std;

void pattern3(int n){
    for(int i =1;i<=n;i++){
        for(int j =1;j<=i;j++){
            cout<< j <<" ";
        }
        cout<<endl;
    }
}


int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        pattern3(n);
    }
    return 0;
}
/*The given code prints the following code for t numbers of times
if n =4
1 
1 2
1 2 3
1 2 3 4
*/
