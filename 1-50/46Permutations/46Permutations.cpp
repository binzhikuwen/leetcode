// Source : https://oj.leetcode.com/problems/permutations/
// Author : Bin bin
// Date   : 2015-08-11

/********************************************************************************** 
* 
* Given a collection of numbers, return all possible permutations.
* 
* For example,
* [1,2,3] have the following permutations:
* [1,2,3], [1,3,2], [2,1,3], [2,3,1], [3,1,2], and [3,2,1].
* 
* 12 ms              
**********************************************************************************/
class Solution 
{
public:
    vector<vector<int>> permute(vector<int>& nums) 
	{
			vector<int> temp(nums);
			sort(temp.begin(),temp.end());
			vector(vector<int> > result;
			result.push_back(temp);
			while(next_permutation(temp.begin(),temp.end())
			{
				result.push_back(temp);
			}
			return result;
    }
};