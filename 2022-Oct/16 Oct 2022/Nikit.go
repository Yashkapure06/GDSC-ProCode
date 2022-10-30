package main

import "fmt"

func addMatrices(a, b [][]int) [][]int {
    for i := range a {
        for j := range a[i] {
            a[i][j] += b[i][j]
        }
    }
    return a
}

type Test struct {
    a, b, expected [][]int
}

func main() {
    tests := []Test{
        {
            a: [][]int{{1, 1, 1, 1},{2, 2, 2, 2},{3, 3, 3, 3},{4, 4, 4, 4}},
            b: [][]int{{1, 1, 1, 1},{2, 2, 2, 2},{3, 3, 3, 3},{4, 4, 4, 4}},
            expected: [][]int{{2, 2, 2, 2},{4, 4, 4, 4},{6, 6, 6, 6},{8, 8, 8, 8}},
        },
        {
            a: [][]int{{1, 2, 3, 2}, {2, 1, 2, 3}, {2, 3, 1, 3}, {2, 3, 4, 5}},
            b: [][]int{{1, 2, 4, 2},{2, 2, 2, 3},{3, 5, 3, 3},{1, 4, 3, 4}},
            expected: [][]int{{2, 4, 7, 4},{4, 3, 4, 6},{5, 8, 4, 6},{3, 7, 7, 9}},
        },
    }
    for i, test := range tests {
        actual := addMatrices(test.a, test.b)
        if !areMatricesEqual(actual, test.expected) {
            fmt.Println("Test failed.")
            fmt.Printf("Expected %v got %v.\n", test.expected, actual)
        }else{
            fmt.Printf("Test %v passed.\n", i+1)
        }
    }
}

func areMatricesEqual(a, b [][]int) bool {
    if len(a) != len(b) {
        return false
    }
    for i := range a {
        if len(a[i]) != len(b[i]) {
            return false
        }
        for j := range a[i] {
            if a[i][j] != b[i][j] {
                return false
            }
        }
    }
    return true
}
