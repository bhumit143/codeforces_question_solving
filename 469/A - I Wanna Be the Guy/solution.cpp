#include <iostream>
using namespace std;
 
int main() {
    int n, p, q, l, c = 0;
    cin >> n;
     
    int pass[101] = {0}; 
     
    cin >> p; 
     
    for (int i = 0; i < p; i++) {
        cin >> l ;
        if (pass[l] == 0) {
            pass[l] = 1;
            c++;
        }
    }
     
    cin >> q; 
    for (int i = 0; i < q; i++) {
        cin >> l ;
        if (pass[l] == 0) {
            pass[l] = 1;
            c++;
        }
    }
    
    if (c== n) {
        cout << "I become the guy.";
    } else {
        cout << "Oh, my keyboard!";
    }
    
    return 0;
}