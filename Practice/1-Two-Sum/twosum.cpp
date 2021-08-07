class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<pair<int, int>> arr(n);
        for (int i = 0; i < n; ++i) {
            arr[i] = make_pair(nums[i], i);
        }
        sort(arr.begin(),arr.end());
        int left =0;
        int right = nums.size()-1;
        while(left<right){
            int sum = arr[left].first + arr[right].first;
            if(sum<target) left++;
            else if(sum>target) right--;
            else return {arr[left].second,arr[right].second};
        }
        return {};
    }
};
