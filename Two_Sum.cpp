class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i,j,arr[2];
        vector<int> v;
        for(i=0;i<nums.size();i++)
        {
            for(j=i+ 1;j<nums.size();j++)
            {
                if(nums[i]+ nums[j]==target)
                {
                    arr[0]=i;
                    arr[1]=j;
                    v.assign(arr,arr+ 2);
                    return v;
                    
                }
            }
        }
        
        return v;
    }
};