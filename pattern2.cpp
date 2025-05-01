#include<iostream>
using namespace std;

void pattern2(int n){
    for(int i=0;i<n;i++){
        for(int j =0;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

int main(){
    int t ;
    cout<<"Enter the number"<<endl;
    cin>>t;
    for(int i =0;i<t;i++){
        int n;
        cin>>n;
        pattern2(n);
    }
    /*string s = "";
    for(int i =1;i <= n; i++){
        s = s+"*";
        cout<<s<<endl;

    }*/
    //3pattern2(n);
    return 0;
}