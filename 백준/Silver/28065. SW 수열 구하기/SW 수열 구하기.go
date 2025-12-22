package main

import (
	"fmt"
)

func main() {
	var n int
	fmt.Scan(&n)

	num := 1
	for i := 1; i <= n; i++ {
		fmt.Print(num, " ")
		if i%2 == 1 {
			num += n - i
		} else {
			num -= n - i
		}
	}
}
