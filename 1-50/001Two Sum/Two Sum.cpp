// Source : https://oj.leetcode.com/problems/two-sum/
// Author : bin bin
// Date   : 2015-07-25

/********************************************************************************** 
* 
* Given an array of integers, find two numbers such that they add up to a specific target number.
* 
* The function twoSum should return indices of the two numbers such that they add up to the target, 
* where index1 must be less than index2. Please note that your returned answers (both index1 and index2) 
* are not zero-based.
* 
* You may assume that each input would have exactly one solution.
* 
* Input: numbers={2, 7, 11, 15}, target=9
* Output: index1=1, index2=2
* 
* 108 ms               
**********************************************************************************/
class Solution
{
	public:
		vector<int> twoSum(vector<int> &nums,int target)
		{
			vector<int> result;
			multimap<int,int> mm;
			for(int i=0;i<nums.size();++i)
			{
				mm.insert(pair<int,int>(nums[i]%10,i));
			}
			for(int i=0;i<nums.size();++i)
			{
				//考虑target<num
				int n = (target-nums[i])%10;
				int m = n-10;
				multimap<int,int>::iterator it;
				//pair<iterator,iterator> equal_range (const key_type& k);
				for(it=mm.equal_range(n).first;it!=mm.equal_range(n).second;++it)
				{
					if(nums[i]+nums[(*it).second]==target && i!=(*it).second)
					{	
						result.push_back(i+1);
						result.push_back((*it).second+1);
						return result;
					}
				}
				for(it=mm.equal_range(m).first;it!=mm.equal_range(m).second;++it)
				{
					if(nums[i]+nums[(*it).second]==target && i!=(*it).second)
					{	
						result.push_back(i+1);
						result.push_back((*it).second+1);
						return result;
					}
				}
			}
		}
};