// Source : https://oj.leetcode.com/problems/permutations-ii/
// Author : Bin Bin
// Date   : 2015-08-14

/********************************************************************************** 
* 
* Given a collection of numbers that might contain duplicates, return all possible unique permutations.
* 
* For example,
* [1,1,2] have the following unique permutations:
* [1,1,2], [1,2,1], and [2,1,1].
* 64 ms
*               
**********************************************************************************/
class Solution 
{
public:
    vector<vector<int>> permuteUnique(vector<int>& nums)
	{
		int n = nums.size();  
        vector<vector<int> > result;  
          
        if(n == 1)
		{  
            result.push_back(nums);  
            return result;  
        }
		
        vector<vector<int> > post;       
        vector<int> cur;  
        vector<int> tmp;  
        set<int> s;
        for(int i = 0; i < n; i++)
		{  
            cur = nums;
			set<int>::iterator it=s.find(*(cur.begin()+i));
			if(it!=s.end())
			{
				continue;
			}
			s.insert(*(cur.begin()+i));
            cur.erase(cur.begin()+i);  
            post = permuteUnique(cur);  
            for(int j = 0; j < post.size(); j++)
			{  
                tmp = post[j];  
                tmp.insert(tmp.begin(), nums[i]);  
				result.push_back(tmp); 
            }  
        }  
        return result;  
    }  
};