const countUppercase = (str) => {
  const chars = str.split("");
  let count = 0;

  chars.forEach((char) => {
    // check if character is equal to its upper case counterpart
    char == " " ? count-- : null;
    char == char.toUpperCase() ? count++ : null;
  });

  console.log(count);
};

countUppercase("HeLlO wOrLd");
