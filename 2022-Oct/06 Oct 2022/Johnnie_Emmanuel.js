var str = "This is the year 2022, and tech is taking over the world."

var reversed_str=[];
var new_string;
var arr_str = str.split(' ');

        for(var i = 0; i<arr_str.length; i++){
            reversed_str[i] =arr_str[i].split('').reverse().join('')
        }

        new_string = reversed_str.join(' ')

        console.log(new_string)

        


