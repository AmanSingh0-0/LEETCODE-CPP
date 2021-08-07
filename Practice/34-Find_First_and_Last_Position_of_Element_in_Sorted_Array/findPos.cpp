class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n =nums.size();
        int lo =0,hi = n-1;
        vector<int> ans(2,-1);
        if(n<=0) return ans;
        while(lo<hi){
            int mid = lo +((hi-lo)/2);
            if(nums[mid]< target){
                lo = mid+1;
            }
            else if(nums[mid]>target){
                hi =mid-1;
            }
            else{
                hi = mid;
            } 
        }
        if(nums[lo] != target) return ans;
        ans[0] = lo;
        hi =n-1;
        while(lo<hi){
            int mid =lo +((hi-lo)/2) +1; //right biased;
            if(nums[mid] >target){
                hi =mid-1;
            }
            else if(nums[mid] <target){
                lo =mid+1;
            }
            else{
                lo =mid;
            }
        }
        ans[1] = hi;
        return ans;
    }
};
