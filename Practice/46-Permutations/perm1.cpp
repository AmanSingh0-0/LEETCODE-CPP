class Solution {
public:
    void perms(int begin,vector<int>& nums, vector<vector<int>>& ans){
        if(begin == nums.size()){
            ans.push_back(nums);
            return;
        }
        for(int i =begin; i<nums.size();i+=1){
            swap(nums[begin], nums[i]);
            perms(begin+1,nums,ans);
            swap(nums[begin], nums[i]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        perms(0,nums,ans);
        return ans;
        }

};
