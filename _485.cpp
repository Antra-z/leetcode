class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxx=nums[0];
        int sum=0;
        for(int i:nums)
        {
            if(i==0)
            {
                sum=0;
            }
            else
            {
                sum+=1;
            }
            maxx=max(maxx,sum);
        }
        return maxx;
    }
};