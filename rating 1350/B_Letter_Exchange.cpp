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
	vector<string> s(n);
	for (int i =0; i<n; i++){
		cin >> s[i];
	}

	map<pair<char,char>, vector<int>> a;
	vector<tuple<int,char,int,char>> ans;

	for (int i =0; i<n; i++){
		map<char,int> cnt;
		for (auto x: s[i]){
			cnt[x]++;
		}

		vector<char> need;
		vector<char>give;
		for (auto x: {'w', 'i', 'n'}){
			if (cnt[x] == 0){
				need.push_back(x);
			} else{
				for (int i =1; i< cnt[x]; i++){
					give.push_back(x);
				}

			}


		}
		
		for (int j=0; j<need.size(); j++){
			char x = need[j], y = give[j];
			if (!a[{y,x}].empty()){
				ans.emplace_back(i,y,a[{y,x}].back(), x);
				a[{y,x}].pop_back();
			} else{
				a[{x,y}].push_back(i);
			}
		}
		
		
		
	}
	
	

	char ch[3] = {'w', 'i', 'n'};
	if (a[{ch[0], ch[1]}].empty()){
		swap(ch[0], ch[1]);
	}
	
	for (int i = 0; i < a[{ch[0], ch[1]}].size(); i++){
		int x = a[{ch[0],ch[1]}][i];
		int y = a[{ch[1],ch[2]}][i];
		int z = a[{ch[2],ch[0]}][i];
		ans.emplace_back(x, ch[1], y, ch[2]);
		ans.emplace_back(x, ch[2], z, ch[0]);
	}
	
	

	cout << ans.size() << endl;
	for (auto [a,b,c,d] : ans){
		cout << a +1 << " " << b << " " << c+1 << " " << d << endl;
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