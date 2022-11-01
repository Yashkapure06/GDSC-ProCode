function findUpperCase(str) {
  const chars = str.split("");
  let count = 0;

  for (let i = 0; i < chars.length; i++) {
    chars[i] == " " ? count-- : null;
    chars[i] == chars[i].toUpperCase() ? count++ : null;
  }

  console.log(count);
}

findUpperCase("HeLlO wOrLd");
