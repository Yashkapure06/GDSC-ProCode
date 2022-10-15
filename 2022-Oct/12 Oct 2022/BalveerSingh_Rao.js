var L1=['A','B','C'];
var L2=['D','B','A','E'];
var output=[];
for(let i=0;i<L1.length;i++){
for(let j=0;j<L2.length;j++){
    if(L1[i]===L2[j]){
        output.push(L2[j]);
    }
}
}
console.log(output);
