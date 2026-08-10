#include <bits/stdc++.h>
using namespace std;
 
int main() { 
    int a , b;
    cin>>a>>b;
    int c = 0;
    while(a<=b){
        a=3*a;
        b=2*b;
        c = c+1;
    }
    if (a>b){
        cout<<c<<"
";
    }
}