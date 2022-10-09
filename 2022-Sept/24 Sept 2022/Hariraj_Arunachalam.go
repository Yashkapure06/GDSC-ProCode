package main

import "fmt"

func main() {
  var n int
  fmt.Print("Enter the value of n: ")
  fmt.Scanf("%d", &n)
  for i := 1; i <= n; i++ {
    for j := 1; j <= n ; j++ {
      fmt.Print(i, " ")
    }
    fmt.Println()
  }  
}
