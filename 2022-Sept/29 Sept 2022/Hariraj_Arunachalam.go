package main

import "fmt"

func main() {
	var n int
	fmt.Print("Enter the number: ")
	fmt.Scanf("%d", &n)
	for i := 1; i <= n; i++ {
        str := 'z'
        num := int(str)
	    for j := n; j >= i; j-- {
	        fmt.Print(string(num), " ")
	        num--;
	    }
	    fmt.Println("")
	}
}