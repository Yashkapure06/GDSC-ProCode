#include <iostream>
#include <string>
#include <sstream>
#include <vector>

// helper function to check if string is a palindrome
bool is_palindrome (const std::string& s) {
  size_t n = s.length();

  for (size_t i = 0; i < n / 2; ++i) {
    // a character that doesn't match its counterpart has been found
    if (std::tolower(s[i]) != std::tolower(s[n - i - 1]))
      return false;
  }
  
  return true;
}

int main () {
  // read input line
  std::string s;
  std::getline(std::cin, s);

  // use stringstream to split word based on spaces
  std::stringstream stream;
  stream << s;

  int count = 0;

  while (stream >> s)
    count += is_palindrome(s);
  
  std::cout << count << std::endl;

  return 0;
}
