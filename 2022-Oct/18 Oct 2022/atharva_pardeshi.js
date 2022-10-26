const reverseArr = (arr) => {
  /* 
  pseudocode
  - iterate through arr (i)
  - iterate through it again (j)
  - as the j loop will iterate faster, push the ith element of jth array to newRow
  - eg: 0th element of 0th, 1st, 2nd and 3rd array then 1st element of 0th and so on
  - push newRow to outputArr 
*/
  const colCount = arr.length; // assuming the number of columns and rows is equal

  let outputArr = [];

  for (let i = 0; i < colCount; i++) {
    let newRow = [];
    for (let j = 0; j < colCount; j++) {
      newRow.push(arr[j][i]);
    }
    outputArr.push(newRow);
  }

  // return outputArr
  console.log(outputArr);
};

reverseArr([
  [1, 2, 3, 2],
  [2, 1, 2, 3],
  [2, 3, 1, 3],
  [2, 3, 4, 5],
]);
