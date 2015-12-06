// Source : https://oj.leetcode.com/problems/anagrams/
// Author : Bin bin
// Date   : 2015-11-23

/********************************************************************************** 
 * 
 * Given an array of strings, group anagrams together.
 * 
 * For example, given: ["eat", "tea", "tan", "ate", "nat", "bat"], 
 * Return:
 * 
 * [
 *   ["ate", "eat","tea"],
 *   ["nat","tan"],
 *   ["bat"]
 * ]
 * 
 * Note:
 * 
 * For the return value, each inner list's elements must follow the lexicographic order.
 * All inputs will be in lower-case.
 * 
 * Update (2015-08-09):
 * The signature of the function had been updated to return list<list<string>> instead 
 * of list<string>, as suggested here. If you still see your function signature return 
 * a list<string>, please click the reload button  to reset your code definition.
 * 
 * 92 ms
 **********************************************************************************/


class Solution
{
public:
    vector<vector<string> > groupAnagrams(vector<string>& strs)
    {
        vector<vector<string> > result;
        int n=0;
        map<string,int> si;
        vector<string> tmp = strs;
        for(vector<string>::iterator it=tmp.begin();it!=tmp.end();it++)
        {
            sort(it->begin(),it->end());
        }
        for(size_t i=0;i<tmp.size();i++)
        {
            map<string,int>::iterator mit=si.find(tmp[i]);
            if(mit!=si.end())
            {
                result[mit->second].push_back(strs[i]);
            }else
            {
                si.insert(make_pair(tmp[i],n++));
                vector<string> s;
                s.push_back(strs[i]);
                result.push_back(s);
            }
        }
        for(vector<vector<string> >::iterator it=result.begin();it!=result.end();it++)
        {
            sort(it->begin(),it->end());
        }
        return result;
    }
};