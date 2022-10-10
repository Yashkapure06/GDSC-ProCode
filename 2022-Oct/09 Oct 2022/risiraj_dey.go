package main

import (
        "bufio"
        "fmt"
        "os"
        "reflect"
        "strings"
)

var l = []interface{}{}

func comb(str1 string, str2 string, i int) {
        if reflect.DeepEqual(i, len(str1)) {
                l = append(l, str2)
                return
        }
        comb(str1, str2, i + 1)
        comb(str1, str2 + string(str1[i]), i + 1)
}

func main() {
        str1 := func() string {
                        text, _ := bufio.NewReader(os.Stdin).ReadString('\n')
                        return strings.ReplaceAll(text, "\n", "")
        }()
        comb(str1, " ", 0)
        for i := len(l) - 1; i > -1; i-- {
                str := fmt.Sprint(l[i])
                str_ := strings.TrimLeft(str, "\t \n")
                fmt.Print(str_ + " ")
        }
}
