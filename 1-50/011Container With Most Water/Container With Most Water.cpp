// Source : https://oj.leetcode.com/problems/container-with-most-water/
// Author : Bin Bin
// Date   : 2015-11-05

/********************************************************************************** 
* 
* Given n non-negative integers a1, a2, ..., an, where each represents a point at coordinate (i, ai). 
* n vertical lines are drawn such that the two endpoints of line i is at (i, ai) and (i, 0). 
* 
* Find two lines, which together with x-axis forms a container, such that the container contains the most water.
* 
* Note: You may not slant the container.
* 
*  24ms             
**********************************************************************************/

class Solution
{
public:
    int maxArea(vector<int> &height)
	{

        int maxArea = 0;
        int left = 0; 
        int right = height.size()-1;
        int area; 
        while ( left < right )
		{
			if(height[left]<height[right])
			{	
				area=(right - left) * height[left];
				left++;
			}else
			{
				area=(right - left) * height[right];
				right--;
			}
            maxArea = area > maxArea ? area : maxArea;
        }
        
        return maxArea;
    }
};