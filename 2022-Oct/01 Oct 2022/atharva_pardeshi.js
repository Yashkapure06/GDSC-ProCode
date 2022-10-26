const isPalindrome = (string) => {
  // the mid-point of the string
  let strMid = string.length / 2;

  // split parameter in two parts, reverse the second half
  let firstHalf = string.slice(0, Math.floor(strMid));
  let secondHalf = string.slice(Math.ceil(strMid)).split("").reverse().join("");

  if (firstHalf == secondHalf) {
    // return "Palindrome"
    console.log("Palindrome");
  } else {
    // return "NOT Palindrome"
    console.log("NOT Palindrome");
  }
};

isPalindrome("ABBCCBBA");
