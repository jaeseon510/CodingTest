package main

import "fmt"

func main() {
    var str string
    fmt.Scan(&str)

    fan := ":fan:"

    fmt.Println(fan + fan + fan)
    fmt.Println(fan + ":" + str + ":" + fan)
    fmt.Print(fan + fan + fan)
}
