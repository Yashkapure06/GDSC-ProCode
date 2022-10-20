package main
import (
    "fmt"
    "unicode"
)

func main() {
    fmt.Print("Enter the word: ")
    var str, caseConvertedStr string
    fmt.Scanf("%s", &str)
    ch := []rune(str)
    var resCh []rune
    
    for i := 0; i < len(ch); i++ {
        if(unicode.IsUpper(ch[i])){
            resCh = append(resCh, unicode.ToLower(ch[i]))
        } else {
            resCh = append(resCh, unicode.ToUpper(ch[i]))
        }
        
    }
    
    caseConvertedStr = string(resCh)
    fmt.Printf("The case conversion for %s is %s", str, caseConvertedStr)
}
