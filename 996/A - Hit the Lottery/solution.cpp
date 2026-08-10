#include <bits/stdc++.h>
using namespace std;
 
int main() {  
    int x, c=0 ;
    cin>>x;
    while (x >= 100) {
    x -= 100;
    c++;
    }
    while (x >= 20) {
    x -= 20;
    c++;
    }
    while (x >= 10) {
    x -= 10;
    c++;
    }
    while (x >= 5) {
    x -= 5;
    c++;
    }
    while (x >= 1) {
    x -= 1;
    c++;
    }
    cout<<c;
}