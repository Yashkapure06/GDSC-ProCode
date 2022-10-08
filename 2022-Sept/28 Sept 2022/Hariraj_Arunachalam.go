package main
import "fmt"

func main() {
  var n int
  fmt.Print("Enter the number: ")
  fmt.Scanf("%d", &n)
  fmt.Println("The entered value is", n)
  
  for i := 1; i <= n; i++ {
    ch := 'A'
    ascii := int(ch) + (n-1);
    for j := 1; j <= n; j++ {
      if(i > j){
        fmt.Print("\t")
      } else {
        fmt.Print(string(ascii), "\t")
        ascii--
      }
    }
    ascii++
    for j := n; j >= i; j-- {
      fmt.Print(string(ascii), "\t")
      ascii++
    }
    fmt.Println()
  }
}
