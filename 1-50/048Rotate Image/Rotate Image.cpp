// Source : https://oj.leetcode.com/problems/rotate-image/
// Author : Bin bin
// Date   : 2015-08-31

/********************************************************************************** 
* 
* You are given an n x n 2D matrix representing an image.
* Rotate the image by 90 degrees (clockwise).
* Follow up:
* Could you do this in-place?
* 4ms             
**********************************************************************************/

class Solution 
{
public:
    void rotate(vector<vector<int>>& matrix) 
	{
        vector<vector<int>> temp=matrix;
		for(int i=0;i<temp.size();i++)
			for(int j=0;j<temp[i].size();j++)
			{
				matrix[j][temp.size()-1-i]=temp[i][j];
			}
    }
};