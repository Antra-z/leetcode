class Solution {
public:
    int rob(vector<int>& nums) {
        int result=0;
        int res=0;
        for(int i:nums)
        {
            int n=max(i+result,res);
            result=res;
            res=n;
        }
        return max(result,res);
            }
};