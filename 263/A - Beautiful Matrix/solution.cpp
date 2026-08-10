#include <iostream>
#include <cmath>  
 
using namespace std;
 
int main() {
    int a;
    int b= 0;
    for (int r = 1; r <= 5; r++) {
        for (int c = 1; c <= 5; c++) {
            cin >> a;
 
            if (a == 1) {
                b = abs(r - 3) + abs(c - 3);
            }
        }
    }
    cout << b << endl;
    return 0;
}