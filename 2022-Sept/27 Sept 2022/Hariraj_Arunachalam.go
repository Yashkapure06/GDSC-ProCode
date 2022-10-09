package main

import "fmt"

func main() {
  var n int
  fmt.Print("Enter the value of n: ")
  fmt.Scanf("%d", &n)
  for i := 1; i <= n; i++ {
    ch := 'A'
    ascii := int(ch)
    for j := 1; j <= i ; j++ {
      fmt.Print(string(ascii), " ")
      ascii++
    }
    fmt.Println()
  }  
}
