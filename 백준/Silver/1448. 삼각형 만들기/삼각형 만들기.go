package main

import (
    "bufio"
    "fmt"
    "os"
    "sort"
    "strconv"
)

func main() {
    reader := bufio.NewReader(os.Stdin)
    nStr, _ := reader.ReadString('\n')
    n, _ := strconv.Atoi(nStr[:len(nStr)-1])

    arr := make([]int, n)
    for i := 0; i < n; i++ {
        numStr, _ := reader.ReadString('\n')
        arr[i], _ = strconv.Atoi(numStr[:len(numStr)-1])
    }

    sort.Ints(arr)
    for i := n - 3; i >= 0; i-- {
        if arr[i] + arr[i+1] > arr[i+2] {
            fmt.Println(arr[i] + arr[i+1] + arr[i+2])
            return
        }
    }
    fmt.Println(-1)
}
