#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define sz(v) ((int)(v).size())
#define all(v) (v).begin(), (v).end()

#define dbg(v)                                                                 \
	cout << "Line(" << __LINE__ << ") -> " << #v << " = " << (v) << endl;

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
	 //ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 int T;
	 cin >> T;

	 

	 	 while (T--){

		int n, m;
		int j = 0;
		;
		cin >> n >> m;
		vector<int> arr(0,0);
		vector<int> ans(n, -1);

		for (int i = 0; i < m; i++) {
			cin >> j;
			arr.push_back(j);
		}



		
		list<int> work;


		for (int i = 1; i <= n; i++) {
			work.push_back(i);
		}

		for (int i = 0; i < m; i++) {

			auto it = find(work.begin(), work.end(), arr[i]);
			int index = distance(work.begin(), it);
			

			if(index >= n) {

				int z = work.back();
				work.pop_back();
				work.push_front(arr[i]);
				ans[z - 1] = i + 1;
			}

			else {

				auto it2 = next(work.begin(), index);
        		iter_swap(work.begin(), it2);

			}

			
		}
	




		for (int i = 0; i < n; ++i) {
			if (i == n-1){
				cout << ans[i] << endl;
			}
			else{
				cout << ans[i] << " ";
			}

			
		}

	 }
}