var str = "christmas eve is the better than noon";
var reversed_str=[];
var array_string  = str.split(' ');
var temp = 1;
var palindrome_word;

for( var i = 0; i < array_string.length; i++ ) {
  
  reversed_str[i] = array_string[i].split('').reverse().join('');
  
  for ( var j = 0; j < reversed_str.length; j++ ) { 
    if ( reversed_str[j] == array_string[j] ) {
      if ( reversed_str[j].length > temp ) {
        temp = reversed_str[j].length;
        palindrome_word = reversed_str[j];
      }
    }  
  } 
}




console.log("The largest Palindrome word is: "+palindrome_word)



