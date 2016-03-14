/**
 * Created by lyndon.li on 3/14/2016.
 */
/* numbers=[2, 7, 11, 15], target=9 */
var numbers = [2, 7, 11, 15];
+function (num) {
    var target = 22;
    var result=new Set();
    for (var i = 0; i < num.length; i++) {
       var index=num.indexOf(target-num[i]);
        if(index>0&&i<index){
          result.add([i+1,index+1]);
        }
    }
    console.log(result);
    return result;
}(numbers);