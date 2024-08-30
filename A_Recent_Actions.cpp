#include <bits/stdc++.h>

using namespace std;

#ifndef ONLINE_JUDGE
#include "zdebug.h"
#else
#define debug(...) 42
#endif

#define int long long
using str = string; // ben qi python
using i64 = long long;
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

void solve(){
    int n,m;
    cin >> n >> m;
    vector<int> arr(n);
    set<int> s;
    for (int i=0; i<n; i++){
        arr[i] = i+1;
        s.insert(i+1);
    }
    
    vector<int> a(m);
    for (int i =0; i<m; i++){
        cin >> a[i];
    }
    
    vector<int> ans(n,-1);
 
    for (int i=0; i<m; i++){
        if (s.count(a[i]) == 0){
            s.insert(a[i]);
            s.erase(arr.back());
            //cout << arr.back()-1 << endl;
            ans[arr.back() -1 ] = i+1;
            arr.pop_back();
            arr.insert(arr.begin(), a[i]);
            //cout << a[i] << " " << arr[0] << endl;
 
 
        } else {
            auto ind = find(arr.begin(), arr.end(),a[i]);
            int index = ind - arr.begin();
            swap(arr[0], arr[index]);
        }
    }
    for (int i =0; i<ans.size(); i++){
        cout << ans[i] << " ";
    }
    cout << endl;
    
}
signed main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 int T;
	 cin >> T;
	 while (T--){
		solve();
	 }
}