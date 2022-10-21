var str = "Contributing to the tech eco system through the hacktoberfest  2022"
var temp=0;
var longest_word;
var arr_str = str.split(' ');
console.log(arr_str.length)
        for(var i = 0; i<arr_str.length; i++){
            if(arr_str[i].length > temp ){
                temp = arr_str[i].length;
                longest_word = arr_str[i];
            } 
        }
        console.log("longest :", temp);
        console.log("The longest word is:", longest_word);



