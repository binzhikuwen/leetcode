// Source : https://oj.leetcode.com/problems/next-permutation/
// Author : Bin bin
// Date   : 2015-08-13

/********************************************************************************** 
* 
* Implement next permutation, which rearranges numbers into the lexicographically next 
* greater permutation of numbers.
* 
* If such arrangement is not possible, it must rearrange it as the lowest possible order 
* (ie, sorted in ascending order).
* 
* The replacement must be in-place, do not allocate extra memory.
* 
* Here are some examples. Inputs are in the left-hand column and its corresponding outputs 
* are in the right-hand column.
*
*   1,2,3 �� 1,3,2
*   3,2,1 �� 1,2,3
*   1,1,5 �� 1,5,1
*   12ms            
**********************************************************************************/

class Solution 
{
public:
    void nextPermutation(vector<int>& nums)
	{
		int n = nums.size();
        int i = n-1;  
        while(i > 0 && nums[i-1] >= nums[i] )
		{  
            i--;  
        }        
        int j = i;         
        while(j < nums.size() && nums[j] > nums[i-1])
		{
			j++;  
        } 
        if(i == 0)
		{  
            reverse(nums.begin(), nums.end());  
        }else
		{  
            swap(nums[i-1], nums[j-1]);  
            reverse(nums.begin() + i, nums.end());  
        }  
    }
};