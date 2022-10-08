package main

import "fmt"

func main() {
  var r, c int
  fmt.Print("Enter the number of rows & columns: ")
  fmt.Scanf("%d", &r)
  fmt.Scanf("%d", &c)
  for i := 1; i <= r; i++ {
    for j := 1; j <= c ; j++ {
      fmt.Print(j, " ")
    }
    fmt.Println()
  }  
}
