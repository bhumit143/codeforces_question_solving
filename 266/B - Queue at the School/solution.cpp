#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n, t;
    string s;
    cin >> n >> t >> s; 
    for(int J = 0; J < t; J++){
        
        for(int i = 0; i < n - 1; i++){
            if(s[i] < s[i+1]){  
                swap(s[i], s[i+1]);
                i++; 
            }
        }
    }
    cout << s << "
";   
}