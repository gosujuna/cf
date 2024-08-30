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

vector<int> adj[10000];
bool visited[10000];

void DFS(int node){
	if(visited[node])
		return;
	visited[node] = true;
	for (auto& adjNode: adj[node]){
		DFS(adjNode);
	}
}

int main() {
	//	freopen("input.txt", "r", stdin);
	//	freopen("output.txt", "w", stdout);
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 int n;
	 cin >> n;
	 for (int i = 0; i < n; i++){
		int p;
		cin >> p;
		--p;
		adj[p].push_back(i); // adjlist built for longest range graphs..
		adj[i].push_back(p);

	 }
	 int numtree = 0;
	 for (int i = 0; i < n;i++){
		if (!visited[i]){
			numtree++;
			DFS(i);
		}
	 }
	 cout << numtree << endl;
}