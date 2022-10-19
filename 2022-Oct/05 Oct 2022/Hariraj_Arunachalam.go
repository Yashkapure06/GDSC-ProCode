/**
*
* Authored by: Hariraj Arunachalam
* Date       : 18/10/2022
*
*/


package main
import (
    "fmt"
    "strings"
    "bufio"
    "os"
    "log"
    "math"
)

func findMaxWordCount(wordLength int, wordArr []string, largestWordCount int) int {
    if(wordLength > 0){
        max := math.Max(float64(len(wordArr[wordLength - 1])), float64(largestWordCount))
        largestWordCount = int(max)
        fmt.Println(largestWordCount,"The maximum")
        return findMaxWordCount(wordLength - 1, wordArr, largestWordCount)
    } 
    return largestWordCount
}

func main() {
    scanner := bufio.NewScanner(os.Stdin)
    fmt.Print("Enter the sentence: ")
    scanner.Scan()
    err := scanner.Err()
    if err != nil {
        log.Fatal(err)
    }
    sentence := scanner.Text()
    words := strings.Split(strings.Trim(sentence, "\""), " ")
    var largestWordCount int
    fmt.Printf("The Largest word count is %d", findMaxWordCount(len(words), words, largestWordCount) )
}
