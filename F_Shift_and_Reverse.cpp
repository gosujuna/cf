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
using u64 = unsigned long long;
#define endl '\n'
#define sz(v) ((int)(v).size())
#define all(v) (v).begin(), (v).end()
mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
// (random rng if you need it)

void solve(){
	// looknice;
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i =0; i<n; i++){
		cin >> a[i];
	}

	if (is_sorted(a.begin(), a.end())) {
        cout << 0 << endl;
        return;
    }
 
    
    if (is_sorted(a.rbegin(), a.rend())) {
        cout << 1 << endl;
        return;
    }

	

	int ind = -1;
	int ind2 = -1;
	bool rev = false;
	bool st = false;


	for (int i =0; i<n; i++){
		if (a[i] > a[(i+1) % n]){
			if (ind2 != -1){
				ind2 = -1;
				rev = false;
				break;
			} else{
				ind2 = i+1;
				rev = true;
			}
		}
	}
	for (int i =0; i<n; i++){
		if (a[i] < a[(i+1) % n]){
			if (ind != -1){
				ind = -1;
				st = false;
				break;
			} else{
				ind = i+1;
				st=  true;
			}
		}
	}


	if (ind == -1 && ind2 == -1){
		cout << -1 << endl;
		return;
	} 
	int x= 1e9, y = 1e9;

	if (rev){
		int ans1 = ind2 + 2;
		int ans2 = n - ind2;
		x= min(ans1, ans2);
	}
	if (st){
		int ans1 = ind+1;
		int ans2 = n - ind + 1;
		y = min(ans1,ans2);
	}

	cout << min(x,y) << endl;

	
}

signed main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 int T;
	 cin >> T;
	 while (T--){
		solve();
	 }
}