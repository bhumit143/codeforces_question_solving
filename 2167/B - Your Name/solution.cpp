 #include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        
        string s, t_str;  
        cin >> s >> t_str;
         
        sort(s.begin(), s.end());
        sort(t_str.begin(), t_str.end());
        
         
        if (s == t_str) {
            cout << "YES
";
        } else {
            cout << "NO
";
        }
    }
    return 0;  
}