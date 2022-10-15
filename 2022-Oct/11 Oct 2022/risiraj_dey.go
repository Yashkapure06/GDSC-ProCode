package main

import (
        "bufio"
        "fmt"
        "strings"
        "os"
)

func main() {
        var l, l_ = []interface{}{}, []interface{}{}
        count := 0
        scanner := bufio.NewScanner(os.Stdin)
        scanner.Scan()
        str1 := strings.Split(strings.ToLower(scanner.Text()), " ")
        runes := []rune(scanner.Text())
        for i, j := 0, len(runes)-1; i < j; i, j = i+1, j-1 {
                runes[i], runes[j] = runes[j], runes[i]
        }
        l = append(l, string(runes))
        w := strings.Split(strings.ToLower(fmt.Sprint(l[0])), " ")
        for i := len(w) - 1; i > -1; i-- {
                l_ = append(l_, w[i])
        }
        if len(scanner.Text()) != 0 {
                for i := 0; i < len(str1); i++ {
                        if str1[i] == l_[i] {
                                count++
                        }
                }
        }
        fmt.Println(count)

}
