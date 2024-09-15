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


void solve(){
	// looknice;
	
	

	
	 int n ,k;
    cin >> n >> k;
    vector<int> a(n);
    int g = 0;
    int mx = 0;

    for (int i =0; i<n; i++){
        cin >> a[i];
        g = gcd(g,a[i]);
        mx = max(mx,a[i]);
    }
    if (g == 0){
        cout << k << endl;
        return;
    }
    sort(all(a));
        int q=-g;
    if (n != 1){
        for (int i =0; i<n; i++){
            q += g;
            a[i] = q;
        }
    }
    a.push_back(1e14);
	debug(a);
	

    int lst = -1;
    for (int i =0; i<=n; i++){
        if (k <= a[i] - lst - 1){
            break;
        }
		
        k -= max(a[i]- lst-1, 0LL);
        lst = a[i];
		
    }
	
	cout << lst + k << endl;

	
	
}

signed main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 int T;
	 cin >> T;
	 while (T--){
		solve();
	 }
}