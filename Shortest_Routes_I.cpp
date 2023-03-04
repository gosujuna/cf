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
vector<pair<int, int>> graph[100000];
//adjacency list of (neighbort, edgeweight) so there should be multiple. it is of the form graph[a], where a = [(b,c),(b,c),(b,c)]...
int n, m;
ll dist[100000]; //graph that stores shortest dist from source node

void dijkstra(int src) {
	for (int i = 0; i < n; i++) dist[i] = LLONG_MAX; // initalize dist array to inf

	using T = pair<ll, int>; //T combines ll and int

	priority_queue<T, vector<T>, greater<T>> pq; // least comes first. pq has values {cost,node)
	dist[src] = 0;

	pq.push({0,src}); // 0,src pushed to top of node..  dist(itself) = 0, so we push (0, src)

	while (pq.size()) { //until nothing in pq
		ll cdist;
		int node;
		tie(cdist, node) = pq.top(); // tie top of pq together so currently cdist,node is the smallest distance to node that is checked to be compared
		pq.pop(); // pop top of queue

		if (cdist != dist[node])
			continue; //stops from looping through adjlist (graph). if this is true then no need to consider this case.
		
		for(pair<int,int> i:  graph[node]) { // for adj of node i: if cost of popped node plus cost of road is smaller than smallest distance
			if (cdist + i.second < dist[i.first]) { //  update
				pq.push({dist[i.first] = cdist + i.second, i.first}); //insert to pq (dist[neighbor], neighbor). since dist(neighbor) is big we used that.
			}

		}


	}
	 
}


int main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 
	 cin >> n >> m;

	 for (int i = 0; i < m; i++){
		int a, b, c;
		cin >> a >> b >> c; //node (a,b) has cost c
		graph[a - 1].push_back({b - 1, c}); //a,b decreased by 1 to match index to 0. 
	 }

	 dijkstra(0);

	 for (int i = 0; i < n; i++)
		cout << dist[i] << " ";
}