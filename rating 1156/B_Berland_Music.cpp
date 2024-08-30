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
	 while(T--){
		int n;
		cin >> n;
		string s;
		vector<int> p(n);
		for(auto& i : p){
			cin >> i;
		}
		cin >> s;
		vector<int> res(n, -1);

		int ptr = 0;
		for (int r = 0; r <= 1; r++){
			vector<pair<int, int>> a;
			for (int i = 0; i < n; i++){
				if ((int) (s[i] - '0')  ==  r) {
					a.emplace_back(p[i], i);
				}
			} // pushing back p[i], and i.. which is original permutaiton value and position
			sort(a.begin(), a.end()); // then sort by permutation
			for (auto & p:a){
			res[p.second] = ++ptr;    //then the resulting position is from 0:1 ... to n
		}

		}

		
		for (int i = 0; i < n; i++){
			if (i>0) {
				cout << " ";
			}
			cout << res[i];
		}
		cout << endl;
	 }
}