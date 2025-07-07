package main

import (
	"fmt"
)

func main() {
	var s string
	fmt.Scanln(&s)

	i := 0
	n := len(s)

	for i < n {
		if i+1 < n && s[i:i+2] == "pi" {
			i += 2
		} else if i+1 < n && s[i:i+2] == "ka" {
			i += 2
		} else if i+2 < n && s[i:i+3] == "chu" {
			i += 3
		} else {
			fmt.Println("NO")
			return
		}
	}
	fmt.Println("YES")
}
