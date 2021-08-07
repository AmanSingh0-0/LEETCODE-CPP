class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        sort(candidates.begin(),candidates.end());
        vector<int> combo;
        combine(candidates,ans,target,combo);
        return ans;
    }
private: 
    void combine(vector<int>& candidates,vector<vector<int>>& ans, int target,vector<int>& combo, int begin =0){
        if(target == 0){
            ans.push_back(combo);
            return;
        }
        for(int i =begin;i<candidates.size()&& target>=candidates[i];i+=1){
            if(i==begin  || candidates[i] != candidates[i-1]){
                combo.push_back(candidates[i]);
                combine(candidates,ans,target-candidates[i],combo,i+1);
                combo.pop_back();
            }
        }
    }
};
