const switchCase = (str) => {
  const chars = str.split("");
  const outputArr = [];

  chars.forEach((char) => {
    if (char == char.toUpperCase()) {
      outputArr.push(char.toLowerCase());
    } else {
      outputArr.push(char.toUpperCase());
    }
  });

  // return outputArr.join('')
  console.log(outputArr.join(""));
};

// Tests
switchCase("TeSt");
switchCase("mEt GdsC");
switchCase("CoDER");
