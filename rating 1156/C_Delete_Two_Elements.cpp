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
	cin>>n;
	vector<ll> a(n);
	ll sum = 0;
	for (auto& i:a){
		cin >> i;
		sum += i;
	}
	
	sum += sum;
	if (sum % n != 0){
		cout << 0 << endl;
		return;
	}

	


	ll m = sum / n;
	

	sort(all(a));
	int l = 0;
	int r = n-1;
	int count=0;
	while (l<r){
		if (a[l] + a[r] == m){
			int ldup = 1;
			int rdup = 1;

			// find duplicate
			while (a[l] == a[l+1]){
				ldup++;
				l++;
			}
			if (a[l] == a[r]){
				count += (ldup + rdup - 2) * (ldup + rdup-1) / 2;
				cout << count << endl;
				return;

			}
			while(a[r-1] == a[r]){
				rdup++;
				r--;
			}


			l++;
			r--;
			//cout << ldup << "ldup" << rdup << "rdup" << endl;
			
			count += ldup * rdup;
			



			
	
		} else if( a[l] + a[r] < m){
			l++;
		} else{
			r--;
		}

	}
	cout << count << endl;
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