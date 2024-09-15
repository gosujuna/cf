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
	int n;
	cin >> n;
	if (n % 2 == 0){
		int help = n/2;
		for (int i = n +1; i <= n+help; i++){
			cout << i << " ";
		}
		for (int i = n-1; i >= n - help; i--){
			cout << i << " ";
		}
		cout << endl;
		return;
	} else{
		int help = (n * 2) * n *2;
		int mid = help / n;
		cout << mid << " ";
		cout << mid + n << " " << mid - n << " ";
		int extra = n-3;
		
		if (extra){
			extra /= 2;
			for (int i =1; i<=extra; i++){
				cout << mid + i << " " << mid - i << " ";
			}
			
		}
		cout << endl;



	}
	
}

signed main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 int T;
	 cin >> T;
	 while (T--){
		solve();
	 }
}