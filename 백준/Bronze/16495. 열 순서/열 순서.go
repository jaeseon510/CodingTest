package main

import (
	"fmt"
)

func main() {
	var column string
	fmt.Scanln(&column)

	result := 0
	length := len(column)

	for i := 0; i < length; i++ {
		value := int(column[i] - 'A' + 1)
		result = result*26 + value
	}

	fmt.Println(result)
}
