function permutation(str) { 
    var res = [];
    if (str.length == 1) {
      res.push(str);
      return res;
    }
    for (var i = 0; i < str.length; i++) {
      var firstChar = str[i];
      var charsLeft = str.substring(0, i) + str.substring(i + 1);
      var innerPermutations = permutation(charsLeft);
      for (var j = 0; j < innerPermutations.length; j++) {
        res.push(firstChar + innerPermutations[j]);
      }
    }
    return res;
  }
  console.log(permutation('ABC'));
