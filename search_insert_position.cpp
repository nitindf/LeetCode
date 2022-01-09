class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int f=0,l=nums.size()-1,mid;
        while(f<=l)
        {
            mid=f+(l-f)/2;
            if(nums[mid]<target)
            {
                f=mid+ 1;
            }
            else
            {
                l=mid- 1;
            }  
        }
    return f;
    }
};

/*class Solution {
public:
    int searchInsert(vector<int>& nums, int target) 
    {
        int i,temp=0,res=0;
        for(i=0;i<nums.size();i++)
        {
            if(nums[i]==target)
                return i;
            if(nums[i]>target)
            {
                temp=i;
                return temp;
            }
            else
            {
                temp++;
                if(temp==nums.size()) 
                    return temp;
            }
        }
        return res;
    }
};*/