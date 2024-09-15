#include <bits/stdc++.h>

using namespace std;

#ifndef ONLINE_JUDGE
#include "zdebug.h"
#else
#define debug(...) 42
#endif


using str = string; // ben qi python
using i64 = long long;
#define endl '\n'
#define sz(v) ((int)(v).size())
#define all(v) (v).begin(), (v).end()
//  void solve() {
//     int n;
//     std::cin >> n;
    
//     std::string s = "aeiou";
//     std::string ans;
//     for (int i = 0; i < 5; i++) {
//         int x = n / (5 - i);
//         ans += std::string(x, s[i]);
//         n -= x;
//     }
    
//     std::cout << ans << "\n";
// }
void solve(){
    int n;
    cin >> n;
 
    string s = "oeiau";
    string res ="";

    int repeat = n/5;
    int remainder = n%5;
	cout << repeat << " " << remainder << endl;
    
    for(int i=0; i<n; i++){
        if(remainder > 0){
            string z = std::string(,s[i]);
			cout << z << endl;
			res += z;
			cout << res << endl;
        } else {
            
        }
        remainder--;
    }
 
    
}
 
int main() {
    // magic lines to make i/o faster, refer to https://stackoverflow.com/a/31165481 if you're curious why
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
 
    while (t--){
       solve();
    }
	return 0;
 
}