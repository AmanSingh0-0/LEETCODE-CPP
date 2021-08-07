class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i =0,count = 0;
        
        while(i<nums.size()){
            if(nums[i]==val){
                count +=1;
            }else{
                nums[i-count] = nums[i];
            }
            i+=1;
        }
        return nums.size()-count;
    }
};
