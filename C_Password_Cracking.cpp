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

#define sz(v) ((int)(v).size())
#define all(v) (v).begin(), (v).end()
mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
// (random rng if you need it)

void solve(){
	// looknice;
	int n;
	cin >> n;

	bool end = false;
	bool start = false;

	auto ask = [&] (string s, string add){
		string z = s + add;
		cout << "? " << z << endl;
		int x;
		cin >> x;
		if (x == 0){
			return 0;
		} else{
			return 1;
		}

	};

	auto ask2 = [&] (string s, string add){
		string z = add + s;
		cout << "? " << z << endl;
		int x;
		cin >> x;
		if (x == 0){
			return 0;
		} else{
			return 1;
		}

	};

	string d = "";
	while (sz(d) < n){
		if (!end){

			if (ask(d,"0")){
				d += "0";
				continue;
			}

			if (ask(d,"1")){
				d += "1";
				continue;
			}

			end = true;

		} else{
			if (ask2(d,"0")){
				d = "0" + d;
				continue;
			} else if (sz(d) == n-1){
				cout << "! " << ("1" + d) << endl;
				return;
			}

			

			if (ask2(d,"1")){
				d =  "1" + d;
				continue;
			}
		}
		

	}

	cout << "! " << d << endl;

	
}

signed main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 int T;
	 cin >> T;
	 while (T--){
		solve();
	 }
}