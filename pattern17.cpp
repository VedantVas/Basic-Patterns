#include<iostream>
using namespace std;

void pattern17(int n){
    for(int i =0;i<n;i++){//main looping 
// Space
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        //characters
        char ch ='A';
        int breakpoint =(2*i+1)/2;
        for(int j =1;j<=2*i+1;j++){
            cout<<ch;
            if(j<=breakpoint) ch++;
            else ch--;
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
    pattern17(n);//function calling 
    return 0;
}
