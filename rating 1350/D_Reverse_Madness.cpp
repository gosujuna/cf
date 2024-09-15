lass Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> res;

        sort(candidates.begin(), candidates.end());

        auto backtrack = [&](auto&& self,vector<int> cur, int pos, int target){
            if (target == 0){
                res.push_back(cur);
                return;
            }
            if (target  <0){
                return;
            }
            int prev = -1;
            for (int i = pos; i<candidates.size(); i++){
                if (candidates[i] == prev){
                    continue;
                }
                cur.push_back(candidates[i]);
                self(self,cur,i+1, target-candidates[i]);
                cur.pop_back();
                prev = candidates[i];
            }
        };

        vector<int> cur;
        backtrack(backtrack,cur,0,target);
        return res;
        
    }
};
