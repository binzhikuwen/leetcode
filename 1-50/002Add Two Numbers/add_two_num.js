// Source : https://oj.leetcode.com/problems/add-two-numbers/
// Author : Lyndon
// Date   : 2016-03-14
var addTwoNumbers = function(l1,l2){
    var result=[],
        carry= 0,
        len=l1.length,
        i=0;
    while(i<len){
        result.push((l1[i]+l2[i])%10+carry);
        carry=parseInt((l1[i]+l2[i])/10);
        i++;
    }
    return result;
}
