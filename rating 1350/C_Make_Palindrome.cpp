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
	string s;
	cin >> s;
	int n = sz(s);
	if (n==1){
		cout << s << endl;
		return;
	}
	vector<int> a(26);
	for (int i =0; i<n; i++){
		a[s[i] - 'a']++;
	}

	
	for (int i =0; i<26; i++){
		for (int j = 25; j>=0; j--){
			if (i < j && a[i] %2 && a[j] % 2){
				a[i]++;
				a[j]--;
			}
		}
	}

	string temp = "";
	string reserve = "";

	for (int i =0; i<26; i++){
		string z(1, 'a' + i); 
		if (a[i] % 2){
			reserve += z;
			a[i]--;
			break;
		}
	}
	for (int i =0; i<26; i++){
		char c = i + 'a';
		
		string x(a[i]/2, c);
		temp += x;
		
	}
	string ans = "";

	ans += temp;
	ans += reserve;
	reverse(temp.begin(), temp.end());
	ans += temp;
	cout << ans << endl;



	
}

signed main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 
		solve();
	 
}