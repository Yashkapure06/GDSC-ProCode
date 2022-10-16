/**
 *
 * Authored by:  Hariraj Arunachalam
 * Date: 16/10/2022
 *
*/

package main

import (
    "fmt"
    "sort"
    "strings"
)

func sortString(str string) string {
    str = strings.ToLower(str)
    ch := strings.Split(str, "")
    sort.Strings(ch)
    sortedStr := strings.Join(ch, "")
    return sortedStr
}

func isAnagram(str1 string, str2 string) {
    ch1 := strings.Split(str1, "")
    ch2 := strings.Split(str2, "")
    if(len(ch1) != len(ch2)){
        fmt.Printf("%s and %s are not anagrams", str1, str2)
    } else if(sortString(str1) == sortString(str2)){
        fmt.Printf("%s and %s are anagrams", str1, str2)
    } else {
        fmt.Printf("%s and %s are not anagrams", str1, str2)
    }
}

func main() {
    var str1, str2 string
    fmt.Print("Enter the word1: ")
    fmt.Scanf("%s", &str1)
    fmt.Print("Enter the word2: ")
    fmt.Scanf("%s", &str2)
    isAnagram(str1, str2)
}
