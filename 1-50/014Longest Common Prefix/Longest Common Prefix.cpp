// Source : https://oj.leetcode.com/problems/longest-common-prefix/
// Author : Bin bin
// Date   : 2015-09-02

/********************************************************************************** 
* 
* Write a function to find the longest common prefix string amongst an array of strings.
* 
* 8ms              
**********************************************************************************/
string longestCommonPrefix(vector<string> &strs) 
{
    string result="";
    if(strs.size()<=0)
		return result;
    for(int i=1; i<=strs[0].length(); i++)
	{
        string tmp = strs[0].substr(0, i);
        bool match = true;

        for(int j=1; j<strs.size(); j++)
		{
            if (i>strs[j].length() || tmp!=strs[j].substr(0, i) ) 
			{
                match=false;
                break;
            }
        }
        if (!match)
		{
            return result;
        }
        result = tmp;
    }
    return result;
}