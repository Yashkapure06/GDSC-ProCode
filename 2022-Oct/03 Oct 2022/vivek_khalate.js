const switchCase = (str) => {
  const chars = str.split("");
  const outputArr = [];

  chars.forEach((char) => {
    char == char.toUpperCase()
      ? outputArr.push(char.toLowerCase())
      : outputArr.push(char.toUpperCase());
  });

  console.log(outputArr.join(""));
};

switchCase("TeSt");
