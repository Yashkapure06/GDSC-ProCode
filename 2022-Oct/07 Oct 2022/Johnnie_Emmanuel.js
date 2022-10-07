var str = "This is a racecar that was driven at noon "
var reversed_str=[];
var arr_str = str.split(' ');
var temp = 1;
var palindrome_word;

        for(var i = 0; i  <  arr_str.length; i++){
            reversed_str[i] =arr_str[i].split('').reverse().join('')
  
                for(var j = 0; j  <  reversed_str.length; j++){
                    if(reversed_str[j] == arr_str[j] ){
                        if(reversed_str[j].length > temp){
                            temp =  reversed_str[j].length
                            palindrome_word = reversed_str[j]
                        }
                    }
                }
        }
      
            console.log("The largest Palindrome word is: \t"+palindrome_word)
       


        

        


