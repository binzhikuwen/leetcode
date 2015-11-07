// Source : https://oj.leetcode.com/problems/search-for-a-range/
// Author : Bin bin
// Date   : 2015-11-07

/********************************************************************************** 
* 
* Given a sorted array of integers, find the starting and ending position of a given target value.
* 
* Your algorithm's runtime complexity must be in the order of O(log n).
* 
* If the target is not found in the array, return [-1, -1].
* 
* For example,
* Given [5, 7, 7, 8, 8, 10] and target value 8,
* return [3, 4].
* 
*               
**********************************************************************************/

class Solution 
{
public:
    vector<int> searchRange(vector<int>& nums, int target)
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
		if(nums[x]==target)
		{
			result.push_back(x);//lower_bound
		}
		else
		{
			result.push_back(-1);
			result.push_back(-1);
			return result;
		}
		
		x=0,y=nums.size();
		while(x < y)
		{
			mid = x+(y-x)/2;
			if(nums[mid] <= target) 
			{
				x=mid+1;
			}else
			{
				y=mid;
			}
		}
		if(nums[x-1]==target)
		{
			result.push_back(x-1);//upper_bound
		}
		return result;
    }
};