#include<iostream>
using namespace std;

void pattern2(int n){
    for(int i=0;i<n-1;i++){
        for(int j =0;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

void pattern5(int n){
    for(int i=1;i<=n;i++){
        for(int j=0;j<n-i+1;j++){
            cout<< "* ";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    pattern2(n);
    pattern5(n);
    return 0;
}