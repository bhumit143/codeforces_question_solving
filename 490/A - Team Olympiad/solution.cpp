#include <iostream>
#include <algorithm> 
 
using namespace std;
 
int main() { 
    int n;
    cin >> n;
    int prog[5001], math[5001], pe[5001];
    int c1 = 0, c2 = 0, c3 = 0; 
    for (int i = 1; i <= n; i++) {
        int skill;
        cin >> skill;
        
        if (skill == 1) {
            prog[c1] = i;
            c1++;
        } 
        else if (skill == 2) {
            math[c2] = i;
            c2++;
        } 
        else {
            pe[c3] = i;
            c3++;
        }
    }
    int LEAST = min({c1, c2, c3});
    cout << LEAST << endl;
    for (int i = 0; i < LEAST; i++) {
        cout << prog[i] << " " << math[i] << " " << pe[i] << endl;
    }
 
    return 0;
}