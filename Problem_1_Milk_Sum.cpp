
#include <bits/stdc++.h>
using namespace std;
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

int main() {
	//	freopen("input.txt", "r", stdin);
	//	freopen("output.txt", "w", stdout);
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 int n;
	 cin >> n;
	 vector<ll> arr(n);

	  for(auto& i:arr){
		cin >> i;
	  }
	  vector<ll> rep = arr;



	  sort(all(arr));
	  map<int, int> mp;

	  for (int i = 0; i < n;i++){
		mp[arr[i]] = i;
	  }

		int q;
	  cin >> q;

	  vector<ll> pref(n+1);
	  vector<ll> pref2(n+1);

	 

	  for (int i = 1; i < n + 1; i++) {
		pref[i] = pref[i - 1] + arr[i - 1] * (i);
		pref2[i] = pref2[i - 1] + arr[i - 1];

		}



		for (int i = 0; i < q; i++) {
		int b, c;
		cin >> b >> c;
		ll old = rep[b-1];
		ll neww = c;

		//auto it2 = find(all(arr),old);
		//int oldind = it2 - arr.begin();
		int oldind = mp[old];
		auto it = upper_bound(arr.begin(), arr.end(), neww);
		int newind = it - arr.begin();


		if (oldind < newind){
			newind--;
		} else if (newind > oldind) {
			oldind--;
		}
		
		

		ll ans = pref[n] - old * (oldind +1) + neww * (newind+1);
		if (oldind <= newind){
			ans += pref2[oldind + 1] - pref2[newind + 1];
		} else
			ans += pref2[oldind] - pref2[newind];
		cout << ans << endl;
	  }
}