// Source : https://oj.leetcode.com/problems/remove-element/
// Author : learn from Hao Chen
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
        int tail = nums.size()-1;
        int i = 0;
        while ( i<=tail )
		{
            if (nums[i]==val)
			{
                nums[i] = nums[tail--];
                continue;
            }
            i++;
        }
        
        return tail+1;
    }
};