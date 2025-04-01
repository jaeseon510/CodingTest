package main

import (
	"bufio"
	"fmt"
	"os"
)

func main() {
	scanner := bufio.NewScanner(os.Stdin)
	writer := bufio.NewWriter(os.Stdout)
	defer writer.Flush()

	for {
		var R, C int
		scanner.Scan()
		fmt.Sscanf(scanner.Text(), "%d %d", &R, &C)
		if R == 0 && C == 0 {
			break
		}

		board := make([][]rune, R)
		for i := 0; i < R; i++ {
			scanner.Scan()
			board[i] = []rune(scanner.Text())
		}

		result := make([][]rune, R)
		for i := range result {
			result[i] = make([]rune, C)
		}

		directions := [][2]int{
			{-1, -1}, {-1, 0}, {-1, 1},
			{0, -1}, {0, 1},
			{1, -1}, {1, 0}, {1, 1},
		}

		for i := 0; i < R; i++ {
			for j := 0; j < C; j++ {
				if board[i][j] == '*' {
					result[i][j] = '*'
				} else {
					count := 0
					for _, dir := range directions {
						newRow, newCol := i+dir[0], j+dir[1]
						if newRow >= 0 && newRow < R && newCol >= 0 && newCol < C {
							if board[newRow][newCol] == '*' {
								count++
							}
						}
					}
					result[i][j] = rune('0' + count)
				}
			}
		}

		for i := 0; i < R; i++ {
			writer.WriteString(string(result[i]) + "\n")
		}
	}
}
