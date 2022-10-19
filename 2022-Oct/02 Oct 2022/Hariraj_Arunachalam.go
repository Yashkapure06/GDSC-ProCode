package main
import (
    "fmt"
    "unicode"
)

func main() {
    var count int
    fmt.Print("Enter the word: ")
    var str string
    fmt.Scanf("%s", &str)
    ch := []rune(str)
    
    for i := 0; i < len(ch); i++ {
        if(unicode.IsUpper(ch[i])){
            count += 1
        }
    }
  
    fmt.Printf("The number of capital letters in the word %s is %d", str, count)
}
