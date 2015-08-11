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
        int locs[256];//�����ַ���һ�γ��ֵ�λ��
        memset(locs, -1, sizeof(locs));

        int idx = -1, max = 0;//idxΪ��ǰ�Ӵ��Ŀ�ʼλ��-1
        for (int i = 0; i < s.size(); i++)
        {
            if (locs[s[i]] > idx)//�����ǰ�ַ����ֹ�����ô��ǰ�Ӵ�����ʼλ��Ϊ����ַ���һ�γ��ֵ�λ��+1
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