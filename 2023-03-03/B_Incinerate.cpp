#include <bits/stdc++.h>
using namespace std;

#define ll long long

 
void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> h(n), p(n);
    for (auto &i : h)
        cin >> i;
 
    for (auto &i : p)
        cin >> i;
 
    vector<int> ord(n);
    iota(ord.begin(), ord.end(), 0);
    sort(ord.begin(), ord.end(), [&](auto x, auto y) { return p[x] < p[y]; });
 
    int dmg = 0;

    for (int i : ord)
    {
        if (h[i] <= dmg)
            continue;
 
        if (i != ord[0])
            k -= p[i];
 
        if (k > 0)
        {
            dmg += k;
            while (h[i] > dmg)
            {
                k -= p[i];
                if (k < 0)
                    break;
                dmg += k;
            }
        }
 
        if (h[i] > dmg)
        {
            cout << "NO\n";
            return;
        }
    }
 
    cout << "YES\n";
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
	 return 0;
}