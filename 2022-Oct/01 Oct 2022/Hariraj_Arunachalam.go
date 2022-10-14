package main
import "fmt"

func main() {
    var str string
    fmt.Print("Enter the string: ")
    fmt.Scanf("%s", &str);
    var ch = []byte(str)
    var reversedCh []byte
    for i := len(ch)-1 ; i >= 0; i-- {
        reversedCh = append(reversedCh,ch[i])
    }
    if(string(reversedCh) == str){
        fmt.Printf("%s is a Palindrome", str)
    } else {
        fmt.Println(str, "is NOT a Palindrome")
    }
}
