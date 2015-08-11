// Source : https://oj.leetcode.com/problems/remove-duplicates-from-sorted-array/
// Author : learn from Hao Chen
// Date   : 2015-08-11

/********************************************************************************** 
* 
* Given a sorted array, remove the duplicates in place such that each element appear 
* only once and return the new length.
* 
* Do not allocate extra space for another array, you must do this in place with constant memory.
* 
* For example,
* Given input array A = [1,1,2],
* 
* Your function should return length = 2, and A is now [1,2].
* 
* 32 ms             
**********************************************************************************/
class Solution 
{
public:
    int removeDuplicates(vector<int> &nums) 
	{
        
        if (nums.size()<=1) return nums.size();
        
        int pos=0;
        for(int i=0; i<n-1; i++){
            if (nums[i]!=nums[i+1]){
                nums[++pos] = nums[i+1];
            }
        }
        return pos+1;
    }
};