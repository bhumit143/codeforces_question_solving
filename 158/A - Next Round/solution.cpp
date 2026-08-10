#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int i, n, k, b, c = 0;
    int a[50];
    
    cin >> n >> k;
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    b = a[k - 1];
    for (i = 0; i < n; i++) {
        if (a[i] >= b && a[i] > 0) {
            c++;
        }
    }
    
    cout << c;
    
    return 0;
}