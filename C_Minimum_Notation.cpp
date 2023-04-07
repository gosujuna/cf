#include <bits/stdc++.h>
//#include "zdebug.h"
using namespace std;
using ll = long long;
using str = string; // ben qi python
#define endl '\n'
#define sz(v) ((int)(v).size())
#define all(v) (v).begin(), (v).end()
template <typename T> T pow(T a, long long b) {
	assert(b >= 0);
	T r = 1;
	while (b) {
		if (b & 1)
			r *= a;
		b >>= 1;
		a *= a;
	}
	return r;
}

void solve() { string s;
    cin >> s;
    int n = s.size();
    vector<int> a(n);
    vector<int> mn(n + 1, 9);
    for(int i = 0; i < n; i++){
        a[i] = int(s[i] - '0');
    }
    for(int i = n - 1; i >= 0; i--){
        mn[i] = min(mn[i + 1], a[i]);
    }
    vector<int> buff(10, 0);
    string ans = "";
    string t = "0123456789";
    for(int i = 0; i < n; i++){
        for(int j = 0; j < mn[i]; j++){
            while(buff[j]){
                buff[j]--;
                ans += t[j];
            }
        }
        if(a[i] == mn[i]){
            ans += t[a[i]];
        }
        else{
            buff[min(9, a[i] + 1)]++;
        }
    }
    for(int j = 0; j < 10; j++){
        while(buff[j]){
            buff[j]--;
            ans += t[j];
        }
    }
    cout << ans << endl;
	
	}

int main() {
	//	freopen("input.txt", "r", stdin);
	//	freopen("output.txt", "w", stdout);
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 int T;
	 cin >> T;
	 while (T--){
		solve();
	 }


}