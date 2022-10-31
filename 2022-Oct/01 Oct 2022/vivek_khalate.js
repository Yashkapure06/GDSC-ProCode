function checkPalindrome(string) {
  let midPt = string.length / 2;

  let firstPart = string.slice(0, Math.floor(midPt));
  let secondPart = string.slice(Math.ceil(midPt)).split("").reverse().join("");

  firstPart == secondPart
    ? console.log("Palindrome")
    : console.log("NOT Palindrome");
}

checkPalindrome("RACECAR");
