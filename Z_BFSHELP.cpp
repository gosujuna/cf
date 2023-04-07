#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using str = string; // ben qi python
#define endl '\n'
#define sz(v) ((int)(v).size())
#define all(v) (v).begin(), (v).end()


//TREE CASE: HAS FUNCTION SUCH AS this. node->val, node->right, node->left
	 bool isSameTree(TreeNode* p, TreeNode* q) {
       if (p == nullptr && q == nullptr) {
           return true;
       } 

       if (p == nullptr || q == nullptr){
           return false;
       }

       if (p->val == q->val){
           if (isSameTree(p->left,q->left) && isSameTree(p->right,q->right)) {
               return true;
           };
 
       }

       return false;

    }
// DFS HELPER, basically process node and for adjacent nodes process whatever
vector<int> adj_list[MN];
bool visited[MN];

void dfs(int node) {
	visited[node] = true;
	for (int u : adj_list[node])
		if (!visited[u])
			dfs(u);
}

// BFS HELPER, add each to queue

int maxDistance(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int counta=0; int countb = 0;
        queue<pair<int,int>> q;

        for (int i =0;i<m;i++){
            for (int j =0;j<n;j++){
                if (grid[i][j] == 1){
                    counta++;
                    q.push({i,j});
                    
                } else if (grid[i][j] == 0){
                    countb++;
                    
                }
            }
        }

        vector<pair<int,int>> dirs = {{0,1}, {0,-1}, {1,0}, {-1,0}};
        int ans = -1;

        if (counta ==0 || countb==0) return -1;
        while (!q.empty()){
            int size = q.size();
            ans++;
            while (size--){
                auto [x,y] = q.front();
                q.pop();
                for (auto [dx,dy] : dirs){
                    int i = dx+x;
                    int j = dy+y;
                    if (i>= 0 && i<m && j>=0 && j<n && grid[i][j] == 0){
                        grid[i][j] = 1;
                        q.push({i,j});
                    }
                }
            }
        }

        return ans;

    }

// med dfs problem

vector<pair<int,int>> dirs = {{0,1}, {0,-1}, {-1,0}, {1,0}};
void dfs(int x, int y, vector<vector<int>>& visited, vector<vector<int>>& grid,int& count){
	int m =grid.size();
	int n = grid[0].size();
	count++;
	visited[x][y] =1;

	for (auto [dx,dy] : dirs){
		int i = dx+x;
		int j = dy + y;

		if (i>=0 && j>= 0 && i<m && j<n && grid[i][j] == 1 && visited[i][j] == 0){
			dfs(i,j,visited,grid,count);
		}

	}

}



int maxAreaOfIsland(vector<vector<int>>& grid) {

	int m = grid.size();
	int n = grid[0].size();

	vector<vector<int>> visited(m, vector<int> (n));
	int ans = 0;
	for (int i =0; i<m; i++){
		for (int j =0; j<n; j++){
			if (grid[i][j] == 1 && !visited[i][j]){
				int count = 0;
				visited[i][j] = 1;
				dfs(i,j,visited,grid,count);
				ans = max(ans,count);
			}
		}
	}

	return ans;

	
}

//linked list 

ListNode* reverseList(ListNode* head) {

        ListNode* prev = nullptr;
        ListNode* curr = head;

        while (curr != nullptr){
            auto temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;



        }

        return prev;
        
    }

// using map and pair

vector<int> topKFrequent(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        if (k==n) return nums;
        map<int,int> mp;

        for (int i =0; i<n;i++){

                mp[nums[i]]++;
        }

        vector<pair<int,int>> v;

        for (auto& it:mp){
            v.push_back({it.second,it.first});
        }

        sort(v.rbegin(), v.rend());
        vector<int> ans;

        for (int i =0;i<k;i++) {

        ans.push_back(v[i].second);
        }
        return ans;
    }

//hard bfs problem

void bfs(vector<vector<int>>& grid, vector<vector<vector<int>>>& distances, int row, int col) {
        vector<pair<int,int>> dirs = {{0,1} , {0,-1}, {1,0}, {-1,0}};
        int m = grid.size();

        int n = grid[0].size();
        queue<pair<int,int>> q;
        q.push({row,col});

        bool vis[m][n] ;
        for (int i =0;i<m;i++){
            for (int j=0;j<n;j++){
                vis[i][j] = false;
            }
        }
        vis[row][col] = true;
        int steps =0;
        while (!q.empty()){
            for (int i = q.size(); i > 0; --i){

				auto curr = q.front();
                q.pop();
                int x = curr.first;
                int y = curr.second;
                vis[x][y] =true;

                if (grid[x][y] == 0){
                    distances[x][y][0] += steps;
                    distances[x][y][1] += 1;
                }

                for (auto& dir :dirs){
                    int dx = x + dir.first;
                    int dy = y + dir.second;
                    if (dx >= 0 && dy >= 0 && dx<m && dy < n){
                        if (!vis[dx][dy] && grid[dx][dy] == 0){
                            vis[dx][dy] = true;
                            q.push({dx,dy});
                        }
                    }
                }
            }

			steps++;
        }


    }
int shortestDistance(vector<vector<int>>& grid) {
	int m = grid.size();

	int n = grid[0].size();

	int ans = INT_MAX;
	
	int total = 0;
	vector<vector<vector<int>>> distances(m,vector<vector<int>> (n,{0,0}));

	for (int i =0; i<m; i++){
		for (int j =0; j<n; j++){
			if (grid[i][j] == 1){
				total++;
				bfs(grid,distances,i,j);
			}
		}
	}

	for (int i =0; i<m;i++){
		for (int j =0; j<n; j++){
			if (distances[i][j][1] == total){
				ans = min(ans, distances[i][j][0]);
			}
		}
	}

	if (ans == INT_MAX) return -1;


	return ans;
}

int main() {
	//	freopen("input.txt", "r", stdin);
	//	freopen("output.txt", "w", stdout);
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 int T;
	 cin >> T;
	 while (T--){
		int n, m;
		cin >> m >> n;
		vector<vector<int>> a(m, vector<int>(n));

		for (int i = 0; i < m; i++){
			for (int j = 0; j < n;j++){
					cin >> a[i][j];
			}
		}

		cout << shortestDistance(a);
	 }
}