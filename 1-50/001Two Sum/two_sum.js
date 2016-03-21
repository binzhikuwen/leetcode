// Source : https://oj.leetcode.com/problems/two-sum/
// Author : Lyndon
// Date   : 2016-03-14
var twoSum = function(nums, target) {
    var result=[];
    for (var i = 0; i < nums.length; i++) {
        var index=nums.indexOf(target-nums[i],i+1);
        if(index>0&&i<index){
            result.push(i,index);
        }
    }
    return result;
};