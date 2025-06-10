#include<iostream>
using namespace std;

/*void pattern19(int n){
    int space =0;
    for (int i=0;i<n;i++){
        //stars
        for(int j =1;j<=n-i;j++){
            cout<<"*";
        }
        //space
        for(int j=0;j<space;j++){
            cout<<" ";
        }
        //stars
        for(int j=1;j<=n-i;j++){
            cout<<"*";
        }
        cout<<endl;
        space+=2;
    }
    space =(n*2)-2;
    for (int i=0;i<n;i++){
        //stars
        for(int j =1;j<=i;j++){
            cout<<"*";
        }
        //space 
        for(int j=0;j<space;j++){
            cout<<" ";
        }
        //stars
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
        space-=2;
    }
}*/


void pattern19(int N)
{
      
      int iniS = 0;
      for(int i=0;i< N;i++){
          
          
          for(int j=1;j<=N-i;j++){
              cout<<"*";
          }
          
          for(int j=0;j<iniS;j++){
              cout<<" ";
          }
          
          
          for(int j=1;j<=N-i;j++){
              cout<<"*";
          }
          
          
          iniS+=2;
          
         
          cout<<endl;
      }
      
      
      iniS = 2*N -2;
      for(int i=1;i<=N;i++){
          
         
          for(int j=1;j<=i;j++){
              cout<<"*";
          }
          
         
          for(int j=0;j<iniS;j++){
              cout<<" ";
          }
          
          
          for(int j=1;j<=i;j++){
              cout<<"*";
          }
          
          
          iniS-=2;
          

          cout<<endl;
      }
      
}




int main(){
    int n;
    cin>>n;
    pattern19(n);
    return 0;
}