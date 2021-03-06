// Source : https://oj.leetcode.com/problems/longest-substring-without-repeating-characters/
// Author : bin bin learn from
// Date   : 2015-08-05

/********************************************************************************** 
* 
* Given a string, find the length of the longest substring without repeating characters. 
* For example, the longest substring without repeating letters for "abcabcbb" is "abc", 
* which the length is 3. For "bbbbb" the longest substring is "b", with the length of 1.
* 16 ms              
**********************************************************************************/
class Solution 
{
public:
    int lengthOfLongestSubstring(string s) 
	{
        int locs[256];//保存字符上一次出现的位置
        memset(locs, -1, sizeof(locs));

        int idx = -1, max = 0;//idx为当前子串的开始位置-1
        for (int i = 0; i < s.size(); i++)
        {
            if (locs[s[i]] > idx)//如果当前字符出现过，那么当前子串的起始位置为这个字符上一次出现的位置+1
            {
                idx = locs[s[i]];
            }

            if (i - idx > max)
            {
                max = i - idx;
            }
            locs[s[i]] = i;
        }
        return max;
    }
};