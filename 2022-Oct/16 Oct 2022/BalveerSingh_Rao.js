var a=[[1, 1, 1, 1],[2, 2, 2, 2],[3, 3, 3, 3 ],[4, 4, 4, 4 ]];
var b=[[1, 1, 1, 1],[2, 2, 2, 2],[3, 3, 3, 3],[4, 4, 4, 4 ]];
var newArray=[];
for(let i=0;i<a.length;i++){
    newArray.push([]);
for(let j=0;j<b.length;j++){
newArray[i].push(a[i][j]+b[i][j]);
}
}
console.log(newArray);
