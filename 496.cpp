class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) 
    {
        for(int i=0;i<nums1.size();i++)
        {
            for(int j=0;j<nums2.size();j++)
            {
                if(nums1[i]==nums2[j])
                {    bool fool=true;
                    for(int k=j+1;k<nums2.size();k++)
                    {
                        if(nums1[i]<nums2[k])
                        {
                            nums1[i]=nums2[k];
                            fool=false;
                            break;
                        }
                        
                    }
                    if(fool)
                    {
                        nums1[i]=-1;
                    }
                    
                    
                    break;
                }
            }
        }
        return nums1;
    }
};