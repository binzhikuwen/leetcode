/**
 * Created by lyndon.li on 3/14/2016.
 */

/**********************************************************************************
 *
 * You are given two linked lists representing two non-negative numbers.
 * The digits are stored in reverse order and each of their nodes contain a single digit.
 * Add the two numbers and return it as a linked list.
 *
 * Input: (2 -> 4 -> 3) + (5 -> 6 -> 4)
 * Output: 7 -> 0 -> 8
 * 36ms
 **********************************************************************************/
var list1=[2,4,3];
var list2=[5,6,4];
+function(l1,l2){
    var result=[],
        carry= 0,
        len=l1.length,
        i=0;
    while(i<len){
        result.push((l1[i]+l2[i])%10+carry);
        carry=parseInt((l1[i]+l2[i])/10);
        i++;
    }
    console.log(result);
    return result;
}(list1,list2);
