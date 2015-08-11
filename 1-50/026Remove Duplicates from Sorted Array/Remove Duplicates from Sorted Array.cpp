// Source : https://oj.leetcode.com/problems/remove-duplicates-from-sorted-array/
// Author : Bin bin
// Date   : 2015-08-11

/********************************************************************************** 
* 
* Given a sorted array, remove the duplicates in place such that each element appear 
* only once and return the new length.
* 
* Do not allocate extra space for another array, you must do this in place with constant memory.
* 
* For example,
* Given input array A = [1,1,2],
* 
* Your function should return length = 2, and A is now [1,2].
* 
* 60 ms              
**********************************************************************************/
class Solution 
{
public:
    int removeDuplicates(vector<int> &nums) 
	{		
		set<int> s;
		for(vector<int>::iterator it=nums.begin();it!=nums.end();it++)
		{
			s.insert(*it);
		}
		set<int>::iterator sit=s.begin();
		for(int i=0;sit!=s.end();i++,sit++)
		{
			nums[i]=*sit;
		}
		return s.size();
    }
};