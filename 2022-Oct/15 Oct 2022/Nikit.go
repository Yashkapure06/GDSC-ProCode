package main

import "fmt"

// rotateArrayFromLeft rotates an array from left by d elements
func rotateArrayFromLeft(arr []int, d int) []int {
    if d == 0 {
        return arr
    }
    d = d % len(arr)
    return append(arr[d:], arr[:d]...)
}

type Test struct {
    arr []int
    d int
    expected []int
}

func main() {
    tests := []Test{
        {[]int{1, 2, 3, 4, 5, 6, 7}, 2, []int{3, 4, 5, 6, 7, 1, 2}},
        {[]int{3, 4, 5, 6, 7, 1, 2}, 3, []int{6, 7, 1, 2, 3, 4, 5}},
    }
    for i, test := range tests {
        rotatedArray := rotateArrayFromLeft(test.arr, test.d)
        if !AreSlicesEqual(rotatedArray, test.expected) {
            fmt.Printf("Test %v failed.\n", i+1)
            fmt.Printf("Expected %v, got %v\n", test.expected, rotatedArray)
        }else{
            fmt.Printf("Test %v passed.\n", i+1)
        }
    }
}

func AreSlicesEqual(a, b []int) bool {
	if len(a) != len(b) {
		return false
	}
	for i := range a {
		if a[i] != b[i] {
			return false
		}
	}
	return true
}


// By Nikit
