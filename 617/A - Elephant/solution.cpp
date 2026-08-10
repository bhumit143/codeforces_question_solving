#include <bits/stdc++.h>
using namespace std;
 
int main() {  
    int x, c=0 ;
    cin>>x;
    while (x >= 5) {
    x -= 5;
    c++;
    }
    while (x >= 4) {
    x -= 4;
    c++;
    }
    while (x >= 3) {
    x -= 3;
    c++;
    }
    while (x >= 2) {
    x -= 2;
    c++;
    }
    while (x >= 1) {
    x -= 1;
    c++;
    }
    cout<<c;
}