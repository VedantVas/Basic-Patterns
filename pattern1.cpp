#include<iostream>
using namespace std;

void pattern(int n){
    for(int i=0;i<n;i++){

        for(int j =0;j<n;j++){
            cout<<" *";
        }
        cout<<endl;
    }
}

int main(){
    int t; 
    cout<<"Enter the number"<<endl;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        pattern(n);
    }

    /*string s = "";
    for(int i = 1;i<=n;i++){
        s = s+"*";
        
    }
    for(int i = 1;i<=n;i++){
        cout<<s<<endl;
    }*/
    //pattern(n);
    return 0;
}
