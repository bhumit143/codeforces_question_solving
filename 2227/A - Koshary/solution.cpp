#include<iostream>
using namespace std;
 
 
 int main(){
     int t;
     cin>>t;
     while(t--){
     int x,y;
     cin>>x;
     cin>>y;
     if(x%2==1 && y%2==1){
         cout<<"no"<<endl;
     }
     else
        cout<<"yes"<<endl;
     }
     return 0;
 }