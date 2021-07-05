class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
       int f[101]={0};
        for(int i=0;i<nums.size();i++)
            f[nums[i]]++;
        for(int i=1;i<101;i++)
            f[i]+=f[i-1];
        for(int i=0;i<nums.size();i++)
            nums[i]=nums[i]!=0?f[nums[i]-1]:0;
        return nums;
    }
};
