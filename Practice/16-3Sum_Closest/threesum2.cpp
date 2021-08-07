class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int diff =INT_MAX;
        sort(nums.begin(),nums.end());
        int res = 0;
        for(int i =0;i<nums.size();i+=1){
            int l =i+1;
            int r = nums.size()-1;
            while(l<r){
                int sum = nums[i] +nums[l] +nums[r];
                if(sum<target) l++;
                else if(sum>target) r--;
                else return sum;
                if(diff> abs(sum-target)){
                    diff = abs(sum-target);
                    res = sum;
                }
            }
                
        }
        return res;
        
    }
};
