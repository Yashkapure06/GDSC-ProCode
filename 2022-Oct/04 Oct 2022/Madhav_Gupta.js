function anagram(s1, s2) {
    var c1 = s1.split('').sort().join('');
    var c2 = s2.split('').sort().join('');

    if (c1 === c2) {
        return true;
    }
    else {
        return false;
    }

}
var result = anagram('abc', 'cba');
console.log(result);
