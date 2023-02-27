#include <bits/stdc++.h>
using namespace std;
using ll = long long;

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

string toggle(string n, int l, int r){
	for(int i =l; i<=r; i++){
		if (n[i] == '0') {
			n[i] = '1';
		}
		else {
			n[i] = '0';
		}
	}

	return n;
}

bool check(string s) { 
	string a = s;
	reverse(a.begin(), a.end());
	return (a == s);
}


int main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 int T;
	 cin >> T;

	 while (T--){
		int n;
		cin >> n;
		string s;
		cin >> s;
		int l = 0;
		int ans = 1;

		while (l < n && s[l] == s[n-l-1]) {
			l++;
		}
		int r = l;
		while (r < n/2 && s[r] != s[n-1-r]) {
			r++;
		}

		for (int t = r; t < n / 2; ++t) {
			if (s[t] != s[n-1-t]) {
				ans = 0;
			}
			
		}

		if (ans == 1){
			cout << "Yes" << endl;
		} else{
			cout << "No" << endl;
		}

		


		
	 }
	 return 0;
}