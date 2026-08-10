#include <iostream>
#include <cmath> // Needed for the abs() function
 
using namespace std;
 
int main() {
    int n;
    cin >> n;
    int min = 1000000; 
    
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        int distance = abs(x); 
        if (distance < min) {
            min = distance;
        }
    }
    
    cout << min << endl;
    
    return 0;
}
 