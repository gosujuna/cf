#include <bits/stdc++.h>
using namespace std;
using ll = long long;
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
		int w, h;
		cin >> w >> h;

		int k, l, k2, l2;
		cin >> k;
		vector<int> a(k);
		for (auto& i: a){
			cin >> i;
		}
		cin >> k2;
		vector<int> a2(k2);

		for (auto& i: a2){
			cin >> i;
		}
		cin >> l;

		vector<int> b(l);
		for (auto& i:b){
			cin >> i;
		}
		cin >> l2;

		vector<int> b2(l2);

		for (auto& i: b2){
			cin >> i;
		}


		

		int minh = 1e6;
		int minh2 = 1e6;
		int minh3 = 1e6;
		int minh4 = 1e6;

		int minv = 1e6;
		int minv2 = 1e6;
		int minv3 = 1e6;
		int minv4 = 1e6;

		for (int i = 0; i < (k); i++){
			int test = abs(w - a[i]);
			minh = min(minh, test);
			int test2 = abs(0 - a[i]);
			minh2 = min(minh2, test2);

		}

		for (int i = 0; i < (k2); i++){

			int test3 = abs(w - a2[i]);
			minh3 = min(minh3, test3);
			int test4 = abs(0 - a2[i]);
			minh4 = min(minh4, test4);

		}
		ll finalh = max(w - minh - minh2, w-minh3 - minh4);



		for (int i = 0; i < (l); i++){
			int test = abs(h - b[i]);
			minv = min(minv, test);
			int test2 = abs(0 - b[i]);
			minv2 = min(minv2, test2);

		}

		
		for (int i = 0; i < (l2); i++){
			//cout << b2[i] << endl;

			int test3 = abs(h - b2[i]);
			minv3 = min(minv3, test3);
			int test4 = abs(0 - b2[i]);
			minv4 = min(minv4, test4);
		}
		//cout << minv3 << " " << minv4 << endl;
		ll finalv = max(h - minv - minv2, h-minv3 - minv4);

		//cout << "Final horizontal" << finalh << endl;
		//cout << "Final vertical" << finalv << endl;

		ll ans = max(finalh * h, finalv * w);

		cout << ans << endl;
	 }
}