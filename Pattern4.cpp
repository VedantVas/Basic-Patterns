#include<iostream>
using namespace std;

void pattern4(int n){
    for(int i =1;i<=n;i++){
        for(int j =1;j<=i;j++){
            cout<< i <<" ";
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
        pattern4(n);
    }
    return 0;
}
/*This code will prints the pattern for t number of times
if n = 4
1 
2 2
3 3 3
4 4 4 4
*/
