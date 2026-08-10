#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cin >> n;
    int c= 0;
    int max_c = 0;
 
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
 
        c -= a;
        c+= b;
 
        max_c= max(max_c, c);
    }
    cout << max_c << "
";
    return 0;
}