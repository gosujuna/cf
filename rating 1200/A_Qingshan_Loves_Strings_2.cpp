#include <bits/stdc++.h>

using namespace std;

#ifndef ONLINE_JUDGE
#include "zdebug.h"
#else
#define debug(...) 42
#endif


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

void solve(){
	// looknice;
	int n;
	string s;
	cin >> n;
	cin >> s;
	int cnt0 = 0, cnt1 = 0;
	for (int i =0; i< s.size(); i++){
		cnt0 += s[i] == '0';
		cnt1 += s[i] == '1';

	}
	if (cnt0 != cnt1){
		cout << -1 << endl;
		return;
	}

	vector<int> z;
	deque<char> q;
	for (int i=0; i<s.size(); i++){
		q.push_back(s[i]);
	}

	int d = 0;
	while (!q.empty()){
		if (q.front() == q.back()){
			if (q.front() == '0'){
				q.push_back('0');
				q.push_back('1');
				z.push_back(n-d);
			} else{
				q.push_front('1');
				q.push_front('0');
				z.push_back(0+d);
			}
			n += 2;
		}
		while (!q.empty() && q.front() != q.back()){
		q.pop_back();
		q.pop_front();
		d++;
		}

	}

	cout << sz(z) << endl;
	for (int i =0; i<sz(z); i++){
		cout << z[i] <<" \n"[i==sz(z)-1];
	}

	

	
}

int main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 int T;
	 cin >> T;
	 while (T--){
		solve();
	 }
}