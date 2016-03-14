// Source : https://oj.leetcode.com/problems/longest-substring-without-repeating-characters/
// Author : Lyndon
// Date   : 2016-03-14
var str2="asdfadfaasdfasdfasdfadsfasdf";
+function (str) {
    var i= 0,longest_repeat=[],ost=0;
   while(i<str.length){
       for(var j=i;j<str.length;j++){
           var reg_str=str.substring(i,j+1);
           var leave_str=str.substring(j+1,str.length);
           if(leave_str.includes(reg_str)){
               var len=reg_str.length;
               if(len>=ost) {
                   longest_repeat.push(reg_str);
                   ost = len;
               }
           }else {
               break;
           }
       }
       i++;
   }
    console.log(longest_repeat[longest_repeat.length-1]);
}(str2);