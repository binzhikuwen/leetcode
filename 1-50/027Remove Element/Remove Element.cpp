// Source : https://oj.leetcode.com/problems/remove-element/
// Author : Bin bin
// Date   : 2015-08-11

/********************************************************************************** 
* 
* Given an array and a value, remove all instances of that value in place and return the new length.
* 
* The order of elements can be changed. It doesn't matter what you leave beyond the new length.
* 
* 4 ms              
**********************************************************************************/

class Solution 
{
public:
    int removeElement(vector<int>& nums, int val) 
    {
        if(nums.size()<1)
        {
            return nums.size();
        }
        int pos=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=val)
            {
                nums[pos++]=nums[i];
            }
        }
        return pos;
    }
};