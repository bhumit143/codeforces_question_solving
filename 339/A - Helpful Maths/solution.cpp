#include <iostream>
#include <string>
using namespace std;
 
int main() {
    string s;
    cin >> s;
    int n = s.length(); 
    for(int i = 0; i < n / 2; i++) { 
        for(int j = 0; j < n - 2; j += 2) {
            if(s[j] > s[j+2]) {
                swap(s[j], s[j+2]);
            }
        }
    }
    
    cout << s << "
";
    return 0;
}