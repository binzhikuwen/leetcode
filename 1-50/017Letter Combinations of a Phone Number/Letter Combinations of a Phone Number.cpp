// Source : https://oj.leetcode.com/problems/letter-combinations-of-a-phone-number/
// Author : Bin bin
// Date   : 2015-09-02

/********************************************************************************** 
* 
* Given a digit string, return all possible letter combinations that the number could represent.
* 
* A mapping of digit to letters (just like on the telephone buttons) is given below.
* 
* Input:Digit string "23"
* Output: ["ad", "ae", "af", "bd", "be", "bf", "cd", "ce", "cf"].
* 
* Note:
* Although the above answer is in lexicographical order, your answer could be in any order you want.
* 
* 0ms              
**********************************************************************************/
class Solution 
{
public:
	Solution()
	{
		m['2']="abc";
		m['3']="def";
		m['4']="ghi";
		m['5']="jkl";
		m['6']="mno";
		m['7']="pqrs";
		m['8']="tuv";
		m['9']="wxyz";
	}
    vector<string> letterCombinations(string digits)
	{
		
        vector<string> result;
		if(digits.length()<1)
			return result;
		if(digits.length()==1)
		{
			for(int i=0;i<m[digits[0]].length();i++)
			{
				result.push_back(m[digits[0]].substr(i,1));
			}
			return result;
		}else
		{
			vector<string> temp = letterCombinations(digits.substr(1,digits.length()-1));
			for(int i=0;i<m[digits[0]].length();i++)
			{
				for(int j=0;j<temp.size();j++)
				{
					result.push_back(m[digits[0]][i]+temp[j]);
				}
			}
			return result;
		}
    }
private:
	map<char,string> m;
};