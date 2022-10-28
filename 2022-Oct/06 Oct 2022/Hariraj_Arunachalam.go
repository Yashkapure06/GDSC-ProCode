/*
*
* Authored by: Hariraj Arunachalam
* Date       : 28/10/2022 
*
*/

package main
import (
    "fmt"
    "strings"
    "bufio"
    "os"
    "log"
)

func reverse(str string) string {
    var revStrArr []string
    if (len(str) <= 1){
        return str
    } else {
        for j := len(str) - 1; j >= 0; j-- {
            revStrArr = append(revStrArr, string(str[j]))
        }
        return strings.Join(revStrArr, "")
    }
}

func main() {
    scanner := bufio.NewScanner(os.Stdin)
    fmt.Print("Enter the sentence: ")
    scanner.Scan()
    err := scanner.Err()
    if(err != nil){
        log.Fatal(err)
    }
    sentence := scanner.Text()
    splittedWordArr := strings.Split(sentence, " ")
    var reversedWordArr []string
    for i := 0; i < len(splittedWordArr); i++ {
        reversedWordArr = append(reversedWordArr, reverse(splittedWordArr[i]))
    }
    fmt.Println("The reversed words in a sentence: ",strings.Join(reversedWordArr, " "))
}
