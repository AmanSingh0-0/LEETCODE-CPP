class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currSum = 0, maxSum = -100001,i=0;
        int n = nums.size();
        while(i<n){
            currSum = currSum + nums[i];
            if(currSum>maxSum){
                maxSum = currSum;
            }
            if(currSum<0){
                currSum = 0;
            }
            i+=1;
        }
        return maxSum;
    }
};
