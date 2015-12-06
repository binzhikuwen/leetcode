// Source : https://oj.leetcode.com/problems/3sum-closest/
// Author : Bin bin 
// Date   : 2015-11-23

/********************************************************************************** 
* 
* Given an array S of n integers, find three integers in S such that the sum is 
* closest to a given number, target. Return the sum of the three integers. 
* You may assume that each input would have exactly one solution.
* 
*     For example, given array S = {-1 2 1 -4}, and target = 1.
* 
*     The sum that is closest to the target is 2. (-1 + 2 + 1 = 2).
* 
*  12 ms             
**********************************************************************************/

class Solution
{
public:
    int threeSumClosest(vector<int>& nums, int target)
    {
        int result;
        int distance = 2147483647;
        int n=nums.size();
        bool flag=true;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-2;i++)
        {
            if(i>0&&nums[i-1]==nums[i])
            {
                continue;
            }
            int low = i+1;
            int high = n-1;
            while(low<high)
            {
                int sum = nums[i]+nums[low]+nums[high];
                if(sum==target)
                {
                    return target;
                }else if(sum>target)
                {
                    if(sum-target<distance)
                    {
                        distance = sum-target;
                        flag = true;
                    }
                    while(low<high&&nums[high]==nums[high-1])
                        high--;
                    high--;

                }else
                {
                    if(target-sum<distance)
                    {
                        distance = target-sum;
                        flag = false;
                    }
                    while(low<high&&nums[low]==nums[low+1])
                        low++;
                    low++;
                }

            }
        }
        return flag?(distance+target):(target-distance);
    }
};