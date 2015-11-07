// Source : https://oj.leetcode.com/problems/search-insert-position/
// Author : Bin bin
// Date   : 2015-11-17

/********************************************************************************** 
* 
* Given a sorted array and a target value, return the index if the target is found. 
* If not, return the index where it would be if it were inserted in order.
* 
* You may assume no duplicates in the array.
* 
* Here are few examples.
* [1,3,5,6], 5 → 2
* [1,3,5,6], 2 → 1
* [1,3,5,6], 7 → 4
* [1,3,5,6], 0 → 0
* 
*               
**********************************************************************************/


class Solution 
{
public:
    int searchInsert(vector<int>& nums, int target)
    {
        vector<int> result;
		int x=0,y=nums.size();
		int mid;
		while(x < y)
		{
			mid = x+(y-x)/2;
			if(nums[mid] >= target) 
			{
				y=mid;
			}else
			{
				x=mid+1;
			}
		}
		return x;
    }
};