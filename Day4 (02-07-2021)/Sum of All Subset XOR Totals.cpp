class Solution {
public:int solve(vector<int>&nums,int i,int xt){
    if(i==nums.size())
        return xt;
    return solve(nums,i+1,xt^nums[i])+solve(nums,i+1,xt);
    }
    
    int subsetXORSum(vector<int>& nums) {
        return solve(nums,0,0);
    }
};

