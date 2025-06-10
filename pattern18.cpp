#include<iostream>
using namespace std;

void pattern17(int n){
    for(int i=0;i<n;i++){//base condition
        for(char ch ='E'-i;ch <='E';ch++){
            cout<<ch;//printing character 
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
