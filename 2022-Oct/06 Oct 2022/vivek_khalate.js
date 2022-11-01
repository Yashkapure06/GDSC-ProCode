const reverseStr = (s) => {
  const words = s.split(" ");
  let output = [];

  // reverse individual words and push them to the output array
  words.forEach((word) => {
    output.push(word.split("").reverse().join(""));
  });

  console.log(output.join(" "));
};

reverseStr("I love my India");
