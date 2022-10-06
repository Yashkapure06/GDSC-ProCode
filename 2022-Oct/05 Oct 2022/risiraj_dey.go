package main

import (
        "bufio"
        "fmt"
        "log"
        "os"
        "strings"
)

func main() {
        scanner := bufio.NewScanner(os.Stdin)
	l := 0
	scanner.Scan()
        err := scanner.Err()
        if err != nil {
                log.Fatal(err)
        }
        words := strings.Split(scanner.Text(), " ")
        for i := 0; i < len(words); i++ {
		lw := len(string(words[i]))
		if lw > l{
			l = lw
		}	
        }
        fmt.Println(l)
}
