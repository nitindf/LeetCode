class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i=0, t=0;
        for(i=0;i<nums.size();i++){
            if(nums[i]!= val){
                nums[t]= nums[i];
                t++;
            }
        }
    return t;
    }
};


// Time : O(n) 
// Space : O(1)
