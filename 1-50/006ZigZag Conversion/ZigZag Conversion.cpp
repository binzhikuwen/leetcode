// Source : https://oj.leetcode.com/problems/zigzag-conversion/
// Author : bin bin
// Date   : 2015-08-04

/********************************************************************************** 
* 
* The string "PAYPALISHIRING" is written in a zigzag pattern on a given number of rows like this: 
* (you may want to display this pattern in a fixed font for better legibility)
* 
* P   A   H   N
* A P L S I I G
* Y   I   R
* 
* And then read line by line: "PAHNAPLSIIGYIR"
* 
* Write the code that will take a string and make this conversion given a number of rows:
* 
* string convert(string text, int nRows);
* 
* convert("PAYPALISHIRING", 3) should return "PAHNAPLSIIGYIR".
* 16 ms
*               
**********************************************************************************/

class Solution 
{
public:
    string convert(string s, int numRows)
    {
        string result;
		int space = numRows*2-2;
		if(space==0)
		{
		    return s;
		}
		int temp = space;
		for(int i=0;i<numRows;i++)
		{
			for(int j=i,n=0;j<s.length();n++)
			{
				result.append(1,s[j]);
				if(i==0||i==numRows-1)
				{
					j+=temp;
				}else if(n%2==0)
				{
					j+=space;
				}else
				{
					j+=(temp-space);
				}
				
			}
			space-=2;
		}
		return result;
    }
};