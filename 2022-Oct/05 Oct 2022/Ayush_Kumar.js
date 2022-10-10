var str="I love my India";

function longestword(str){
    var str2=str.split(' ');

    var max=0;
    for(var i=0;i<str2.length;i++){
        if(str2[i].length > max){
            max=str2[i].length;
        }

    }
    return max;

}
longestword(str);