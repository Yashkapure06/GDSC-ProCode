
var str = "This is the year 2022, and tech is taking over the world ."
var rev_str = [];
var updated_str;
var array_str = str.split(' ');

for ( var i = 0 ; i < array_str.length ; i++ ) {
  rev_str[i] = array_str[i].split('').reverse().join('')
}
updated_str = rev_str.join(' ');
console.log(updated_str)
