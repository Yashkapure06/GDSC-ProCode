const isAnagram = (s, t) => {
  // return false if the strings aren't equal in length
  if (s.length !== t.length) return false;

  let count = {};

  const N = s.length;

  for (let i = 0; i < N; i++) {
    if (!count[s[i]]) count[s[i]] = 0;
    if (!count[t[i]]) count[t[i]] = 0;
    count[s[i]]++;
    count[t[i]]--;
  }

  for (ch in count) {
    if (count[ch] !== 0) return false;
  }

  return true;
};

console.log(isAnagram("ababa", "baaab"));
