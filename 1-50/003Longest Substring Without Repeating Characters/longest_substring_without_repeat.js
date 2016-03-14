/**
 * Created by lyndon.li on 3/14/2016.
 */
var str1="bbbbbb",str2="abcdabcdbdb";
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