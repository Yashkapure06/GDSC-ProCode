package main

import "fmt"

func main() {
  var n int
  fmt.Print("Enter the value of n: ")
  fmt.Scanf("%d", &n)
  for i := 1; i <= n; i++ {
    num := i
    for j := 1; j <= i ; j++ {
      fmt.Print(num, "\t")
      num++
    }
    fmt.Println()
  }  
}
