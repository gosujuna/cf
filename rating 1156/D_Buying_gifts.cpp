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
	 int T;
	 cin >> T;
	 while (T--){
		int n;
		cin >> n;
		vector<pair<int, int>> a(n);
		for (auto & [x,y] : a){
			cin >> x >> y;
		}

		sort(a.begin(), a.end());
		multiset<int> s;
		for (auto [x,y]: a){
			s.insert(y);
		}
	

		int ans = INT_MAX, cur = 0;

		for (int i = n - 1; i >= 0; i--){
			auto [x, y] = a[i];          //x,y is highest number for first array then decreasing
			s.erase(s.find(y));            // erases y of that number from the multiset
			if (i <n-1){
				ans = min(ans, abs(cur - x)); //skips running first iteration this calculates maximum y values of deleted with first new x value
			}
			if (cur <= x){
				auto it = s.lower_bound(x); //search for element greater than x in y
				if (it != s.begin()){ // if there is an element smaller than x in y 
					ans = min(ans, abs(x - max(cur, *prev(it))));      //try best of deleted values and largest smaller than x value in y
				}
				if (it != s.end()){ //if there is an emelement larger than x in y
					ans = min(ans, abs(x - *it));     //try the smallest value
				}
			}
			cur = max(cur, y); //still checking max y value deleted from set
		}

		

		cout << ans << endl;
	 }
}