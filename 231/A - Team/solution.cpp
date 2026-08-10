#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    int count = 0;
 
    for (int i = 0; i < n; i++) {
        vector<int> v(3);
        cin >> v[0] >> v[1] >> v[2];
 
        if (v[0] & v[1]) {
            count++;
        }
        else if (v[1] & v[2]) {
            count++;
        }
        else if (v[2] & v[0]) {
            count++;
        }
        else {
        }
    }
 
    cout << count << endl;
    return 0;
}