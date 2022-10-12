#include <algorithm>
#include <iostream>
#include <numeric>
#include <string>
#include <vector>

std::vector <std::string> generate_subsets (const std::string& s) {
  size_t length = s.length();
  size_t subset_count = 1u << length;
  std::vector <std::string> subsets;
  std::string temp;

  // reserve memory beforehand to avoid copy and relocation upon internal vector resizing
  subsets.reserve(subset_count);

  // iteratively generate all subsets
  for (size_t i = 0; i < subset_count; ++i) {
    for (size_t j = 0; j < length; ++j) {
      if (i & (1 << j))
        temp += s[j];
    }

    subsets.emplace_back(std::move(temp));
  }

  return subsets;
}

int main () {
  // read input
  std::string s;
  std::getline(std::cin, s);

  // limit size of input to 20
  // time complexity for generating all combinations/subsets is O(2^length)
  if (s.length() > 20u)
    std::cerr << "[error]: input string length is too large" << std::endl;
  
  // generate all subsets
  else {
    auto combinations = generate_subsets(s);

    std::cout << '"'
              << std::accumulate(combinations.begin(), combinations.end(), std::string(""), 
                  [] (const auto& l, const auto& r) {
                    return r + " " + l;
                  }
                )
              << '"'
              << std::endl;
  }

  return 0;
}
