var input=[1, 2, 3, 4, 5, 6, 7];
var d=2;
var temp;
for(let i=0;i<d;i++){
    temp=input.shift();
    input.push(temp);
}
console.log(input);
